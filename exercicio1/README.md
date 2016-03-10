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
