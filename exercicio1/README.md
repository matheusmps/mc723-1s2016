# Exercício 1: Compilação e Otimização

introdução.

Primeiramente compilamos o programa sem nenhuma escolha de otimização e calculamos a média do tempo de execução (medido utilizando o comando 'time') entre 10 execuções. 

A otimização O1 teve um melhor tempo de execução. Todas as outras continuaram com tempos ainda bastante similares em relação ao tempo do programa compilado sem nenhuma otimização.

mtune
This option specifies the name of the target ARM processor for which GCC should tune the performance of the code. For some ARM implementations better performance can be obtained by using this option

Agora separamos o nosso código em dois arquivos: main.c com a função main e calc_primo.c com a função primo. Precisamos criar também um arquivo header calc_primo.h que contém a assinatura da função primo e deve ser incluído nos dois primeiros arquivos.
Para então compilar todos os arquivos em conjunto criamos arquivos objetos dos dois arquivos .c e depois montamos todos eles criando um executável. Para isso temos que executar os seguintes comandos:

gcc -c calc_primo.c -o calc_primo.o
gcc -c main.c -o main.o
gcc main.o calc_primo.o -o main

