#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TAMVETOR 99


//*Funçao para preencher um dado vetor com valores inteiros aleatórios de 0 a 99
// com indice iniciando em 1 */
void geraVetorAleatorioHeap(int A[], int tamanho_vetor) {

  int contador;
  for (contador = 1; contador <= tamanho_vetor; ++contador){
    A[contador] = rand() % 100;
  }
}

void imprimirHeap(int A[], int tamanho_vetor){

  int contador;
  printf("[");

  for (contador = 1; contador <= tamanho_vetor; ++contador){

    if(tamanho_vetor - contador != 0)
      printf("%d, ", A[contador]);
    else
      printf("%d", A[contador]);
  }
  printf("]\n");
}

/*Funcao MAX HEAPEFY
* Complexidade O(log n)
*/
void MAX_HEAPIFY (int A[], int indice, int tamanho_heap){

  int filhoEsq, filhoDir, maior_valor, aux;

  filhoEsq = 2*indice;
  filhoDir = 2*indice+1;

  if((filhoEsq <= tamanho_heap) && A[filhoEsq] > A[indice]) ///Olhar indice e não valor, ou seja, indice do filho da esq.
    maior_valor = filhoEsq;
  else
    maior_valor = indice;

  if((filhoDir <= tamanho_heap) && (A[filhoDir] > A[maior_valor]))
    maior_valor = filhoDir;

  if(maior_valor != indice) {
    aux = A[indice];
    A[indice] = A[maior_valor];
    A[maior_valor] = aux;
    MAX_HEAPIFY(A, maior_valor, tamanho_heap);
  }
}


/*Funçao para montar a Heap Maximo*/
int BUILD_MAX_HEAP(int A[], int tamanho_heap) {

  int contador;
  //tamanhoHeap = tamanho_vetor;

  for (contador = floor(tamanho_heap/2); contador >= 1 ; --contador)
    MAX_HEAPIFY(A,contador,tamanho_heap);

    return tamanho_heap;
  //return tamanhoHeap;
}


/*Função de ordenação Heapsort
Complexidade: O(n log n)
*/
void heapsort(int A[], int tamanho_heap) {

  int contador, aux;
  //tamanhoHeap = montaHeapMaximo(vet,tamanho_vetor);
  tamanho_heap = BUILD_MAX_HEAP(A, tamanho_heap);

  for(contador = tamanho_heap; contador>=2; --contador){ /// ou contador > 1

    aux = A[1];
    A[1] = A[contador];
    A[contador] = aux;
    --tamanho_heap;
    MAX_HEAPIFY(A, 1, tamanho_heap);
  }
}

int main(){

  int A[TAMVETOR], heap[TAMVETOR+1], tamanho, opt;;

  do {

    printf("Digite uma opcao valida: \n");
    printf("\n");
    printf("\t(1): Gerar um vetor para heapsort\n");
    printf("\t(2): Heapsort\n");
    printf("\t(0): Sair\n");
    printf("> ");
    scanf("%d",&opt);

    switch(opt) {
      case 0:
        break;

      case 1:
        system("cls");
        printf("Digite o tamanho do vetor desejado.(Maximo 100): ");
        scanf("%d", &tamanho);
        printf("\n");
        geraVetorAleatorioHeap(heap, tamanho);
        imprimirHeap(heap, tamanho);
        printf("\n");
        break;

      case 2:
        system("cls");
        printf("Vetor original: ");
        printf("\n");
        imprimirHeap(heap, tamanho);
        printf("Vetor ordenado: ");
        printf("\n");
        heapsort(heap, tamanho);
        imprimirHeap(heap, tamanho);
        printf("\n");
        break;

      default:
        printf("\n\nPor favor escolha uma opção válida!\n\n");

    }

  } while(opt != 0);
  system("cls");
  return 0;
}
