Trabalho realizado por Asley Ingrid e Nayara Xavier.


**__________________ IMPLEMENTAÇÃO DOS ALGORITMOS SELECTION SORT E INSERTION SORT ________________**


**SELECTION SORT (Ordenação por Seleção Direta)**
<p>
  O Selection usa um índice i para marcar o início da parte desordenada do array. Inicialmente o índice do primeiro elemento é atribuído a i, de maneira que a parte desordenada do array fica entre os índices i e n–1, em que n é o número de elementos da tabela. O processamento principal ocorre num laço no qual, em cada iteração, o elemento com a menor chave na parte desordenada do array é trocado com o elemento no índice i. Depois da troca, i está na parte ordenada do array, de modo que se reduz o tamanho da parte desordenada incrementando i. Na expressão condicional do laço interno, a parte desordenada do array varia de i até n – 1. Sabe-se que cada elemento na parte desordenada tem chave maior do que ou igual à chave de qualquer elemento na parte ordenada do array. Quando i = n – 1, a parte desordenada do array contém apenas um elemento e a chave desse elemento deve ser maior do que ou igual à chave de qualquer elemento na parte ordenada. Assim o elemento no índice n – 1 está em seu correto lugar e a ordenação está completa.
</p>
<p>
  Neste algoritmo, o número de comparações de chaves é igual a (n² – n)/2 e o número máximo de trocas é n–1, que é o melhor que se pode esperar de um algoritmo de ordenação que conta apenas com trocas para colocar seus elementos na posição correta. Assim esse algoritmo é bom para chaves pequenas e registros grandes.
  </p>
 <p>
  Ele não é estável, pois após encontrar um registro contendo a menor chave na parte desordenada da tabela, ele troca esse registro de posição com outro, de modo que esse outro registro pode ser posicionado adiante de um registro que tem a mesma chave.
  </p>
  
  
  
**INSERTION SORT (Ordenação por Inserção)**
<p>
  Neste algoritmo, o melhor caso ocorre quando as chaves já estão ordenadas e o pior caso, quando as chaves estão em ordem inversa. Ele requer atribuições entre chaves, em vez de trocas de chaves (que requerem três atribuições), e o número de atribuições é aproximadamente igual ao número de comparações de chavese.
  </p>
<p>
  Ele é o mais versátil dos algoritmos básicos de ordenação e é uma boa escolha quando a tabela a ser ordenada estiver quase ordenada ou for pequena. Ele é o algoritmo mais usado dentre aqueles com custo temporal quadrático e é frequentemente usado como algoritmo auxiliar de Quic kSort e MergeSort. InsertionSort pode ainda ser facilmente adaptado para ordenação de listas encadeadas.
  </p>
 <p>
  O algoritmo InsertionSort é estável, pois quando um registro é inserido na parte ordenada da tabela, apenas registros maiores do que ele mudam de posição. Assim, um registro que antecedesse o registro inserido antes da inserção, continuaria a antecedê-lo depois dessa inserção.
 </p>
