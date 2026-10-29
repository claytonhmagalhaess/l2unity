// Cria funcoes (desmontando antes, se preciso) nos enderecos listados num arquivo texto separado por espacos.
// Usado para os tratadores de pacote do engine.dll, referenciados so por "mov [tabela], imm" e por isso nao
// reconhecidos como funcao pela autoanalise. Args: <arquivo_enderecos.txt>
import ghidra.app.script.GhidraScript;
import ghidra.app.cmd.function.CreateFunctionCmd;
import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import java.nio.file.*;

public class CreateFuncsAt extends GhidraScript {
    @Override
    public void run() throws Exception {
        String txt = new String(Files.readAllBytes(Paths.get(getScriptArgs()[0]))).trim();
        int created = 0, existed = 0, failed = 0;
        for (String s : txt.split("\\s+")) {
            Address a = toAddr(s);
            if (getFunctionAt(a) != null) { existed++; continue; }
            Function inside = getFunctionContaining(a);
            if (inside != null) {
                // um corpo anterior engoliu este endereco: reduz o corpo antigo recriando-o depois
                removeFunction(inside);
            }
            new DisassembleCommand(a, null, true).applyTo(currentProgram, monitor);
            if (new CreateFunctionCmd(a).applyTo(currentProgram, monitor) && getFunctionAt(a) != null) created++;
            else { failed++; println("falhou: " + s); }
            if (inside != null && getFunctionAt(inside.getEntryPoint()) == null)
                new CreateFunctionCmd(inside.getEntryPoint()).applyTo(currentProgram, monitor);
        }
        println("funcoes criadas: " + created + ", ja existiam: " + existed + ", falharam: " + failed);
    }
}
