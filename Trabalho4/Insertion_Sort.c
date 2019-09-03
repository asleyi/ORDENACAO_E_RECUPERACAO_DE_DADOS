#include <stdio.h>
#include <stdlib.h>

main (){
    void InsertionSort(int tabela[], int nElem){
        int i, j, aux;
        /* Inicialmente, o array tabela[] é considerado */
        /* uma tabela ordenada. Então, a cada iteração, */
        /* os elementos entre 0 e j estarão ordenados. */
        /* Insere tabela[j] na parte ordenada da tabela */

        for (j = 1; j < nElem; ++j) {
            aux = tabela[j];
            /* Move cada elemento maior do */
            /* que aux uma posição adiante */

            for (i = j - 1; i >= 0 && aux < tabela[i]; --i)
                tabela[i + 1] = tabela[i];
            tabela[i + 1] = aux; /* Insere aux na posição correta */
        }
    }
}
