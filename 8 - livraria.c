#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct{
    char nome[30];
    int ano;
} Livraria;

Livraria livro[8];
int numLvr=0;

int main(){
    setlocale(LC_ALL,"");
    int i;
    
    for(int i=0;i<8;i++){
        printf("Digite o nome do livro %d: ",i+ 1);
        scanf(" %[^\n]",livro[i].nome);
        printf("Digite o ano de publicação %d: ",i+ 1);
        scanf("%d",&livro[i].ano);
        
        numLvr++;
    }
    
    system("clear");
    
    for(int i=0;i<numLvr;i++){
        if(livro[i].ano<2000){
            printf("\n");
            printf("Nome do livro: %s\n",livro[i].nome);
            printf("Ano de publicação: %d\n",livro[i].ano);
            printf("\033[31m");
            printf("\n-------------------------\n");
            printf("\033[0m");
        }
    }
    
    return 0;
}