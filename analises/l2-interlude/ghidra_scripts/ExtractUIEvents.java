// Decompila todas as funcoes que chamam o despachante de eventos da UI (NWindow.dll) e grava o C de cada uma.
// Args: <arquivo_saida.c> <endereco_despachante> [<endereco_extra> ...]
// Cada bloco comeca com "// ==== <entrada> <nome> callers=<...>" para o pos-processamento (scripts/native_events.py).
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.util.*;

public class ExtractUIEvents extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        PrintWriter out = new PrintWriter(new OutputStreamWriter(new FileOutputStream(args[0]), "UTF-8"));
        DecompInterface di = new DecompInterface();
        di.openProgram(currentProgram);
        Set<Function> done = new HashSet<>();
        for (int k = 1; k < args.length; k++) {
            Address disp = toAddr(args[k]);
            List<Function> callers = new ArrayList<>();
            for (Reference ref : getReferencesTo(disp)) {
                if (!ref.getReferenceType().isCall()) continue;
                Function f = getFunctionContaining(ref.getFromAddress());
                if (f != null && !callers.contains(f)) callers.add(f);
            }
            callers.sort(Comparator.comparing(Function::getEntryPoint));
            for (Function f : callers) {
                if (!done.add(f)) continue;
                StringBuilder up = new StringBuilder();
                for (Reference r : getReferencesTo(f.getEntryPoint())) {
                    Function g = getFunctionContaining(r.getFromAddress());
                    up.append(g != null ? g.getName() + "@" + g.getEntryPoint() : r.getReferenceType() + "@" + r.getFromAddress()).append(' ');
                }
                out.println("// ==== " + f.getEntryPoint() + " " + f.getName() + " dispatcher=" + disp + " callers=" + up.toString().trim());
                // strings definidas referenciadas pelo corpo (chaves de parametro guardadas em DAT_ nao aparecem como L"..." no C)
                StringBuilder strs = new StringBuilder();
                for (Address a : f.getBody().getAddresses(true)) {
                    for (Reference ref : getReferencesFrom(a)) {
                        Data d = getDataAt(ref.getToAddress());
                        if (d != null && d.hasStringValue()) {
                            String v = String.valueOf(d.getValue()).replace("\n", "\\n");
                            strs.append(ref.getToAddress()).append('=').append(v.replace("\u0001", " ")).append('\u0001');
                        }
                    }
                }
                out.println("// strings: " + strs.toString().replace("\u0001", " | "));
                DecompileResults r = di.decompileFunction(f, 120, monitor);
                if (r != null && r.decompileCompleted()) out.println(r.getDecompiledFunction().getC());
                else out.println("// falhou: " + (r == null ? "null" : r.getErrorMessage()));
                out.flush();
            }
        }
        out.close();
    }
}
