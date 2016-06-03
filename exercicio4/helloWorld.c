/* Hello World program */

#include<stdio.h>

main()
{
	// o endereco deve ser maior que o endereco 
	// base da memoria, definido no arquivo ac_tlm_router
	int end = 100*1024*1024 + 1;
	int *a = (int *) end;

	//int val = 1;
	//*a = val;

	int test = *a;
	test = *a;
	test = *a;
}
