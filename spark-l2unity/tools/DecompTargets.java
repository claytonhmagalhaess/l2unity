import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.SourceType;
import java.io.*;
import java.nio.file.*;
import java.util.*;

/* args: targets.tsv outdir [labels.tsv]  — targets/labels lines: name<TAB>0xaddr */
public class DecompTargets extends GhidraScript {
    private Address A(String s) { return toAddr(Long.parseUnsignedLong(s.substring(2), 16)); }
    private void ensureFunction(Address a, String name) {
        Function f = getFunctionAt(a);
        if (f == null) { disassemble(a); f = createFunction(a, name); if (f == null) f = getFunctionContaining(a); }
        if (f != null && name != null && !f.getName().equals(name)) { try { f.setName(name, SourceType.USER_DEFINED); } catch (Exception e) {} }
    }
    public void run() throws Exception {
        String[] args = getScriptArgs();
        List<String> lines = Files.readAllLines(Paths.get(args[0]));
        File out = new File(args[1]); out.mkdirs();
        if (args.length > 2) {
            int n = 0;
            for (String l : Files.readAllLines(Paths.get(args[2]))) { String[] p = l.trim().split("\t"); if (p.length != 2) continue;
                try { createLabel(A(p[1]), p[0], true, SourceType.IMPORTED); n++; } catch (Exception e) {} }
            println("labels " + n);
        }
        List<String[]> targets = new ArrayList<>();
        for (String l : lines) { String[] p = l.trim().split("\t"); if (p.length == 2) targets.add(p); }
        for (String[] t : targets) ensureFunction(A(t[1]), t[0]);
        for (String[] t : targets) {
            Function f = getFunctionAt(A(t[1])); if (f == null) continue;
            for (Instruction ins = getInstructionAt(f.getEntryPoint()); ins != null && f.getBody().contains(ins.getAddress()); ins = ins.getNext()) {
                if (!ins.getFlowType().isCall()) continue;
                for (Reference r : ins.getReferencesFrom())
                    if (r.getReferenceType().isCall() && r.getToAddress().isMemoryAddress() && getFunctionAt(r.getToAddress()) == null) {
                        try { ensureFunction(r.getToAddress(), null); } catch (Exception e) {} }
            }
        }
        DecompInterface di = new DecompInterface(); di.setOptions(new DecompileOptions()); di.openProgram(currentProgram);
        int k = 0;
        for (String[] t : targets) {
            Function f = getFunctionAt(A(t[1])); String text;
            if (f == null) text = "// no function at " + t[1];
            else { DecompileResults r = di.decompileFunction(f, 1500, monitor);
                   text = (r != null && r.getDecompiledFunction() != null) ? r.getDecompiledFunction().getC() : ("// decompile failed: " + (r != null ? r.getErrorMessage() : "null")); }
            try (PrintWriter w = new PrintWriter(new File(out, t[0] + ".c"), "UTF-8")) { w.print("// " + t[0] + " @ " + t[1] + "\n" + text); }
            if (++k % 100 == 0) println("done " + k);
        }
        di.dispose(); println("finished " + k);
    }
}
