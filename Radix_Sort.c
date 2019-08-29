#include <stdio.h>

void printArray(int * array, int tamanho){

  int i;
  for (i = 0; i < tamanho; i++)
    printf("|%d|", array[i]);
}

int EncontraMaiorNum(int * array, int tamanho){

  int i;
  int MaiorNum = -1;

  for(i = 0; i < tamanho; i++){
    if(array[i] > MaiorNum)
      MaiorNum = array[i];
  }

  return MaiorNum;
}

/// Radix Sort
void radixSort(int * array, int tamanho){

  printf("\n\nCompilando o Radix Sort na lista nao-ordenada!\n\n");

  /// Aqui uso a base 10
  int i;
  int semiOrdenado[tamanho];
  int DigitoSignificativo = 1;
  int MaiorNum = EncontraMaiorNum(array, tamanho);

  /// Loop até atingir o maior dígito significativo
  while (MaiorNum / DigitoSignificativo > 0){

    printf("\t\nOrdenando %d lugar: \n", DigitoSignificativo);
    printArray(array, tamanho);

    int bucket[10] = { 0 };

    /// Conta o número de "chaves" ou dígitos que serão colocados em cada bucket
    for (i = 0; i < tamanho; i++)
      bucket[(array[i] / DigitoSignificativo) % 10]++;

    /**
        Adiciona a contagem dos intervalos anteriores e adquire os índices
        após o final de cada local de depósito na matriz. Funciona de forma
        semelhante ao Counting Sort.
     **/

    for (i = 1; i < 10; i++)
      bucket[i] += bucket[i - 1];

    /// Usa o bucket para preencher o array "semiOrdenado"
    for (i = tamanho - 1; i >= 0; i--)
      semiOrdenado[--bucket[(array[i] / DigitoSignificativo) % 10]] = array[i];

    for (i = 0; i < tamanho; i++)
      array[i] = semiOrdenado[i];

    /// Move para o proximo digito significativo
    DigitoSignificativo *= 10;

    printf("\tBucket: ");
    printArray(bucket, 10);
  }
}

int main(){

  int tamanho = 12;
  int lista[] = { 10 , 2 , 303 , 4021 , 293 , 1 , 0 , 429 , 480 , 92 , 2999 , 14 };

  printf("\nLista nao-ordenada: ");
  printArray(&lista[0], tamanho);

  radixSort(&lista[0], tamanho);

  printf("\n\n\nLista ordenada:");
  printArray(&lista[0], tamanho);
  printf("\n");

  return 0;
}

