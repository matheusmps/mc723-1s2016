#!/bin/bash
gcc -c calc_primo.c -o calc_primo.o -pg
gcc -c main.c -o main.o -pg
gcc main.o calc_primo.o -o main2 -O1 -pg
gcc main_1.c -o main1