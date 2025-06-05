#include<stdio.h>

int main(){
	int aval[7];
	printf("Bem vindo ao nosso -Café com letras- \n");
	for (int i = 0; i<7;i++) {
		printf("Dê uma nota de 0 a 10 para seu atendimento: ");
		scanf("%d", &aval);
		if (aval[i] >= 8) {
			printf("Sua avaliação é boa!\n");
			break;
		}
		else if (aval[i] >= 5 ){
			printf("Sua avaliação é regular.\n");
			break;
		}
		else {
			printf("Sua avaliação é ruim.\n");
			break;
		}
	}
		return 0;
}