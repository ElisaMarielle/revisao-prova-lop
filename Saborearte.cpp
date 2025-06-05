#include<stdio.h>
int main(){
    float valort = 0;
    int contar, sobremesabebida = 0, opcao;
    
    do{
    	printf("Bem vindo ao Restaurante: SABOR&ARTE\n");
        printf("Selecione o que deseja:\n 1 - Prato R$35.00\n 2 - Sobremesa e Bebida 20.00\n 0 - Finalizar compra\n");
        scanf("%d",&opcao);

        switch (opcao)
        {
        case 1:
            valort+=35;
            contar++;
            break;
        case 2:
            valort+=20;
            sobremesabebida = 1;
            break;      
        default:
            break;
        }
    }while(opcao!=0);
   
    if(contar>3 && sobremesabebida == 1){
        printf("Valor total: R$%.2f",valort*0.85);
    }else if(sobremesabebida == 1){
        printf("Valor total: R$%.2f",valort*0.95);
    }else if(contar > 3){
        printf("Valor total: R$%.2f",valort*0.90);
    }else{
        printf("Valor total: R$%.2f",valort);
    }
    return 0;
}