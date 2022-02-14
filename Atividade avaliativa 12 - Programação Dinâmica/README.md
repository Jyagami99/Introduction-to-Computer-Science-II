| ![img](https://lh5.googleusercontent.com/mzs-fSUvAAEJmL4HJuiOaiyBUdJkwwsHyaZxwhbgulTtcJnTjKxJs2m-vw6zr2MyWvp-0tLVR8hVum6uaIZMvxShhhZlftGsU6th2cej6-YvUdHVXZMBzq3eteeLV5sxJ1GXb7iI) | **Introdução à Ciência da Computação II SSC0503**Professor: Adenilso da Silva SimãoPAE: Rodrigo Henrique RamosMonitor: Daniel Martins |
| ------------------------------------------------------------ | ------------------------------------------------------------ |
|                                                              |                                                              |



Atividade avaliativa 12

Programação Dinâmica

Data de entrega: 10/1/2022



## Instruções:

Os trabalhos devem ser entregues no run.codes, na disciplina com código 6MDC. A atividade será realizada de **forma individual ou em grupos de até 4 alunos**. Todos os integrantes devem submeter o mesmo código. O grupo deve se "reunir" ao menos uma vez pelo google meet para discutir/resolver o problema e deve gravar a sessão. Além do código, **deve ser postado por apenas um integrante do grupo** o link para o vídeo da sessão gravada (no máximo 5 minutos) no fórum específico no e-disciplinas, **juntamente com a indicação dos integrantes do grupo**. O vídeo deve estar aberto para visualização de todos os alunos (compartilhar como "Qualquer pessoa da USP pode visualizar").

## Atividade:

Todo dia você desloca de um ponto A a um ponto B dentro da sua cidade. Nos quarteirões entre o ponto A e B vivem seus amigos em algumas repúblicas, os quais você faz questão de parar e cumprimentá-los durante o seu deslocamento. Acontece que você gostaria de cumprimentar o máximo de amigos possível. Por exemplo, na figura abaixo, os círculos são as esquinas e as setas são as ruas. O número das setas indica quantos amigos moram naquela rua. O caminho destacado representa o percurso onde você consegue cumprimentar o maior número de amigos possível, um total de 17. Observação importante: Você sempre deve fazer o menor caminho entre A e B, ou seja você nunca volta nas ruas.

![img](https://lh3.googleusercontent.com/k95xfPB2fKd99qCLmArY4kKKSgMJoLIkPz3u4ip5rjfjMhnfk5LmdW4q4IakVK3kAKqY6dPugLiFkFAI-TCc4zuc6Z1YGAIUcdEYhuTOLKGjWhc-ZMFOX3Jy3Du779fj_AGUImYm)

Faça um programa em C que leia a quantidade de esquinas de ruas na horizontal (linhas) e quantidade de ruas na vertical (colunas). Após isso, leia os valores de cada rua, representada pelo par de IDs da rua, seguido da quantidade de amigos entre elas (veja exemplo abaixo). O seu programa deve imprimir o máximo de amigos que você vai conseguir cumprimentar durante o seu deslocamento entre o ponto A (ponto mais acima a esquerda) e o ponto B (ponto mais abaixo a direita).



**Exemplo de entrada e saída:**





| **Entrada**                                                  | **Saída** | **Mapa**                                                     |
| ------------------------------------------------------------ | --------- | ------------------------------------------------------------ |
| 3 30 1 30 3 11 2 21 4 02 5 23 4 33 6 44 5 24 7 65 8 56 7 07 8 7 | 17        | ![img](https://lh6.googleusercontent.com/gJqrHxO8n5fLbgk5howzmRRNYfyo2tlsNJjpu2GR8eyI3Vj5YjYrwgIMlZkPr8bNCOZJLBL44S4GgzIlI9TAsBwvFiiNuSdD6juyNO30XdMjy6H_EvLZhIQ3HrxCiFiDhTbD9W_U) |
| 3 40 1 10 4 51 2 21 5 32 3 32 6 103 7 24 5 24 8 35 6 15 9 56 7 46 10 37 11 28 9 29 10 310 11 1 | 19        | ![img](https://lh5.googleusercontent.com/Bq_hC52gDLBh4lySw0K9xI_bn-PiVfkBf_xWDw8ayJEMwGRXV0ZNtvmyDXC45Tm18yTndlotK_729fz-S0pRDSCh_JEqomlP5B0WPuCl0nopTtioZLmSZcRKcUOANp646QRplyhA) |