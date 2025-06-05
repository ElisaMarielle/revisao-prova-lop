#include<stdio.h>

int main(){
	float produtos[10], caro, barato;
	int i;
	printf("Bem vindo a: -TECH BARATO- \n");
	printf("Digite o valor de 10 produtos:\n");
	 for(i=0; i<10;i++){
		printf("Valor do %d produto: R$", i+1);
		scanf("%f",&produtos[i]);
	}
	caro =barato=produtos[0];
	
	for(i=1;i<10;i++){
		if (produtos[i] > caro){
			caro = produtos[i];
		}
		if (produtos[i] < barato){
			barato=produtos[i];
		}
	}
		printf("O produto mais caro é: %.2f\n", caro);
		printf("O produto mais barato é: %.2f\n", barato);
		
		return 0;
	}