#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char pilha[1001];
int topo = 0, qtd = 0;
void push();
void pop();

int main()
	{
	char entrada[1001];
	int a, i = 0;
	
	scanf("%d", &a);
	
	do{
		scanf("%s", entrada);
		//strlen irá contar e percorrer os números da string dada
		for(i = 0; i <= strlen(entrada); i++){
			
			if(entrada[i] == '<'){
				push();	
				topo++;
				
			}
			
			if(entrada[i]== '>' ){
				pop();

			}
		}
		printf("%d\n", qtd);
		a--;	
		topo = 0;
		qtd = 0;
	}
	while(a!=0);
		
		
	
		return (0);
}


void push(){
	pilha[topo]= '<';
}

void pop(){
	if(topo!=0){
		pilha[topo-1] = ' ';
		topo--;
		qtd++;
	}
}

