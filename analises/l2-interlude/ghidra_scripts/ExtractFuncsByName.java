// Decompila todas as funcoes cujo nome (com namespace, ex. "UNetworkHandler::RequestAttack") casa com uma regex.
// Args: <arquivo_saida.c> <regex> [<regex> ...]
// Cada bloco: "// ==== <entrada> <nome> callees=<nome@entrada ...>" + "// strings: ..." + C.
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.util.*;
import java.util.regex.*;

public class ExtractFuncsByName extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        PrintWriter out = new PrintWriter(new OutputStreamWriter(new FileOutputStream(args[0]), "UTF-8"));
        List<Pattern> pats = new ArrayList<>();
        for (int k = 1; k < args.length; k++) pats.add(Pattern.compile(args[k]));
        DecompInterface di = new DecompInterface();
        di.openProgram(currentProgram);
        int count = 0;
        for (Function f : currentProgram.getFunctionManager().getFunctions(true)) {
            String name = f.getName(true);
            boolean hit = false;
            for (Pattern p : pats) if (p.matcher(name).find()) { hit = true; break; }
            if (!hit || f.isThunk() || f.isExternal()) continue;
            count++;
            StringBuilder calls = new StringBuilder();
            for (Function g : f.getCalledFunctions(monitor)) calls.append(g.getName(true)).append('@').append(g.getEntryPoint()).append(' ');
            out.println("// ==== " + f.getEntryPoint() + " " + name + " callees=" + calls.toString().trim());
            StringBuilder strs = new StringBuilder();
            for (Address a : f.getBody().getAddresses(true)) {
                for (Reference ref : getReferencesFrom(a)) {
                    Data d = getDataAt(ref.getToAddress());
                    if (d != null && d.hasStringValue())
                        strs.append(ref.getToAddress()).append('=').append(String.valueOf(d.getValue()).replace("\n", "\\n")).append(" | ");
                }
            }
            out.println("// strings: " + strs);
            DecompileResults r = di.decompileFunction(f, 180, monitor);
            if (r != null && r.decompileCompleted()) out.println(r.getDecompiledFunction().getC());
            else out.println("// falhou: " + (r == null ? "null" : r.getErrorMessage()));
            out.flush();
        }
        println("funcoes decompiladas: " + count);
        out.close();
    }
}
