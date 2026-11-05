// Decompila funcoes em enderecos dados (sem analise completa do programa).
// Args: <arquivo_saida> <addr1> <addr2> ...
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.app.cmd.function.CreateFunctionCmd;
import ghidra.app.cmd.disassemble.DisassembleCommand;
import java.io.*;

public class DecompAt extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        PrintWriter out = new PrintWriter(new FileWriter(args[0]));
        DecompInterface di = new DecompInterface();
        di.openProgram(currentProgram);
        for (int i = 1; i < args.length; i++) {
            Address a = toAddr(args[i]);
            DisassembleCommand dc = new DisassembleCommand(a, null, true);
            dc.applyTo(currentProgram, monitor);
            Function f = getFunctionAt(a);
            if (f == null) {
                CreateFunctionCmd cf = new CreateFunctionCmd(a);
                cf.applyTo(currentProgram, monitor);
                f = getFunctionAt(a);
            }
            out.println("// ==== " + args[i] + " " + (f == null ? "?" : f.getName()));
            if (f == null) { out.println("// falhou criar funcao"); continue; }
            DecompileResults r = di.decompileFunction(f, 120, monitor);
            if (r != null && r.decompileCompleted()) out.println(r.getDecompiledFunction().getC());
            else out.println("// falhou: " + (r == null ? "null" : r.getErrorMessage()));
            out.flush();
        }
        out.close();
    }
}
