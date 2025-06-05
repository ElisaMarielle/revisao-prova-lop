#include<stdio.h>

typedef struct{
	char nome[20];
	int qntd;
	float preco;
}Mercado;
void valort(Mercado produtos[], int tam);
int main(){
	Mercado produtos[10];
	
	printf("Bem vindo ao Mercado - SUPER COMPRA - \n");
	for (int i = 0; i<10;i++){
		printf("Insira o nome do produto: ");
		scanf(" %[^\n]", produtos[i].nome);
		printf("Insira a quantidade do produto: ");
		scanf(" %d", &produtos[i].qntd);
		printf("Insira o preço do produto: ");
		scanf(" %f", &produtos[i].preco);
	}
	valort (produtos, 10);
	
	return 0;
}
void valort(Mercado produtos[], int tam) {
    float valort=0;
    for (int i = 0; i < tam; i++) {
        valort += produtos[i].qntd * produtos[i].preco;
    }
    printf("O valor total de todos os produtos em estoque é de R$ %.2f\n", valort);
}