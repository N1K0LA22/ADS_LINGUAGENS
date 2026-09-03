#include <stdio.h>
#include <stdlib.h>

void exec2(){
	float dola, real, cota;
	
	printf("Digite o valor do real: \n");
	scanf("%f", &real);
	
	printf("Digite o valor da cotacao: \n");
	scanf("%f", &cota);
	printf("%.2f reais sao %.2f dolares\n", real, (real/cota));
}


void exec3(){
	printf("Exercicio2\n");
	float tempC, tempF;
	
	printf("Digite o valor em graus celsius: \n");
	scanf("%f", &tempC);
	tempF = tempC *(9.0/5.0) + 32.0;
	printf("A temperatura maxima de hoje na tela da globo %.2f\n", tempF);
}


void exec8(){
	printf("Exercicio3\n");
	
int segundos, horas, minutos;

printf("Digite os segundos: \n");
scanf("%d", &segundos);

horas = segundos  / 3600;
minutos = (segundos-(horas*3600))/60;
segundos = segundos -((horas*3600)+(minutos*60));

printf("Horas: %d\n", horas);
printf("Minutos: %d\n", minutos);
printf("Segundos: %d\n", segundos);

printf("Valor formatado: %d:%d:%d\n", horas, minutos, segundos);
}




int main(int argc, char *argv[]) {
	
	int resposta;
	printf("Usuario, qual exercicio voce quer? |2|3|8|\n");
	scanf("%d", &resposta);
	
	switch(resposta){
	
	
	case 2:
	exec2();
	
	break;
	
	
	case 3:
	exec3();

	break;
	
	
	case 8:
	exec8();

}
	
	return 0;
}	
