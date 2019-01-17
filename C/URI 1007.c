#include<stdio.h>
#include <stdlib.h>
int main()
{
	int A, B, C, D, n1, n2;
	int DIFERENCA;
	
	scanf("%ld", &A);
	scanf("%ld", &B);
	n1 = A*B;

	scanf("%ld", &C);
	scanf("%ld", &D);
	n2 = C*D;
	
	DIFERENCA = n1-n2;
	printf("DIFERENCA = %ld\n", DIFERENCA);
	
	return(0);
}