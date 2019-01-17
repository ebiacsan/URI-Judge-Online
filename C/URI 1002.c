#include <stdio.h>
#include <stdlib.h>

int main()
{
	double r, A;
	double pi = 3.14159;
	
	scanf("%lf", &r);
	
	A = (pi)*(r*r);
	printf("A=%.4lf\n", A);
	
	return (0);
}