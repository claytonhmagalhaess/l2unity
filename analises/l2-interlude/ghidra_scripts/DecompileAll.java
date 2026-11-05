// Decompila TODAS as funcoes do programa e grava em blocos: <saida>/<programa>/<bloco>.c (1000 funcoes por arquivo),
// mais <saida>/<programa>/index.tsv (endereco, nome, arquivo, status: ok | falhou:<motivo> | thunk -> destino).
// Args: <pasta_saida>
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import java.io.*;

public class DecompileAll extends GhidraScript {
    @Override
    public void run() throws Exception {
        String prog = currentProgram.getName().replaceAll("\\.[^.]+$", "").toLowerCase();
        File dir = new File(getScriptArgs()[0], prog);
        dir.mkdirs();
        DecompInterface di = new DecompInterface();
        DecompileOptions opt = new DecompileOptions();
        di.setOptions(opt);
        di.toggleCCode(true);
        di.openProgram(currentProgram);
        PrintWriter idx = new PrintWriter(new OutputStreamWriter(new FileOutputStream(new File(dir, "index.tsv")), "UTF-8"));
        PrintWriter out = null;
        int n = 0, ok = 0, fail = 0;
        String file = null;
        for (Function fn : currentProgram.getFunctionManager().getFunctions(true)) {
            if (monitor.isCancelled()) break;
            if (n % 1000 == 0) {
                if (out != null) out.close();
                file = String.format("%05d.c", n / 1000);
                out = new PrintWriter(new OutputStreamWriter(new FileOutputStream(new File(dir, file)), "UTF-8"));
            }
            n++;
            String addr = fn.getEntryPoint().toString();
            if (fn.isThunk() && fn.getThunkedFunction(true) != null) {
                idx.println(addr + "\t" + fn.getName(true) + "\t" + file + "\tthunk -> " + fn.getThunkedFunction(true).getEntryPoint());
                out.println("// ==== " + addr + " " + fn.getName(true) + " thunk -> " + fn.getThunkedFunction(true).getEntryPoint() + "\n");
                ok++;
                continue;
            }
            String status;
            try {
                DecompileResults r = di.decompileFunction(fn, 60, monitor);
                if (r != null && r.decompileCompleted() && r.getDecompiledFunction() != null) {
                    out.println("// ==== " + addr + " " + fn.getName(true));
                    out.println(r.getDecompiledFunction().getC());
                    status = "ok";
                    ok++;
                } else {
                    String msg = r == null ? "null" : r.getErrorMessage();
                    status = "falhou:" + (msg == null ? "" : msg.replaceAll("[\\t\\r\\n]+", " "));
                    out.println("// ==== " + addr + " " + fn.getName(true) + " (decompilacao falhou: " + status + ")\n");
                    fail++;
                }
            } catch (Exception e) {
                status = "falhou:" + e.getClass().getSimpleName();
                fail++;
            }
            idx.println(addr + "\t" + fn.getName(true) + "\t" + file + "\t" + status);
            if (n % 5000 == 0) println(prog + ": " + n + " funcoes");
        }
        if (out != null) out.close();
        idx.close();
        di.dispose();
        println(prog + ": total " + n + ", decompiladas " + ok + ", falhas " + fail);
    }
}
