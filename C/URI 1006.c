#include<stdio.h>
#include <stdlib.h>
int main()
{
	double A, B, C; /*, PesoA=2, PesoB=3, PesoC=5   */;
	double MEDIA;
	
	scanf("%lf", &A);
	A = A * 2;

	scanf("%lf", &B);
	B = B * 3;

	scanf("%lf", &C);
	C = C * 5;
	
	MEDIA = (A+B+C)/10;
	printf("MEDIA = %.1lf\n", MEDIA);
	
	return(0);
}