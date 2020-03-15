#include<stdlib.h>
#include<stdio.h>

///MergSort para o exemplo dado em sala de aula

void merge(int vetor[], int inicio, int pivo, int n){

    int cont1, j, k;
    int n1 = pivo - inicio + 1;
    int n2 =  n - pivo;
    int L[n1], R[n2];

    for (cont1 = 0; cont1 < n1; cont1++)
        L[cont1] = vetor[inicio + cont1];
    for (j = 0; j < n2; j++)
        R[j] = vetor[pivo + 1+ j];

    cont1 = 0;
    j = 0;
    k = inicio;

    while (cont1 < n1 && j < n2){

        if (L[cont1] <= R[j]){

            vetor[k] = L[cont1];
            cont1++;
        }
        else{

            vetor[k] = R[j];
            j++;
        }
        k++;
    }

    while (cont1 < n1){

        vetor[k] = L[cont1];
        cont1++;
        k++;
    }

    while (j < n2){

        vetor[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int vetor[], int inicio, int n){

    if (inicio < n){

        int pivo = inicio+(n-inicio)/2;  //pega o piso
        mergeSort(vetor, inicio, pivo);
        mergeSort(vetor, pivo+1, n);
        merge(vetor, inicio, pivo, n);
    }
}

int main(){

    int vetor[] = {12, 11, 13, 5, 6, 7};
    int tamanho_vetor = sizeof(vetor)/sizeof(vetor[0]);
    int cont2;

    printf("vetor desordenado: ");
    for (cont2=0; cont2 < tamanho_vetor; cont2++)
        printf(" |%d| ", vetor[cont2]);
    printf("\n");


    mergeSort(vetor, 0, tamanho_vetor - 1);

    printf("vetor ordenado: ");
    for (cont2=0; cont2 < tamanho_vetor; cont2++)
        printf(" |%d| ", vetor[cont2]);
    printf("\n");

    return 0;
}
