# Exercicio 3

Neste exercicio tinhamos como objetivo analisar o desempenho de diferentes programas levando em consideração a quantidade de ciclos executados ao invés do tempo de execução como nos exercícios passados. Para isto utilizamos um simulador do processador MIPS criado utilizando ArchC, que consiste em uma linguagem de descrição de arquitetura de processadores que tem como finalidade ajudar projetistas durante o desenvolvimento de um processador.

O número de ciclos é um dado importante a ser analisado pois diferente do tempo de execução ele não é tão afetado por outros fatores externos, como por exemplo se a máquina estava executando outros processos durante o teste ou não, o que torna este dado muitas vezes mais confiável para uma avaliação de desempenho entre diferentes computadores.

# Hello World

Nossa primeira tarefa foi criar um simples programa HelloWorld na linguagem C, gerar o código em MIPS e então contar quantas vezes a instrução **add** foi utilizada. Para isto precisamos modificar um pouco o código gerado pelo simulador. As instruções do simulador ficam contidas em dois arquivos:  mips1_isa.ac e mips1_isa.cpp. O segundo arquivo contém a implementação do comportamento de cada instrução em si, dessa forma modificamos o comportamento da função **add** para incluir um contador desta instrução. Além disso tivemos que modificar as funções **begin** e **end** que são chamadas no começo e fim da simulação respectivamente.

Fazendo estas alterações e executando novamente o simulador vemos que o total de instruções **add** foi zero. Este resultado parece estranho por que sabemos que várias adições deveriam ser realizadas pelo processador durante a execução. Para ter um nova ideia se a contagem estava certa o que fizemos foi modificar o código do nosso programa para incluir algumas adições entre variáveis e executamos novamente. Surpreendentemente o número de instruções **add** continuou zero.

Para entender este resultado podemos executar o simulador usando a flag _objdump_ que nos mostra todas as instruções utilizadas. Analisando a saida agora vemos que nenhuma instrução **add** foi de fato utilizada contudo várias instruções **addu** foram chamadas. A diferença dessa segunda instrução para a primeira é que ela evita problemas com o overflow entre inteiros, dessa forma provavelmente nosso compilador preferiu utilizar esta instrução ao invés da primeira.

# Avaliação de desempenho

Nesta etapa do exercício nós executamos 3 programas diferentes e medimos o número de vezes que uma instrução foi chamada. Com este dado, e sabendo o CPI médio de cada instrução nós podemos então calcular qual foi o número total de ciclos utilizados pelos processador. Para que não fosse necessário alterar todo o código do simulador, para contabilizar número que cada intrução foi chamada, nós utlizamos a flag _-s_ do simulador que gera estatísticas da simulação programa que já nos traz essas informações.

Os programas utilizados para teste foram: **patricia**, **rijndael decoder**, **susan corners**
