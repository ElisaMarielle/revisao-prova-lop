#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

typedef struct{
	char nome[30];
	int idade;
	float imc, altura, peso;
}Aluno;

void calcimc(Aluno aluno){
	if(aluno.imc > 30){
		printf("O aluno %s está obeso.\n", aluno.nome);
	}
	else if(aluno.imc >=25 && aluno.imc<=30){
		printf("O aluno %s está sobrepeso.\n", aluno.nome);
	}
	else{
		printf("O aluno %s está saudável.\n", aluno.nome);
	}
}
int main(){
	Aluno aluno[2];
	setlocale(LC_ALL,"");
	for(int i = 0; i < 2; i++){
	printf("Digite seu nome:");
	scanf(" %[^\n]", aluno[i].nome);
	printf("Digite sua idade:");
	scanf("%d", &aluno[i].idade);
	printf("Digite sua altura:");
	scanf("%f", &aluno[i].altura);
	printf("Digite seu peso:");
	scanf("%f", &aluno[i].peso);
	aluno[i].imc = aluno[i].peso / (aluno[i].altura * aluno[i].altura);
	calcimc(aluno[i]);
	}
	return 0;
}