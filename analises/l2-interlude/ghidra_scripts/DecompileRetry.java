// Nova tentativa de decompilar funcoes que falharam no DecompileAll: timeout maior e limite de instrucoes maior.
// Args: <arquivo_saida.c> <timeout_s> [style:decompile|normalize|register|firstpass] (":" porque o cmd do analyzeHeadless.bat quebra argumentos no "=") <endereco1> [<endereco2> ...]
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import java.io.*;

public class DecompileRetry extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] a = getScriptArgs();
        int timeout = Integer.parseInt(a[1]);
        DecompInterface di = new DecompInterface();
        DecompileOptions opt = new DecompileOptions();
        opt.setMaxInstructions(1000000);
        opt.setMaxPayloadMBytes(512);
        di.setOptions(opt);
        di.toggleCCode(true);
        int first = 2;
        if (a.length > 2 && a[2].startsWith("style:")) {
            di.setSimplificationStyle(a[2].substring(6));
            first = 3;
        }
        di.openProgram(currentProgram);
        PrintWriter out = new PrintWriter(new OutputStreamWriter(new FileOutputStream(a[0]), "UTF-8"));
        for (int i = first; i < a.length; i++) {
            Function fn = getFunctionAt(toAddr(a[i]));
            if (fn == null) { out.println("// ==== " + a[i] + " (sem funcao)"); continue; }
            DecompileResults r;
            try {
                r = di.decompileFunction(fn, timeout, monitor);
            } catch (Exception e) {
                out.println("// ==== " + a[i] + " " + fn.getName(true) + " falhou: " + e);
                println(a[i] + " falhou: " + e);
                continue;
            }
            if (first == 3 && r != null && r.getHighFunction() != null) {
                // estilos sem C (normalize/register/firstpass): grava o P-code de alto nivel, operacao por operacao
                out.println("// ==== " + a[i] + " " + fn.getName(true) + " ok (P-code, estilo " + a[2].substring(6) + ")");
                java.util.Iterator<ghidra.program.model.pcode.PcodeOpAST> it = r.getHighFunction().getPcodeOps();
                int n = 0;
                while (it.hasNext()) {
                    ghidra.program.model.pcode.PcodeOpAST op = it.next();
                    out.println("  " + op.getSeqnum().getTarget() + "  " + op.toString());
                    n++;
                }
                println(a[i] + " ok (P-code, " + n + " operacoes)");
                out.flush();
                continue;
            }
            if (r != null && r.decompileCompleted() && r.getDecompiledFunction() != null) {
                out.println("// ==== " + a[i] + " " + fn.getName(true) + " ok");
                out.println(r.getDecompiledFunction().getC());
                println(a[i] + " ok");
            } else {
                String msg = r == null ? "null" : r.getErrorMessage();
                out.println("// ==== " + a[i] + " " + fn.getName(true) + " falhou: " + msg);
                println(a[i] + " falhou: " + msg);
            }
            out.flush();
        }
        out.close();
        di.dispose();
    }
}
