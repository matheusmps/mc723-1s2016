#include <stdio.h>

int primo(int n)
{
  int i;

  if (n % 2 == 0)
      return 0;

  for(i = 3; i < n; i+=2)
    if (n % i == 0)
      return 0;
  
  return 1;
}

int main(int argc, char* argv[])
{
  char *p;
  long n = strtol(argv[1], &p, 10);
  int i;
  int primos = 0;

  for(i=1;i<=n;i++){
    if (primo(i))
    primos++;   
  }

  printf("Foram encontrados %d numeros primos entre 1 e %ld \n", primos, n);
} 