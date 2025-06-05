#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int op, litros;
    float total;
    
    do{
        printf("\n--- Posto de Gasolina FuelMax ---\n");
        printf("Escolha um tipo de gasolina:\n");
        printf("1. Gasolina - $6,27\n");
        printf("2. Etanol - $4,13\n");
        printf("3. Diesel - $6,06\n");
        printf("0. Sair\n");
        printf(" ");
        scanf("%d",&op);
        
        switch(op){
            case 1:
              printf("Quantos litros?: ");
              scanf("%d",&litros);
              total=6.27*litros;
              
              printf("O valor total é de $%.2f reais para %d litros de Gasolina.\n",total, litros);
              break;
            case 2:
              printf("Quantos litros?: ");
              scanf("%d",&litros);
              total=4.13*litros;
              
              printf("O valor total é de $%.2f reais para %d litros de Etanol.\n",total, litros);
              break;
            case 3:
              printf("Quantos litros?: ");
              scanf("%d",&litros);
              total=6.06*litros;
              
              printf("O valor total é de $%.2f reais para %d litros de Diesel.\n",total, litros);
              break;
            case 0:
              printf("\nSaindo. . .\n");
              break;
            default:
              printf("\nOpção inválida.\n");
              break;
        }
        
        printf("Enter para continuar.\n");
        getchar();
        getchar();
        system("clear");
        
    }while(op!=0);
    
    return 0;
}