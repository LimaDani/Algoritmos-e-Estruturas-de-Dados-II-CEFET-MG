# URI Online Judge | 2300
## [Transmissão de Energia](https://www.urionlinejudge.com.br/judge/en/problems/view/2300)

 distribuição de energia para as diversas regiões do país exige um investimento muito grande em linhas de transmissão e estações transformadoras. Uma linha de transmissão interliga duas estações transformadoras. Uma estação transformadora pode estar interligada a uma ou mais outras estações transformadoras, mas devido ao alto custo não pode haver mais de uma linha de transmissão interligando duas estações.

As estações transformadoras são interconectadas de forma a garantir que a energia possa ser distribuída entre qualquer par de estações. Uma rota de energia entre duas estações e1 e ek é deﬁnida como uma sequência (e1 , l1 , e2 , l2 , ...ek−1 , lk−1 , ek ) onde cada ei é uma estação transformadora e cada li é uma linha de transmissão que conecta ei ei+1.

Os engenheiros de manutenção do sistema de transmissão de energia consideram que o sistema está em estado normal se há pelo menos uma rota entre qualquer par de estações, e em estado de falha caso contrário.

Um grande tornado passou pelo país daniﬁcando algumas das linhas de transmissão, e os engenheiros de manutenção do sistema de transmissão de energia necessitam de sua ajuda.

Dada a conﬁguração atual do sistema de transmissão de energia, descrevendo as interconexões existentes entre as estações, escreva um programa que determine o estado do sistema.

## Entrada


A entrada é composta de vários casos de teste. A primeira linha de um caso de teste contém dois números inteiros **E** e **L** indicando respectivamente o número de estações (3 ≤ **E** ≤ 100) e o número de linhas de transmissão do sistema ( **E** − 1 ≤ **L** ≤ **E** × ( **E** − 1)/2) que continuam em funcionamento após o tornado. As estações são identiﬁcadas por números de 1 a **E**. Cada uma das **L** linhas seguintes contém dois inteiros **X** e **Y** que indicam que existe uma linha de transmissão interligando a estação **X** à estação **Y**. O ﬁnal da entrada é indicado por **E** = **L** = 0.

A entrada deve ser lida do dispositivo de entrada padrão (normalmente o teclado).

## Saída

Para cada caso de teste seu programa deve produzir três linhas na saída. A primeira identiﬁca o conjunto de teste no formato “Teste n”, onde n é numerado a partir de 1. A segunda linha deve conter a palavra “normal”, se, para cada par de estações, houver uma rota que as conecte, e a palavra “falha” caso não haja uma rota entre algum par de estações. A terceira linha deve ser deixada em branco. A graﬁa mostrada no Exemplo de Saída, abaixo, deve ser seguida rigorosamente.

A saída deve ser escrita no dispositivo de saída padrão (normalmente a tela).

## Exemplo de entrada:   
```
6 7
1 2
2 3
3 4
4 5
5 6
6 2
1 5
4 3
1 2
4 2
1 4
0 0
```
## Exemplo de Saída:
```
Teste 1
normal

Teste 2
falha
```
