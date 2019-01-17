#include <stdlib.h>
#include <stdio.h>

int main()
{
    double raio;
    double VOLUME, pi;
    pi = 3.14159;
    
    scanf("%lf", &raio);
    
    VOLUME = ((raio*raio)*raio) * pi* 4/3;
    
    printf("VOLUME = %.3lf\n", VOLUME);
    
    return(0);
}