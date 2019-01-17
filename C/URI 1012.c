#include <stdlib.h>
#include <stdio.h>

int main()
{
	double A, B, C, x, triangulo, circulo, trapezio, quadrado, retangulo;
	
	scanf("%lf %lf %lf", &A, &B, &C);
	
	double pi = 3.14159;
	triangulo = A*C/2;
    circulo = C*C*pi;
    x = A+B;
    trapezio = x*C/2;
    quadrado = B*B;
    retangulo = A*B;

	printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", triangulo, circulo, trapezio, quadrado, retangulo);
	
	return (0);
}