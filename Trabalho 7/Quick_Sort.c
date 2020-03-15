#include <stdio.h>
#include <stdlib.h>

void QuickSort(int vetor[], int inicio, int fim){

	int i, j, pivo, aux;
	i = inicio;
	j = fim-1;
	pivo = vetor[(inicio + fim) / 2];

	while(i <= j){

		while(vetor[i] < pivo && i < fim){
			i++;
		}
		while(vetor[j] > pivo && j > inicio){
			j--;
		}
		if(i <= j){
			aux = vetor[i];
			vetor[i] = vetor[j];
			vetor[j] = aux;
			i++;
			j--;
		}
	}
	if(j > inicio)
		QuickSort(vetor, inicio, j+1);
	if(i < fim)
		QuickSort(vetor, i, fim);
}

int main(){

    #define MAX_TAM 10
    int numeros[MAX_TAM];
    int i;
    srand (time(NULL));

    printf("Vetor desordenado: ");
    for(i=0; i<MAX_TAM; i++){
        numeros[i]=rand()%100;
    }

    for (i = 0; i < MAX_TAM; i++){
        printf ("|%d|", numeros[i]);
    }
    printf ("\n");

    QuickSort(numeros, 0, MAX_TAM);

    printf ("Vetor Ordenado: ");
    for(int i=0; i < MAX_TAM; i++){
        printf("|%d|", numeros[i]);
    }

    printf ("\n");

    return 0;
}


