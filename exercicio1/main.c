#include <stdio.h>
#include "calc_primo.h"

int main(int argc, char* argv[])
{
  char *p;
  long n = strtol(argv[1], &p, 10);
  int i;
  int primos = 0;

  for(i=0;i<=n;i++){
  	if (primo(i))
		primos++;  	
  }

  printf("Foram encontrados %d numeros primos entre 1 e %ld \n", primos, n);
}	