#include<stdio.h>

typedef struct{
	char tipo[20], nome[20];
	int idade;
} Animal;

void cad(Animal animais[], int tam);

int main(){
printf("Seja bem vindo ao Pet Shop -AMIGO FIEL- \n");
Animal animais[6];
     for (int i =0; i<6;i++){
     	printf("Insira o tipo do %d° animal: ", i+1);
     	scanf(" %[^\n]", animais[i].tipo);
     	printf("Insira o nome do %d° animal: ", i+1);
     	scanf(" %[^\n]", animais[i].nome);
     	printf("Insira a idade do %d° animal: ", i+1);
     	scanf("%d", &animais[i].idade);
	 }
	 cad(animais, 6);
	 
return 0;
}

void cad(Animal animais[], int tam){
	 printf("\nAnimais com mais de 5 anos:\n");
	 for (int i=0;i<6;i++){
	 	if (animais[i].idade >= 5){
	 		printf("%s\n", animais[i].nome);
		 }
      }
}
