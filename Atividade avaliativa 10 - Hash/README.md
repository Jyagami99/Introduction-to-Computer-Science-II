| ![img](https://lh5.googleusercontent.com/mzs-fSUvAAEJmL4HJuiOaiyBUdJkwwsHyaZxwhbgulTtcJnTjKxJs2m-vw6zr2MyWvp-0tLVR8hVum6uaIZMvxShhhZlftGsU6th2cej6-YvUdHVXZMBzq3eteeLV5sxJ1GXb7iI) | **Introdução à Ciência da Computação II SSC0503**Professor: Adenilso da Silva SimãoPAE: Rodrigo Henrique RamosMonitor: Daniel Martins |
| ------------------------------------------------------------ | ------------------------------------------------------------ |
|                                                              |                                                              |



Atividade avaliativa 10

Hash

Data de entrega: 06/12/2021





## Instruções:

Os trabalhos devem ser entregues no run.codes, na disciplina com código 6MDC. A atividade será realizada de **forma individual ou em grupos de até 4 alunos**. Todos os integrantes devem submeter o mesmo código. O grupo deve se "reunir" ao menos uma vez pelo google meet para discutir/resolver o problema e deve gravar a sessão. Além do código, **deve ser postado por apenas um integrante do grupo** o link para o vídeo da sessão gravada (no máximo 5 minutos) no fórum específico no e-disciplinas, **juntamente com a indicação dos integrantes do grupo**. O vídeo deve estar aberto para visualização de todos os alunos (compartilhar como "Qualquer pessoa da USP pode visualizar").

## Atividade:

Faça um programa em C que leia um número inteiro *M* que indica a capacidade da tabela, criando-a em seguida. Após isso, seu programa deverá:



1. Ler um número inteiro *N* que indica o total de inserções na tabela, seguido da leitura e inserção dos *N* elementos lidos (inteiros e não negativos), utilizando a estratégia linear para sondagem. Não é permitido a inserção de números repetidos na tabela.



1. Ler um número inteiro *D* que indica o total de remoções na tabela, seguido da leitura e remoção de cada elemento informado.



1. Ler um número inteiro *B* que indica o total de buscas na tabela. Após isso, deve-se ler *B* elementos e buscar cada um na tabela, imprimindo o índice da tabela onde ele se encontra. Se não for encontrado, deve-se imprimir -1



**Observações importantes:**

1. Somente comparações e trocas que envolvam elementos do vetor devem ser contadas. Por exemplo, comparações do tipo **i < fim** não envolvem elementos do vetor, ao contrário de comparações do tipo **x > vetor[i]**, que envolve o vetor a ser ordenado.
2. Considerar o conceito de "curto circuito" em C. Por exemplo, na expressão
   **if (i > 0 && v[i] > x)**, quando **i > 0** é falso, a comparação **v[i] > x** não é realizada.



**Exemplo de entrada e saída:**



| **Entrada**                               | **Saída**    |
| ----------------------------------------- | ------------ |
| 13526 78 59 39 51359 98 39526 78 59 39 51 | 0 1 -1 -1 12 |