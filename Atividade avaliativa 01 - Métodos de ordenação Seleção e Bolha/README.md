| ![img](https://lh4.googleusercontent.com/FO16HaC7MvKcBxyIanUjmWwqpq1MSlYVlPd_ZiyttpujsxtegFDWwzPIDE2TeB89MwUtjwRK9EExR259bVHeHngYv2iOsQJXBYVbvaRtumUVEb5lVakko8LK9JfkLzrsn_eqQiIU) | **Introdução à Ciência da Computação II SSC0503**Professor: Adenilso da Silva SimãoPAE: Rodrigo Henrique RamosMonitor: Daniel Martins |
| ------------------------------------------------------------ | ------------------------------------------------------------ |
|                                                              |                                                              |



Atividade avaliativa 01

Métodos de ordenação: Seleção e Bolha

Data de entrega: 21/09/2021

## Instruções:

Os trabalhos devem ser entregues no run.codes, na disciplina com código 6MDC. O exercício será feito em grupo formado por 3 ou 4 alunos, o qual será definido por sorteio. O grupo sorteado será indicado no e-disciplinas. Todos os integrantes devem submeter o mesmo código. O grupo deve se "reunir" ao menos uma vez pelo google meet para discutir/resolver o problema e deve gravar a sessão. Além do código, deve ser postado o link para o vídeo da sessão gravada (no máximo 5 minutos) no fórum específico no e-disciplinas. O vídeo deve estar aberto para visualização de todos os alunos (compartilhar como "Qualquer pessoa da USP pode visualizar").

## Atividade:

Faça um programa em C que receba o nome do método de ordenação (no caso, *selecao* ou *bolha*), o número *N* de elementos de um vetor. Após isso, leia os *N* elementos e imprima as indicações de todas as comparações e trocas realizadas pelo método escolhido, seguido do vetor ordenado.

As comparações e trocas devem ser impressas de acordo com os índices dos elementos envolvidos na operação. Por exemplo, se o elemento do índice 3 foi comparado com o elemento do índice 7, então deve-se imprimir C 3 7. Se o elemento de índice 2 foi trocado com o elemento de índice 5, deve-se imprimir T 2 5.

**Exemplo de entrada e saída:**



| **Entrada**     | **Saída**                                                 |
| --------------- | --------------------------------------------------------- |
| selecao43 6 5 2 | C 0 1C 0 2C 0 3T 0 3C 1 2C 2 3T 1 3C 2 32 3 5 6           |
| bolha43 6 5 2   | C 0 1C 1 2T 1 2C 2 3T 2 3C 0 1C 1 2T 1 2C 0 1T 0 12 3 5 6 |

