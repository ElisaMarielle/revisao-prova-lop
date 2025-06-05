#include<stdio.h>

int main(){
	int opc;
	
	printf("Fashion Mix - Clothes!\n");
	printf("Selecione a opção que deseja:\n1 - Camisa\n2 - Calça\n3 - Casaco\n");
	scanf("%d", &opc);
	switch(opc){
		    case 1:
			printf("1 - Camisa algodão 'Calvin Klein'\nValor: R$69,80");
			break;
			case 2:
			printf("2 - Calça Denim 'Levis'\nValor: R$279,90");
			break;
			case 3:
			printf("3 - Casaco poliéster 'Lupo'\nValor: R$127,50");
			break;
			default: 
			printf("Inválido!");
			break;
		}
		
	return 0;
}
