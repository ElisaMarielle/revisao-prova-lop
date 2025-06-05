#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int i, q;
    float ocp=0;
    float taxa;
    
    printf("1 - Ocupado\n0 - Não ocupado\n");
    
    for(i=0;i<10;i++){
        printf("O quarto %d está ocupado?: ",i+ 1);
        scanf("%d",&q);
        if(q==1){
            ocp++;
        }
    }
    
    taxa=(ocp/10)*100;
    printf("\nTaxa de ocupação do hotel: %.2f%%\n",taxa);
    
    return 0;
}