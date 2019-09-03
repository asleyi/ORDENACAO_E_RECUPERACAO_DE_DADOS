main(){
///Ordena uma tabela usando seleção direta
    
    void SelectionSort(int tabela[], int nElem){
        int i, j, iMenor;

        /* A porção ordenada do array está entre os */
        /* índices 0 e i-1, enquanto que a porção */
        /* desordenada está entre i e n-1 */

        /* Obtém o menor elemento na parte desordenada */
        /* e troca-o de posição com o primeiro elemento */
        /* da parte desordenada (que é i) */

        for (i = 0; i < nElem - 1; ++i) {
        /* Supõe que o primeiro elemento */
        /* da parte desordenada é o menor */

            iMenor = i;
        /* Verifica se existe um elemento menor */
        /* do 'iMenor' na parte desordenada */

            for (j = i + 1; j < nElem; ++j)
        /* Se o elemento corrente for menor do que */
        /* 'iMenor', ele passará a ser o menor */

                if (tabela[j] < tabela[iMenor])
                    iMenor = j;
                /* O novo mínimo passa a ser j. */

                /* Se foi encontrado um elemento menor do que aquele */
                /* que se encontra na posição i, trocam-se as posições */
                /* desses elementos. Caso contrário, o elemento na */
                /* posição i já está em sua posição ordenada. */

            if (iMenor != i)
                Troca(tabela + i, tabela + iMenor, sizeof(tabela[0]));
        }
    }
}
