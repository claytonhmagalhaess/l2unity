// Decompila as funcoes dadas e, recursivamente, as que elas chamam ate a profundidade indicada.
// Args: <arquivo_saida.c> <profundidade> <endereco1> [<endereco2> ...]
// Cada bloco: "// ==== <entrada> <nome> depth=<n> from=<pai> callees=<nome@entrada ...>" + "// strings: ..." + C.
// Thunks sao seguidos ate o destino. Usado a partir de UNetworkHandler::DispatchNetworkQueue (switch de opcodes).
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.util.*;

public class ExtractCallTree extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        PrintWriter out = new PrintWriter(new OutputStreamWriter(new FileOutputStream(args[0]), "UTF-8"));
        int maxDepth = Integer.parseInt(args[1]);
        DecompInterface di = new DecompInterface();
        di.openProgram(currentProgram);
        Set<Address> seen = new HashSet<>();
        Deque<Object[]> queue = new ArrayDeque<>();
        for (int k = 2; k < args.length; k++) {
            Function f = getFunctionContaining(toAddr(args[k]));
            if (f != null) queue.add(new Object[]{f, 0, "raiz"});
        }
        int count = 0;
        while (!queue.isEmpty()) {
            Object[] it = queue.poll();
            Function f = (Function) it[0];
            int depth = (Integer) it[1];
            while (f.isThunk() && f.getThunkedFunction(true) != null) f = f.getThunkedFunction(true);
            if (f.isExternal() || !seen.add(f.getEntryPoint())) continue;
            count++;
            Set<Function> callees = f.getCalledFunctions(monitor);
            StringBuilder cs = new StringBuilder();
            for (Function g : callees) cs.append(g.getName(true)).append('@').append(g.getEntryPoint()).append(' ');
            out.println("// ==== " + f.getEntryPoint() + " " + f.getName(true) + " depth=" + depth + " from=" + it[2] + " callees=" + cs.toString().trim());
            StringBuilder strs = new StringBuilder();
            for (Address a : f.getBody().getAddresses(true)) {
                for (Reference ref : getReferencesFrom(a)) {
                    Data d = getDataAt(ref.getToAddress());
                    if (d != null && d.hasStringValue())
                        strs.append(ref.getToAddress()).append('=').append(String.valueOf(d.getValue()).replace("\n", "\\n")).append(" | ");
                }
            }
            out.println("// strings: " + strs);
            DecompileResults r = di.decompileFunction(f, 240, monitor);
            if (r != null && r.decompileCompleted()) out.println(r.getDecompiledFunction().getC());
            else out.println("// falhou: " + (r == null ? "null" : r.getErrorMessage()));
            out.flush();
            if (depth < maxDepth)
                for (Function g : callees) queue.add(new Object[]{g, depth + 1, f.getName(true)});
        }
        println("funcoes decompiladas: " + count);
        out.close();
    }
}
