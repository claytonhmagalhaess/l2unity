// Exporta o grafo de chamadas do programa: uma linha por funcao, "<entrada>\t<nome>\t<callee1>,<callee2>,..."
// (thunks seguidos ate o destino). Args: <arquivo_saida.tsv>
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import java.io.*;

public class ExportCallGraph extends GhidraScript {
    @Override
    public void run() throws Exception {
        PrintWriter out = new PrintWriter(new OutputStreamWriter(new FileOutputStream(getScriptArgs()[0]), "UTF-8"));
        int n = 0;
        for (Function f : currentProgram.getFunctionManager().getFunctions(true)) {
            StringBuilder cs = new StringBuilder();
            for (Function g : f.getCalledFunctions(monitor)) {
                while (g.isThunk() && g.getThunkedFunction(true) != null) g = g.getThunkedFunction(true);
                if (cs.length() > 0) cs.append(',');
                cs.append(g.getEntryPoint());
            }
            Function t = f;
            String thunkTo = "";
            if (f.isThunk() && f.getThunkedFunction(true) != null) thunkTo = f.getThunkedFunction(true).getEntryPoint().toString();
            out.println(f.getEntryPoint() + "\t" + f.getName(true) + "\t" + cs + "\t" + thunkTo);
            n++;
        }
        out.close();
        println("funcoes exportadas: " + n);
    }
}
