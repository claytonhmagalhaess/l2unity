# Área Net (vaga `worktrees\net`)

Rede do cliente: login (RSA + Blowfish), game server (XOR `GameCrypt`), leitura e escrita de pacotes. A leitura roda numa thread e despacha na thread principal (`NetPump`).

**Specs** (em `C:\Users\Clayton\workspace-claude\L2Unity-workspace\analises\l2-interlude\client_spec\`): `92_protocolo_opcodes.md`, `94_pacotes_servidor_cliente.md`, `95_pacotes_cliente_servidor.md`, `96_mapa_pacote_evento_janela.md`, `88_verificacao_cadeias.md`, e formatos/cripto em `93_validacao_nativa.md`. Para comparar com outra implementação: `C:\Users\Clayton\workspace-claude\L2Unity-workspace\analises\spark-l2unity\client\network.md`.

**Arquivos**: `Transport`, `Packet`, `LoginClient`/`LoginCrypt`/`Rsa`/`Blowfish*`, `GameClient`/`GameCrypt`, `GamePackets`, `UiPackets`, `SocialPackets`, `PetPackets` (pet/servo, ainda não despachados no `App.cs`), `LoginMessages`.

**Testes**: `CryptoTests`, `PacketTests`, `ReceivedPacketTests`, `RequestFormatTests`, `LoginMessageTests`, `EventPairTests`, `PetPacketTests`, `ReceivedLayoutTests`.

**Regras**
- O servidor (aCis) não é modificado. Dois protocolos: "Servidor com HWID (515)" e "aCis original (746)"; não quebre nenhum dos dois.
- Pacote novo que dispara evento de UI: siga o `96_mapa_pacote_evento_janela.md` e avise a vaga `ui` pelo `TAREFAS.md` em vez de editar `Scripts/UI`.
