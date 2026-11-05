#!/bin/sh
# Atualiza o monorepo espelho com o main dos tres repos do workspace e envia para o GitHub.
# Uso (na pasta github-mono): sh sync.sh
set -e
cd "$(dirname "$0")"
W="$(cd .. && pwd)"
for r in l2unity analises tarefas; do
  git subtree pull -q --prefix="$r" "$W/$r" main -m "Sincroniza $r ($(git -C "$W/$r" rev-parse --short main))"
done
# arquivos da raiz do workspace que nao estao em nenhum repo
cp "$W/CLAUDE.md" "$W/TAREFAS.md" .
git add CLAUDE.md TAREFAS.md
git diff --cached --quiet || git commit -q -m "Sincroniza CLAUDE.md e TAREFAS.md"
git push -q origin main
git log --oneline -1
