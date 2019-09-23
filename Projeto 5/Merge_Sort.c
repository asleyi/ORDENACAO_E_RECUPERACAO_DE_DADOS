#include <stdio.h>
#include <stdlib.h>

main(){

    void Intercala( int tabela[], int aux[],int iniEsq, int iniDir, int finalDir ){

        int i, finalEsq, nElementos, posAux;

        finalEsq = iniDir - 1;
        posAux = iniEsq;
        nElementos = finalDir - iniEsq + 1;

            /* Intercala as duas partes e coloca */
            /* o resultado na tabela auxiliar */
        while((iniEsq <= finalEsq) && (iniDir <= finalDir))
            if(tabela[iniEsq] <= tabela[iniDir])
                aux[posAux++] = tabela[iniEsq++];
            else
                aux[posAux++] = tabela[iniDir++];

        /* Copia o restante da primeira metade */
        while(iniEsq <= finalEsq)
            aux[posAux++] = tabela[iniEsq++];

        /* Copia o restante da segunda metade */
        while(iniDir <= finalDir)
            aux[posAux++] = tabela[iniDir++];

        /* Copia a tabela auxiliar de */
        /* volta na tabela original */
        for(i = 0; i < nElementos; i++,finalDir--)
            tabela[finalDir] = aux[finalDir];
    }

        //static void MSort(int *tabela, int *aux, int esquerda, int direita){

    void MSort(int *tabela, int *aux, int esquerda, int direita){

            int centro;
            if(esquerda < direita) {
                centro = esquerda + (direita - esquerda)/2;
                    /* Ordena metade inferior da tabela */
                MSort(tabela, aux, esquerda, centro);
                    /* Ordena metade superior da tabela */
                MSort(tabela, aux, centro + 1, direita);
                    /* Intercala as duas metades da */
                    /* tabela na tabela auxiliar */
                Intercala(tabela, aux, esquerda, centro + 1, direita);
            }
        }

}
