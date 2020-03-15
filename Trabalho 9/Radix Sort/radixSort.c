#include <stdio.h>
#include <stdlib.h>

                        /// ALGORITMO USADO PARA EXEMPLO DADO EM SALA DE AULA ///

void imprimeVetor(int * vetor, int tam_vetor){

  int i;
  for (i = 0; i<tam_vetor; i++)
    printf("|%d|", vetor[i]);
}

int procuraMaiorNum(int * vetor, int tam_vetor){

    int i;
    int MaiorNum = -1;

    for(i=0; i<tam_vetor; i++){
        if(vetor[i] > MaiorNum)
            MaiorNum = vetor[i];
    }

    return MaiorNum;
    }

/// Radix Sort
void radixSort(int * vetor, int tam_vetor){

  /* Uso da base 10 */
  int i;
  int semiOrdenado[tam_vetor];
  int DigitoSignificativo = 1;
  int MaiorNum = procuraMaiorNum(vetor, tam_vetor);

  /// Loop até atingir o maior dígito significativo
  while (MaiorNum / DigitoSignificativo > 0){

    /*printf("\t\nOrdenando %d lugar: ", DigitoSignificativo);
    printf("\t\nOrdenando o vetor ");
    imprimeVetor(vetor, tam_vetor);*/

    printf("\n");
    int armazenamento_aux[10] = {0}; //bucket

    /// Conta o número de "chaves" ou dígitos que serão colocados em cada armazenamento
    for (i=0; i<tam_vetor; i++)
        armazenamento_aux[(vetor[i] / DigitoSignificativo) % 10]++;

    /**
        Adiciona a contagem dos intervalos anteriores e adquire os índices
        após o final de cada local de depósito na matriz.
     **/

    for (i=1; i<10; i++)
        armazenamento_aux[i] += armazenamento_aux[i - 1];

    /// Usa o armazenamento_aux para preencher o vetor "semiOrdenado"
    for (i= (tam_vetor - 1); i >= 0; i--)
        semiOrdenado[--armazenamento_aux[(vetor[i] / DigitoSignificativo) % 10]] = vetor[i];

    for (i=0; i<tam_vetor; i++)
        vetor[i] = semiOrdenado[i];

    /// Move para o proximo digito significativo
    DigitoSignificativo *= 10;

    printf("armazenamento_aux: ");
    imprimeVetor(armazenamento_aux, 10);
  }
}

int main(){

    int tam_vetor = 9;
    int lista[] = {5,2,1,0,4,2,0,3,2};

    printf("\nVetor nao-ordenado: ");
    imprimeVetor(&lista[0], tam_vetor);

    printf("\n");

    radixSort(&lista[0], tam_vetor);

    printf("\n\nVetor ordenado:");
    imprimeVetor(&lista[0], tam_vetor);
    printf("\n");

return 0;
}

