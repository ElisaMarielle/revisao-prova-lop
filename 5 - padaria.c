#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct{
    char nome[30];
    float preco;
    int cod;
} Produtos;

int main(){
    setlocale(LC_ALL,"");
    Produtos prod[5] = {
        {"Bolo", 5.80, 12},
        {"Torta", 10.90, 34},
        {"Doce de leite", 10.43, 24},
        {"Pão de queijo", 13.89, 20},
        {"Pão francês", 2.20, 18},
    };
    
    int i;
    
    for(i=0;i<5;i++){
        if(prod[i].preco>=10){
            printf("\n");
            printf("Nome do produto %d: %s\n",i+ 1, prod[i].nome);
            printf("Código do produto %d: %d\n",i+ 1, prod[i].cod);
            printf("Valor do produto %d: %.2f\n",i+ 1, prod[i].preco);
        }
    }
    
    return 0;
}