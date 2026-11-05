Materiais de referencia do shader do glTFast (opaco e alpha test, com e sem GPU instancing). Os modelos sao importados
em tempo de execucao, entao sem estes materiais o build removia as variantes _ALPHATEST_ON/INSTANCING_ON e, com
"Strict Shader Variant Matching", a vegetacao e o cenario saiam magenta (sem ele, sem alpha test). Nao apagar.
