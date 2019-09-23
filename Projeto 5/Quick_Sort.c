#include <stdio.h>
#include <stdlib.h>

main(){

    //static void Quick1(int tabela[], int inf, int sup) {
    void Quick1(int tabela[], int inf, int sup) {

        int esq, /* Índice da esquerda */
            dir, /* Índice da direita */
            iPivo; /* Índice do pivô */

            /* Se a tabela está vazia ou contém apenas */
            /* um elemento, ela já está ordenada */

        if (inf >= sup)
            return; /* A tabela já está ordenada */

                /* Nesta implementação, o pivô é sempre */
                /* o primeiro elemento da tabela */

        iPivo = inf;
            /* Início da operação de partição */

        for (esq = inf, dir = sup; esq < dir; ) {
                /* Enquanto os elementos da primeira metade */
                /* da tabela forem menores do que o pivô, */
                /* incrementa-se o índice esquerdo */
            while (tabela[esq] <= tabela[iPivo] && esq < sup)
                ++esq;
                /* Enquanto os elementos da segunda metade */
                /* da tabela forem maiores do que o pivô, */
                /* decrementa-se o índice direito */
            while (tabela[dir] > tabela[iPivo])
                --dir;

                /* Se os elementos nos índices esq e dir estiverem */
                /* em partições erradas, deve-se trocá-los de lugar */
            if (esq < dir)
                Troca(tabela + esq, tabela + dir, sizeof(tabela[0]));
        }
            /* Fim da operação de partição */
            /* Coloca o pivô em sua correta posição */

        Troca(tabela + iPivo, tabela + dir, sizeof(tabela[0]));
                /* Ordena recursivamente a primeira metade da tabela */
        Quick1(tabela, inf, dir - 1);
                /* Ordena recursivamente a segunda metade da tabela */
        Quick1(tabela, dir + 1, sup);
    }
}


