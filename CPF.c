#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	
	int cpf, n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, ss1, ss2, ss3, ss4, ss5, ss6, ss7, ss8, ss9, ss10, ss11, digito1, digito2;
	
	printf("Digite seu cpf: \n");
	scanf("%d %d %d . %d %d %d . %d %d %d - %d %d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11);
	
	
	printf("Confirme o seu CPF: %d%d%d.%d%d%d.%d%d%d-%d%d\n", n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11);
	
	s1 = n1 * 10;
	s2 = n2 * 9;
	s3 = n3 * 8;
	s4 = n4 * 7;
	s5 = n5 * 6;
	s6 = n6 * 5;
	s7 = n7 * 4;
	s8 = n8 * 3;
	s9 = n9 * 2;
	
	digito1 = ((s1 + s2 + s3 + s4 + s5 + s6+ s7 + s8 + s9) * 10) % 11;
	
	ss1 = n1 * 11;
	ss2 = n2 * 10;
	ss3 = n3 * 9;
	ss4 = n4 * 8;
	ss5 = n5 * 7;
	ss6 = n6 * 6;
	ss7 = n7 * 5;
	ss8 = n8 * 4;
	ss9 = n9 * 3;
	ss10 = digito1 * 2;
	
	digito2 = ((ss1 + ss2 + ss3 + ss4 + ss5 + ss6 + ss7 + ss8 + ss9 + ss10) * 10) % 11;
	
	if(digito1 == n10 && digito2 == n11){
		printf("Validado!");
	} else{
		printf("Invalido");
	}
	
	
	

	
	
	
	
	
	
	return 0;
}
