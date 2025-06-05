#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int op, pontos=0;
    
    do{
        printf("\n--- Cinema CinePonto ---\n");
        printf("1. Comprar ingressos\n");
        printf("2. Total de pontos\n");
        printf("0. Sair\n");
        printf(" ");
        scanf("%d",&op);
        
        switch(op){
            case 1:
              printf("Ingresso comprado.\n");
              pontos++;
              break;
            case 2:
              printf("O total de pontos acumulados é de: %d pontos.\n",pontos);
              break;
            case 0:
              printf("\nSaindo. . .\n");
              break;
            default:
              printf("\nOpção inválida.\n");
              break;
        }
        
        printf("\nEnter para continuar.\n");
        getchar();
        getchar();
        system("clear");
        
    }while(op!=0);
    
    return 0;
    
}