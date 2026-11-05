// Igual a ExportCallGraph.java, mas grava <pasta>/<nome_do_programa>_callgraph.tsv (para importar varios modulos de uma vez).
// Args: <pasta_saida>
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import java.io.*;

public class ExportCallGraphDir extends GhidraScript {
    @Override
    public void run() throws Exception {
        String name = currentProgram.getName().replaceAll("\\.[^.]+$", "").toLowerCase();
        File f = new File(getScriptArgs()[0], name + "_callgraph.tsv");
        PrintWriter out = new PrintWriter(new OutputStreamWriter(new FileOutputStream(f), "UTF-8"));
        int n = 0;
        for (Function fn : currentProgram.getFunctionManager().getFunctions(true)) {
            StringBuilder cs = new StringBuilder();
            for (Function g : fn.getCalledFunctions(monitor)) {
                while (g.isThunk() && g.getThunkedFunction(true) != null) g = g.getThunkedFunction(true);
                if (cs.length() > 0) cs.append(',');
                cs.append(g.getEntryPoint());
            }
            String thunkTo = "";
            if (fn.isThunk() && fn.getThunkedFunction(true) != null) thunkTo = fn.getThunkedFunction(true).getEntryPoint().toString();
            out.println(fn.getEntryPoint() + "\t" + fn.getName(true) + "\t" + cs + "\t" + thunkTo);
            n++;
        }
        out.close();
        println(name + ": funcoes exportadas: " + n);
    }
}
