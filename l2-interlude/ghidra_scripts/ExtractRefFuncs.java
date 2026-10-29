// Decompila toda funcao que referencia (leitura, escrita ou chamada) algum dos enderecos dados e grava o C de cada uma.
// Args: <arquivo_saida.c> <endereco1> [<endereco2> ...]
// Cada bloco: "// ==== <entrada> <nome> target=<endereco> callers=<nome@entrada ...>" + "// strings: ..." + C.
// Usado em engine.dll com o global GL2Console (UL2ConsoleWnd*) para achar as chamadas virtuais engine -> UI.
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.util.*;

public class ExtractRefFuncs extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        PrintWriter out = new PrintWriter(new OutputStreamWriter(new FileOutputStream(args[0]), "UTF-8"));
        DecompInterface di = new DecompInterface();
        di.openProgram(currentProgram);
        Set<Function> done = new HashSet<>();
        for (int k = 1; k < args.length; k++) {
            Address target = toAddr(args[k]);
            List<Function> funcs = new ArrayList<>();
            for (Reference ref : getReferencesTo(target)) {
                Function f = getFunctionContaining(ref.getFromAddress());
                if (f != null && !funcs.contains(f)) funcs.add(f);
            }
            funcs.sort(Comparator.comparing(Function::getEntryPoint));
            println("alvo " + target + ": " + funcs.size() + " funcoes");
            for (Function f : funcs) {
                if (!done.add(f)) continue;
                StringBuilder up = new StringBuilder();
                int n = 0;
                for (Reference r : getReferencesTo(f.getEntryPoint())) {
                    if (n++ > 40) { up.append("..."); break; }
                    Function g = getFunctionContaining(r.getFromAddress());
                    up.append(g != null ? g.getName() + "@" + g.getEntryPoint() : r.getReferenceType() + "@" + r.getFromAddress()).append(' ');
                }
                out.println("// ==== " + f.getEntryPoint() + " " + f.getName(true) + " target=" + target + " callers=" + up.toString().trim());
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
        }
        out.close();
    }
}
