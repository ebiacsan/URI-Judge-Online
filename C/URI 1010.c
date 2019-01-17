#include <stdlib.h>
#include <stdio.h>

int main()
{
	int p1, qtd1;
	int p2, qtd2;
	double preco1, valor1;
	double preco2, valor2;
	double TOTAL;
	
	scanf("%s %d %lf", &p1, &qtd1, &preco1);
	scanf("%s %d %lf", &p2, &qtd2, &preco2);
	
	valor1 = (qtd1 * preco1);
    valor2 = (qtd2 * preco2);
    
    TOTAL = (valor1 +valor2);

	printf("VALOR A PAGAR: R$ %.2lf\n", TOTAL);
	
	return (0);
}