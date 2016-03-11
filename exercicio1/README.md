# Exercício 1: Compilação e Otimização

introdução.

Primeiramente compilamos o programa sem nenhuma escolha de otimização e calculamos a média do tempo de execução (medido utilizando o comando 'time') entre 10 execuções. 

|            | Sem otimização | Otimização -O1 | Otimização -O2 | Otimização -O3 |
|------------|----------------|----------------|----------------|----------------|
| Tempo Real | 0m0.428s       | 0m0.369s       | 0m0.410s       | 0m0.422s       |

Podemos ver que a otimização O1 teve um melhor tempo de execução. Todas as outras continuaram com tempos ainda bastante similares em relação ao tempo do programa compilado sem nenhuma otimização.

Agora separamos o nosso código em dois arquivos: main.c com a função main e calc_primo.c com a função primo. Precisamos criar também um arquivo header calc_primo.h que contém a assinatura da função primo e deve ser incluído nos dois primeiros arquivos.
Para então compilar todos eles em conjunto criamos arquivos objetos dos dois arquivos .c e depois montamos todos eles criando um executável. Para isso temos que executar os seguintes comandos:

- gcc -c calc_primo.c -o calc_primo.o
- gcc -c main.c -o main.o
- gcc main.o calc_primo.o -o main

Como pode ser visto pelo último comando estamos criando executáveis utilizando a otimização que obteve o melhor resultado no último passo.
Executamos agora esses passos de duas maneiras diferentes, primeiro através de um arquivo script e depois através de um makefile. Nós criamos 2 arquivos executáveis diferentes para cada um desses meios: main_script e main_make e repetimos o mesmo processo de medição de tempo para cada um deles. Obtemos os seguintes resultados:

|            | Script   | Makefile |
|------------|----------|----------|
| Tempo Real | 0m0.381s | 0m0.387s |

**PARTE 2**

Agora alteramos o nosso código para que calcule quantos números primos existem entre 1 e n, sendo n um valor passado pela linha de comando. Medimos então o tempo utilizando um e dois arquivos fontes, com **n = 10000**, e obtivemos os seguintes resultados:

|            | 1 Arquivo Fonte | 2 Arquivos Fontes |
|------------|-----------------|-------------------|  
|   Tempo    |    0m0.025s     |     0m0.022s      |

Podemos ver que os tempos ainda assim foram bem similares em ambos os casos o que mostra mais uma vez que o tempo de execução não deve ser alterado.

Agora modificamos mais um pouco o nosso código, fazendo com que o laço da função primo varra somente os números ímpares. Isso faz com que o nosso conjunto de testes caia pela metade. Medimos novamente o tempo, utilizando o mesmo valor de n e chegamos a um valor médio de **0m0.012s**, ou seja, aproximadamente metade do valor encontrado anteriormente, resultado esperado já que temos metade do conjunto de testes anterior.
Além disso, podemos ver utilizando o gprof que a função primo é a que gasta muito mais tempo,, dessa forma esta função deveria ser paralalelizada de modo a economizar tempo de execução.

