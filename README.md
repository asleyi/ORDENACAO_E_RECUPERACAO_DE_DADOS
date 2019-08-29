# IMPLEMENTAÇÃO DO ALGORITMO COUTING SORT E RADIX SORT

**Counting Sort**
<p>
  A Ordenação por Contagem, pressupõe que cada um dos n elementos de entrada é um inteiro no intervalo de 1 a k, para algum inteiro k. 
</p>
<p>
  A ideia básica é determinar para cada elemento de entrada x, o número de elementos menores que x e com esta informação, pode-se inserir o elemento diretamente em sua posição no arranjo de saída. 
</p>

<p>
 Nesse algoritmo, foi usada uma lista de números aleatórios. O tempo de execução foi de 0.131s. Veja abaixo a saída do algoritmo:
  
  
  ![saida_e_tempoDeExec_CS](https://github.com/asleyi/ORDENACAO_E_RECUPERACAO_DE_DADOS/blob/master/saida_e_tempoDeExec_CS.PNG)
  
  
  
 </p>
 
  **Radix Sort**
<p>
  Este, trabalha com números de d dígitos e ordena os elementos coluna por coluna. De forma não intuitiva, a odenação começa pelo número menos significativo. O processo continua até os elementos terem sido ordenados sobre todos os dígitos d. 
  </p>
 <p>
  A lista de números foi a mesma usada no algoritmo acima. E o tempo de execução desse algoritmo foi de 0.067s. Observe abaixo a saída do algoritmo:
  
 ![saida_e_tempoExec_RS](https://github.com/asleyi/ORDENACAO_E_RECUPERACAO_DE_DADOS/blob/master/saida_e_tempoDeExec_RS.PNG)
 
 
 
 </p>
 <p>
  O Radix Sort foi mais rápido que o Couting Sort. E, quanto mais vezes ele era compilado, mais rapido ele executava a ordenação. 
  </p>
