#include <stdio.h>
#define p 3.141592

int main(){
//ex 1
printf("====================ex1====================\n");
int idade, ano_atual, ano_nascimento, mes_atual, mes_nascimento;

printf("Digite sua idade: ");
scanf("%d", &idade);

printf("Qual ano estamos: ");
scanf("%d", &ano_atual);

printf("Qual o mês atual(1-12): ");
scanf("%d", &mes_atual);

printf("Qual mês você nasceu(1-12): ");
scanf("%d", &mes_nascimento);

ano_nascimento = ano_atual - idade;

if (mes_atual < mes_nascimento){
    ano_nascimento--;
    printf("Ano de nascimento: %d\n", ano_nascimento);
}
else{
    printf("Ano de nascimento: %d\n", ano_nascimento);
}

//ex 2
printf("====================ex2====================\n");

float km, m;

printf("Escreva a velocidade em km/h: ");
scanf("%f", &km);

m = km / 36;

printf("Velocidade em km/h: %.2f\n", km);
printf("Velocidade em m/s: %.2f\n", m);


//ex 3
printf("====================ex3====================\n");


float real, dollar, conv;

printf("Digite o valor em reais: ");
scanf("%f", &real);

printf("Digite o valor atual do dollar: ");
scanf("%f", &dollar);

conv = real * dollar;

printf("O valor convertido em dollar é R$%.2f\n", conv);



//ex 4
printf("====================ex4====================\n");

float cel, fah;

printf("Digite os graus celsius: ");
scanf("%f", &cel);

fah = cel * (9.0/5.0) + 32.0;

printf("A tempetatura em graus celsius é: %.2f\n", cel);
printf("A temperatura convertida para fahrenheit é: %.2f\n", fah);



//ex 5
printf("====================ex5====================\n");

float graus, radianos;

printf("Digite um ângulo em graus: ");
scanf("%f", &graus);

radianos = graus * p/180;

printf("Ângulo digitado: %.2f°\n", graus);
printf("Convertido para radiano: %.2f\n", radianos);



//ex 6
printf("====================ex6====================\n");


int num, antecessor, sucessor;

printf("Digite um número para descobrir seu antecessor e sucessor: ");
scanf("%d", &num);

/*
antecessor = num - 1;
sucessor = num + 1;
*/

printf("Número digitado: %d\n", num);
printf("Antecessor: %d\n", num - 1);
printf("Sucessor: %d\n", num + 1);


//ex 7
printf("====================ex7====================\n");
printf("Valor a ser dividido R$780.000\n");
float primeiro, segundo, terceiro, valor;

valor = 780000;

primeiro = valor * 0.46;
segundo = valor * 0.32;
terceiro = valor - (primeiro + segundo);

printf("O primeiro irá receber: R$%.2f\n", primeiro);
printf("O segundo irá receber: R$%.2f\n", segundo);
printf("O terceiro irá receber: R$%.2f\n", terceiro);



//ex 8
printf("====================ex8====================\n");

int segundos, horas, minutos;

printf("Digite os segundos: \n");
scanf("%d", &segundos);

horas = segundos  / 3600;
minutos = segundos / 60;

printf("Horas: %d\n", horas);
printf("Minutos: %d\n", minutos);
printf("Segundos: %d\n", segundos);

if(minutos > 60){
    horas++;
    minutos = 60;
}


printf("Valor formatado: %d:%d:%d\n", horas, minutos, segundos);





    return 0;
}
