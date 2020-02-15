#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[7]={9,7,5,2,1,0,3};

    int i;
    printf("Vetor desordenado: ");
    for(i=0;i<7;i++){
        printf("|%d|",vetor[i]);
    }
    printf("\n");

    for(i=0;i<sizeof(vetor);i++){

        int min=vetor[i];
        int j;

        for(j=i;j<7;j++){
            if(vetor[j]<vetor[i]){
            min=vetor[j];
            vetor[j]=vetor[i];
            vetor[i]=min;
            }
        }
    }

    printf("Vetor ordenado: ");
    for(i=0;i<7;i++){
        printf("|%d|",vetor[i]);
    }
    printf("\n");

    return 0;
}

