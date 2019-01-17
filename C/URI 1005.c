#include<stdio.h>
#include <stdlib.h>

int main()
{
	double A, B /*, PesoA=3.5, PesoB=7.5*/;
	double MEDIA;
	//printf("Insira a nota n1: ");
	scanf("%lf", &A);
	A = A * 3.5;
	//printf("Insira a nota n2: ");
	scanf("%lf", &B);
	B = B * 7.5;
	MEDIA = (A+B)/11;
	printf("MEDIA = %.5lf\n", MEDIA);
	
	return(0);
}