| ![img](https://lh5.googleusercontent.com/mzs-fSUvAAEJmL4HJuiOaiyBUdJkwwsHyaZxwhbgulTtcJnTjKxJs2m-vw6zr2MyWvp-0tLVR8hVum6uaIZMvxShhhZlftGsU6th2cej6-YvUdHVXZMBzq3eteeLV5sxJ1GXb7iI) | **Introdução à Ciência da Computação II SSC0503**Professor: Adenilso da Silva SimãoPAE: Rodrigo Henrique RamosMonitor: Daniel Martins |
| ------------------------------------------------------------ | ------------------------------------------------------------ |
|                                                              |                                                              |



Atividade avaliativa 02

Métodos de ordenação: Inserção e Merge

Data de entrega: 28/09/2021





## Instruções:

Os trabalhos devem ser entregues no run.codes, na disciplina com código 6MDC. O exercício será feito em grupo formado por 3 ou 4 alunos, o qual será definido por sorteio. O grupo sorteado será indicado no e-disciplinas. Todos os integrantes devem submeter o mesmo código. O grupo deve se "reunir" ao menos uma vez pelo google meet para discutir/resolver o problema e deve gravar a sessão. Além do código, deve ser postado o link para o vídeo da sessão gravada (no máximo 5 minutos) no fórum específico no e-disciplinas. O vídeo deve estar aberto para visualização de todos os alunos (compartilhar como "Qualquer pessoa da USP pode visualizar").

## Atividade:

Faça um programa em C que receba o número *Q* de vetores. Após isso, deve ser lido o tamanho *N* de cada um dos *Q* vetores. Em seguida, leia cada vetor. O programa deve ordenar os vetores utilizando os método de inserção e merge. Ao final deve-se imprimir o número de trocas e comparações realizadas por ambos os métodos em cada vetor, conforme a seguinte formatação: “M N T C”, onde M é o método (I para inserção e M para merge), N é o tamanho do vetor, T é o número de trocas e C é o número de comparações.



**Observações importantes:**

1. Somente comparações e trocas que envolvam elementos do vetor devem ser contadas. Por exemplo, comparações do tipo **i < fim** não envolvem elementos do vetor, ao contrário de comparações do tipo **x > vetor[i]**, que envolve o vetor a ser ordenado.
2. Considerar o conceito de "curto circuito" em C. Por exemplo, na expressão
   **if (i > 0 && v[i] > x)**, quando **i > 0** é falso, a comparação **v[i] > x** não é realizada.



**Exemplo de entrada e saída:**



| **Entrada**                                                  | **Saída**                                               |
| ------------------------------------------------------------ | ------------------------------------------------------- |
| 34 8 163 6 5 24 8 2 1 9 0 2 31 3 2 7 5 5 2 7 2 9 3 0 8 3 1 4 | I 4 10 6M 4 16 5I 8 30 20M 8 48 16I 16 83 67M 16 128 48 |
| 24 860 77 26 18458 94 96 32 49 180 11 21                     | I 4 8 4M 4 16 5I 8 32 23M 8 48 16                       |