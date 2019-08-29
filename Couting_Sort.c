#include <stdlib.h>
#include <stdio.h>

#define NUM_ELEMENTOS 12
#define TAM_ARRAY 13

void swap(int *x, int *y){
   int aux;
   aux=*x;
   *x=*y;
   *y=aux;
}

void CountingSort(int *A, int *B, int k, int n){ /// k = maior valor do array

    int i = 0, j=0;
    int C[k];

    for (i=0 ; i<=k ; i++){ ///zera o vetor auxiliar
        C[i] = 0;
    }

    for (j=0 ; j<n ; j++){
        C[A[j]] = C[A[j]] + 1; ///incrementa 1 para cada valor igual encontrado no array inicial
    }

    for (i=1 ; i<=k ; i++){
        C[i] = C[i] + C[i-1]; ///Ver quantos elementos tem antes dele (soma com o anterior)
    }

    for (j=(n-1); j>=0 ; j--){ ///posiciona o valor no array ordenado
        B[C[A[j]]-1] = A[j];
        C[A[j]] = C[A[j]] - 1;
    }
}

///Funcao para imprimir o array
void Imprime(int *array){
    int k=0;

    for (k ; k<12 ; k++){
        printf(" |%d| ", array[k]);
    }
    puts("");
}

void Imprime2(int *array){
    int k=0;

    for (k ; k<13 ; k++){
        printf(" |%d| ", array[k]);
    }
    printf("");
}

int main(){

    int i = 0;
    int array[NUM_ELEMENTOS] = { 10 , 2 , 303 , 4021 , 293 , 1 , 0 , 429 , 480 , 92 , 2999 , 14 };
    int array2[NUM_ELEMENTOS];

    for (i=0 ; i<NUM_ELEMENTOS ; i++){
        array2[i] = 0;
    }

    printf("\nArray antes da troca (nao-ordenado):\n");
    Imprime(array);

    printf("\nOrdenando o array com o CountingSort:\n");
    CountingSort(array, array2, 4021, 12 ); ///o numero 4021 deverá ser o ultimo elemento
    Imprime(array2);

    return 0;
}

