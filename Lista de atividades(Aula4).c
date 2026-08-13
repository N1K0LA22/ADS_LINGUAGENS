#include <stdio.h>
#include <stdlib.h>

int main(){
	//ex 1
	printf("ex1\n");
	int primeiro, segundo, aux;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &primeiro);
	printf("Digite o segundo valor: ");
	scanf("%d", &segundo);
	aux = primeiro;
	primeiro = segundo;
	segundo = aux;
	printf("%d e %d\n", primeiro, segundo);
	
	//ex 2
	printf("===================================\n");
	printf("Ex2\n");
	
	double num;
	printf("Digite um numero: ");
	scanf("%lf", &num);
	
	printf("", num);
	
	
	
	
	
	return 0;
}
