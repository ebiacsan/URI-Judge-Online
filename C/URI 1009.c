#include <stdlib.h>
#include <stdio.h>

int main()
{
	char nome;
	double bonus, vendas_Feitas, salario_fixo, TOTAL;
	
	scanf("%s", &nome);
	scanf("%lf", &salario_fixo);
	scanf("%lf", &vendas_Feitas);
	
	bonus = (vendas_Feitas * (0.15)); // Cálculo do bônus é feito aqui.
	TOTAL = (bonus + salario_fixo);

	printf("TOTAL = R$ %.2lf\n", TOTAL);
	
	return (0);
}