| ![img](https://lh5.googleusercontent.com/mzs-fSUvAAEJmL4HJuiOaiyBUdJkwwsHyaZxwhbgulTtcJnTjKxJs2m-vw6zr2MyWvp-0tLVR8hVum6uaIZMvxShhhZlftGsU6th2cej6-YvUdHVXZMBzq3eteeLV5sxJ1GXb7iI) | **Introdução à Ciência da Computação II SSC0503**Professor: Adenilso da Silva SimãoPAE: Rodrigo Henrique RamosMonitor: Daniel Martins |
| ------------------------------------------------------------ | ------------------------------------------------------------ |
|                                                              |                                                              |



Atividade avaliativa 13

Divisão e Conquista

Data de entrega: 10/1/2022





## Instruções:

Os trabalhos devem ser entregues no run.codes, na disciplina com código 6MDC. A atividade será realizada de **forma individual ou em grupos de até 4 alunos**. Todos os integrantes devem submeter o mesmo código. O grupo deve se "reunir" ao menos uma vez pelo google meet para discutir/resolver o problema e deve gravar a sessão. Além do código, **deve ser postado por apenas um integrante do grupo** o link para o vídeo da sessão gravada (no máximo 5 minutos) no fórum específico no e-disciplinas, **juntamente com a indicação dos integrantes do grupo**. O vídeo deve estar aberto para visualização de todos os alunos (compartilhar como "Qualquer pessoa da USP pode visualizar").

## Atividade:

Faça um programa em C que leia um número inteiro N que representa a quantidade de pontos no plano cartesiano. Em seguida leia os N pontos (x e y). O programa deve imprimir a menor distância euclidiana encontrada entre todos os pontos. Assuma que não existem pontos com a mesma coordenada x e y.

A solução mais direta apresenta complexidade O(n²). Porém existe solução com complexidade menor, utilizando a estratégia de divisão e conquista.

Veja mais em:

- [http://www3.decom.ufop.br/toffolo/site_media/uploads/2011-1/bcc402/slides/08._divisao_e_conquista.pdf](https://www.google.com/url?q=http://www3.decom.ufop.br/toffolo/site_media/uploads/2011-1/bcc402/slides/08._divisao_e_conquista.pdf&sa=D&source=editors&ust=1644868903615473&usg=AOvVaw2kd_RIOCwnaJca8ZogdQLI)

- Slide 24 a 31



**Observações importantes:**

1. Faça um programa em C que leia um número inteiro N que representa a quantidade de pontos no plano cartesiano. Em seguida leia os N pontos (x e y). O programa deve imprimir a menor distância euclidiana encontrada entre todos os pontos. Assuma que não existem pontos com a mesma coordenada x e y.

   A solução mais direta apresenta complexidade O(n²). Porém existe solução com complexidade menor, utilizando a estratégia de divisão e conquista.

   Veja mais em:

   - [http://www3.decom.ufop.br/toffolo/site_media/uploads/2011-1/bcc402/slides/08._divisao_e_conquista.pdf](https://www.google.com/url?q=http://www3.decom.ufop.br/toffolo/site_media/uploads/2011-1/bcc402/slides/08._divisao_e_conquista.pdf&sa=D&source=editors&ust=1644868903615473&usg=AOvVaw2kd_RIOCwnaJca8ZogdQLI)

   - Slide 24 a 31



**Exemplo de entrada e saída:**



| **Entrada**                                               | **Saída** |
| --------------------------------------------------------- | --------- |
| 5                                                         | 12.865549 |
| 63.02713 86.4151524 860 77 26 18458 94 96 32 49 180 11 21 |           |