#include <stdlib.h>
#include <stdio.h>

int main()
{
	int number, horasT;
	double recebeP_Hora, SALARY;
	
	scanf("%ld", &number);
	scanf("%ld", &horasT);
	scanf("%lf", &recebeP_Hora);
	SALARY = horasT*recebeP_Hora;

	printf("NUMBER = %ld\n", number);
	printf("SALARY = U$ %.2lf\n", SALARY);
	
	return 0;
}