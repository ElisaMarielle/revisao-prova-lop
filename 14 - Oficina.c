#include<stdio.h>

typedef struct{
	char marca[20];
	int ano, km;
}Carro;

int main(){ 
    printf("AUTO CHECK - Revisões\n");
	Carro carros[50];
	for(int i = 0;i<5;i++){
		printf("Insira a marca do carro: ");
		scanf(" %[^\n]", carros[i].marca);
		printf("Insira o ano do carro: ");
		scanf("%d", &carros[i].ano);
		printf("Insira os km do carro: ");
		scanf("%d", &carros[i].km);
	}
	printf("\nOs carros com mais de 100 km rodados são:\n");
	for(int i=0;i<5;i++){
		if(carros[i].km > 100000){
			printf("%s\n - %d\n - %d\n", carros[i].marca, carros[i].ano, carros[i].km);
		}
	}
	
return 0;}
