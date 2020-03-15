#include <stdlib.h>
#include <stdio.h>

                            ///ALGORITMO USADO PARA EXEMPLO DADO EM SALA DE AULA///

void troca(int *x, int *y){

int aux;
aux=*x;
*x=*y;
*y=aux;
}

void CountingSort(int *A, int *B, int maior_valor, int tam_vetor){

    int i = 0, j=0;
    int C[maior_valor];

    for (i=0 ; i<=maior_valor ; i++){ ///zera o vetor auxiliar
            C[i] = 0;
    }

    for (j=0 ; j<tam_vetor ; j++){
            C[A[j]] = C[A[j]] + 1; ///incrementa 1 para cada valor igual encontrado no vetor inicial
    }

    for (i=1 ; i<=maior_valor ; i++){
            C[i] = C[i] + C[i-1]; ///Ver quantos elementos tem antes dele (soma com o anterior)
    }

    for (j=(tam_vetor-1); j>=0 ; j--){ ///posiciona o valor no vetor ordenado
            B[C[A[j]]-1] = A[j];
            C[A[j]] = C[A[j]] - 1;
    }
}

///Funcões para imprimir os arrays

void Imprime(int *vetor){

    int maior_valor=0;
    for (maior_valor; maior_valor<9; maior_valor++){
            printf(" |%d| ", vetor[maior_valor]);
    }
    printf("\n");
}

void Imprime2(int *vetor){
    int maior_valor=0;
    for (maior_valor ; maior_valor<9 ; maior_valor++){
            printf("|%d|", vetor[maior_valor]);
    }
    printf("\n");
}

int main(){

    #define NUM_ELEMENTOS 9
      //  #define TAM_VETOR 9

    int vetor[NUM_ELEMENTOS] = {5,2,1,0,4,2,0,3,2};
    int vetor2[NUM_ELEMENTOS];

    for (int i=0 ; i<NUM_ELEMENTOS ; i++){
            vetor2[i] = 0;
    }

    printf("Vetor antes da troca (nao-ordenado): \n");
    Imprime(vetor);

    printf("\n");

    printf("Vetor depois da troca (ordenado): \n");
    CountingSort(vetor, vetor2, 5, 9); ///o numero 5 deverá ser o ultimo elemento
    Imprime(vetor2);
    
return 0;
}
