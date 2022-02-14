| ![img](https://lh5.googleusercontent.com/mzs-fSUvAAEJmL4HJuiOaiyBUdJkwwsHyaZxwhbgulTtcJnTjKxJs2m-vw6zr2MyWvp-0tLVR8hVum6uaIZMvxShhhZlftGsU6th2cej6-YvUdHVXZMBzq3eteeLV5sxJ1GXb7iI) | **Introdução à Ciência da Computação II SSC0503**Professor: Adenilso da Silva SimãoPAE: Rodrigo Henrique RamosMonitor: Daniel Martins |
| ------------------------------------------------------------ | ------------------------------------------------------------ |
|                                                              |                                                              |



Atividade avaliativa 07

Métodos de ordenação: Counting e Radix

Data de entrega: 09/11/2021





## Instruções:

Os trabalhos devem ser entregues no run.codes, na disciplina com código 6MDC. O exercício será feito em grupo formado por 3 ou 4 alunos, o qual será definido por sorteio. O grupo sorteado será indicado no e-disciplinas. Todos os integrantes devem submeter o mesmo código. O grupo deve se "reunir" ao menos uma vez pelo google meet para discutir/resolver o problema e deve gravar a sessão. Além do código, deve ser postado o link para o vídeo da sessão gravada (no máximo 5 minutos) no fórum específico no e-disciplinas. O vídeo deve estar aberto para visualização de todos os alunos (compartilhar como "Qualquer pessoa da USP pode visualizar").

## Atividade:

Faça dois programas em C para ordenar vetores. Um dos programas deverá ordenar utilizando o método Counting Sort, enquanto o outro deverá utilizar o Radix Sort. As especificações seguem abaixo:



Para o método Counting Sort, o programa deve ler o número *K* de chaves distintas do vetor V e o número *N* de elementos de *V*. Após isso, leia os *N* elementos de *V.* Cada elemento terá valor entre 0 e *K* - 1. O programa deve imprimir a posição que cada elemento vai ocupando no vetor ordenado.



Para o método Radix Sort, o programa deve ler um expoente *E* e o número *N* de elementos de um vetor *V*. Após isso, leia os *N* elementos de *V.* Cada elemento é um inteiro sem sinal entre 0 e 2^32. O programa deve imprimir os vetores intermediários em decimal, com a ordenação de cada dígito dada pela base *2^E*.





**Exemplo de entrada e saída para o Counting Sort:**



| **Entrada**               | **Saída**                      |
| ------------------------- | ------------------------------ |
| 360 2 2 2 1 0             | 0 02 32 42 51 20 1             |
| 5   103 3 3 1 0 1 4 4 4 2 | 3 43 53 61 10 01 24 74 84 92 3 |



**Exemplo de entrada e saída para o Radix Sort:**



| **Entrada**               | **Saída**                                                    |
| ------------------------- | ------------------------------------------------------------ |
| 354185 5874 8684 475 7628 | 4185 5874 475 8684 76287628 4185 475 8684 58744185 5874 7628 475 86844185 475 8684 5874 7628475 4185 5874 7628 8684 |
| 1523 548 43 1024 19       | 548 1024 23 43 19  548 1024 23 43 19  1024 43 19 548 23  1024 19 548 23 43  1024 548 43 19 23  1024 19 23 548 43  1024 19 23 548 43  1024 19 23 548 43  1024 19 23 548 43  1024 19 23 43 548  19 23 43 548 1024 |

Notem que a representação binária dos números do segundo exemplo é:

23 = 00000010111

548 = 01000100100

43 = 00000101011

1024 = 10000000000

19 = 00000010011