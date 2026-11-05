# Layout do `global-metadata.dat` (versão 39, Unity 6000.3.21f1)

Magic `0xFA B1 1B AF`, versão `0x27` (39). Diferente das versões 24–31 documentadas por Il2CppDumper/Cpp2IL: cada seção do cabeçalho é um **triplo** `(offset u32, size u32, count u32)` e vários structs foram compactados com índices de 16 bits. O que segue foi deduzido por inspeção e validado contra nomes conhecidos (`Assembly-CSharp.dll`, `<Module>`, `.ctor`, `value__`, opcodes de pacote do Interlude).

## Cabeçalho (0x180 bytes, 31 triplos a partir do offset 8)

| # | Seção | offset | size | count | bytes/registro |
|---|---|---|---|---|---|
| 0 | stringLiteral | 0x17C | 0x15640 | 21.904 | 4 (offset u32 em stringLiteralData; comprimento = próximo offset − este) |
| 1 | stringLiteralData | 0x157BC | 0x9AF81 | — | UTF-8 sem terminador |
| 2 | string (identificadores) | 0xB0740 | 0x1E0EA6 | 109.869 | strings 0-terminadas |
| 3 | events | 0x2915E8 | | 247 | 22 |
| 4 | properties | 0x292B24 | | 18.909 | 20 = name u32, get i32, set i32, attrs u32, token u32 |
| 5 | methods | 0x2EF068 | | 98.184 | 30 (abaixo) |
| 6 | parameterDefaultValues | | | 2.421 | 10 |
| 7 | fieldDefaultValues | 0x5C40EC | | 17.199 | 10 = fieldIndex u32, typeIndex u16, dataIndex u32 |
| 8 | fieldAndParameterDefaultValueData | 0x5EE0C8 | 0xBD323 | | bytes (ints "compressed": ver abaixo) |
| 9 | fieldMarshaledSizes | | | 4.456 | 10 |
| 10 | parameters | 0x6B61FC | | 106.287 | 10 = name u32, token u32, typeIndex u16 |
| 11 | fields | 0x7B99D4 | | 64.345 | 10 = name u32, typeIndex u16, ? u16, ? u16 |
| 12 | genericParameters | | | 3.486 | 14 |
| 13 | genericParameterConstraints | | | 1.203 | 2 |
| 14 | genericContainers | | | 2.287 | 16 |
| 15 | nestedTypes | 0x86C24C | | 5.217 | 4 (typedef index) |
| 16 | interfaces | | | 4.010 | 2 |
| 17 | vtableMethods | | | 157.688 | 4 |
| 18 | interfaceOffsets | | | 14.306 | 6 |
| 19 | typeDefinitions | 0x922250 | | 14.141 | 76 (abaixo) |
| 20 | images | 0xA2886C | | 90 | 36 |
| 21 | assemblies | 0xA29514 | | 90 | 68 |
| 22 | fieldRefs | | | 927 | 6 |
| 23 | referencedAssemblies | | | 501 | 4 |
| 24 | attributeData | 0xA2CA8C | 0xEFA28 | | |
| 25 | attributeDataRange | | | 30.225 | 8 |
| 26 | unresolvedIndirectCallParameterTypes | | | 13.089 | 2 |
| 27 | unresolvedIndirectCallParameterRanges | | | 4.383 | 8 |
| 28–29 | windowsRuntime* | | 0 | 0 | |
| 30 | exportedTypeDefinitions | | | 3.091 | 4 |

## `Il2CppImageDefinition` (36 bytes)
`nameIndex u32, assemblyIndex u32, typeStart u16, typeCount u16, exportedTypeStart u16, exportedTypeCount u16, ? u32, entryPointIndex i32, token u32, customAttributeStart u32, customAttributeCount u32`.
Imagem 0 = `Assembly-CSharp.dll` (tipos 0..1656, 1.657 typedefs); imagem 63 = `Assembly-CSharp-firstpass.dll` (12 typedefs). Lista completa: `assemblies.md`.

## `Il2CppTypeDefinition` (76 bytes)
```
u32 nameIndex, u32 namespaceIndex,
u16 byvalTypeIndex, u16 declaringTypeIndex(0xFFFF = nenhum),
u16 parentIndex, u16 genericContainerIndex,
u32 flags (TypeAttributes),
i32 fieldStart, methodStart, eventStart, propertyStart, nestedTypesStart, interfacesStart, vtableStart, interfaceOffsetsStart,
u16 method_count, property_count, field_count, event_count, nested_type_count, vtable_count, interfaces_count, interface_offsets_count,
u32 bitfield, u32 token
```
(elementTypeIndex foi removido; índices de tipo são u16.)

## `Il2CppMethodDefinition` (30 bytes)
```
u32 nameIndex, u16 declaringType, u16 returnType, u32 returnParameterToken,
i32 parameterStart, u16 genericContainerIndex, u16 tokenLow,
u16 implFlags(0x0600 observado), u16 flags (MethodAttributes),
u16 tokenHigh, u16 slot, u16 parameterCount
```
`token = 0x06000000 | tokenLow | tokenHigh<<16`.

## Valores default (`fieldAndParameterDefaultValueData`)
Não são mais ints de largura fixa: enums `byte` guardam 1 byte cru; enums `int` usam o *compressed int32* do IL2CPP (`ReadCompressedUInt32`: 1 byte se `<0x80`, 2 bytes se `(b&0xC0)==0x80` → `((b&0x3F)<<8)|next`, 4 bytes se `(b&0xE0)==0xC0`, `0xF0`+u32; depois zig-zag: `neg=v&1; v>>=1; neg ? -(v+1) : v`). Validado: `GameServerPacketType.StatusUpdate=0x0E`, `ShortcutRegister=0x44`, `NpcHtml=0x0F`, etc.

## Mapeamento método → código nativo
`GameAssembly.dll` (image base `0x180000000`, seções `.text`, `il2cpp` (36,5 MB de código gerado), `.rdata`, `.data`, `.pdata`, `.fptable`, `.reloc`). O `Il2CppCodeGenModule` de cada assembly é achado pelo ponteiro para a string do nome do módulo:

| Módulo | struct @VA | methodPointerCount | methodPointers @VA |
|---|---|---|---|
| Assembly-CSharp.dll | 0x182975740 | 11.469 | 0x183249F10 |
| Assembly-CSharp-firstpass.dll | 0x182969A80 | 29 | 0x183249E20 |

`methodPointers[tokenIndex-1]` = endereço da função. Resultado em `method_rvas.tsv` e inline em `assembly_csharp_api.md`.

Scripts: `../raw/`-adjacentes em `%SCRATCH%/parse_meta.py` e `build_api.py` (copiados em `REA/tools/`).
