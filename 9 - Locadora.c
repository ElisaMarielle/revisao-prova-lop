#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int film;

    printf("\033[31m");
    printf("\n --- Locadora Vídeo Boom! --- \n");
    printf("\033[0m");

    do {
        printf("\nQuantos filmes você quer alugar?:");
        printf(" ");
        scanf("%d", &film);
        
        if(film>5){
            printf("\nQuantidade inválida. Escolher entre 1 a 5 filmes.\n");
        }
        if(film<=0){
            printf("\nQuantidade inválida. Escolher entre 1 a 5 filmes.\n");
        }
    }while(film>5 || film<=0);

    printf("\nVocê escolheu alugar %d filmes.\n", film);

    return 0;
}
