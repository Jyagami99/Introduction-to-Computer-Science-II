/* Instruções:
Os trabalhos devem ser entregues no run.codes, na disciplina com código SHEL. O exercício será feito em grupo formado por 3 ou 4 alunos, o qual será definido por sorteio. O grupo sorteado será indicado no e-disciplinas. Todos os integrantes devem submeter o mesmo código. O grupo deve se "reunir" ao menos uma vez pelo google meet para discutir/resolver o problema e deve gravar a sessão. Além do código, deve ser postado o link para o vídeo da sessão gravada (no máximo 5 minutos) no fórum específico no e-disciplinas. O vídeo deve estar aberto para visualização de todos os alunos (compartilhar como "Qualquer pessoa da USP pode visualizar"). Link para o fórum

Atividade:
Faça um programa em C que receba o número Q de vetores. Após isso, deve ser lido o tamanho N de cada um dos Q vetores. Em seguida, leia cada vetor. O programa deve ordenar os vetores utilizando os método de inserção e merge. Ao final deve-se imprimir o número de trocas e comparações realizadas por ambos os métodos em cada vetor, conforme a seguinte formatação: “M N T C”, onde M é o método (I para inserção e M para merge), N é o tamanho do vetor, T é o número de trocas e C é o número de comparações.


Observações importantes:

Somente comparações e trocas que envolvam elementos do vetor devem ser contadas. Por exemplo, comparações do tipo i < fim não envolvem elementos do vetor, ao contrário de comparações do tipo x > vetor[i], que envolve o vetor a ser ordenado.
Considerar o conceito de "curto circuito" em C. Por exemplo, na expressão
if (i > 0 && v[i] > x), quando i > 0 é falso, a comparação v[i] > x não é realizada.

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct {
  char metodo;
  int trocas;
  int comp;
} Saida;

void insertion_sort (int vetor[], int n) {
  int i, j, t, v[n];
  for(int k=0;k<n;k++){
    v[k]=vetor[k];
  }
  Saida insertion;
  insertion.metodo='I';
  insertion.trocas=0;
  insertion.comp=0;
  for (i=1;i<n;i++) {
    t=v[i];
    j=i-1;
    while (j>=0&&v[j]>t) {
      v[j+1]=v[j];
      j--;
      insertion.trocas++;
      insertion.comp++;
    }
    if (j>=0) {
    insertion.comp++;
    }
    insertion.trocas+=2;
    v[j+1]=t;
  }
  printf ("%c %d %d %d\n", insertion.metodo, n, insertion.trocas, insertion.comp);
}

void Merge_ordena (int v[], int ini, int meio, int fim, Saida *merge) {
  int count1=meio-ini+1;
  int count2=fim-meio;
  int tmp1[count1];
  int tmp2[count2];

  for(int i=0;i< count1;i++){
    tmp1[i]=v[ini+i];
  }

  for(int j=0;j< count2;j++){
    tmp2[j]=v[meio+1+j];
  }

  int i=0, j=0, k=ini;

    while (i<count1 && j<count2) {
      if (tmp1[i]<=tmp2[j]) {
        v[k]=tmp1[i];
        i++;
        merge->trocas++;
      }
      else {
        v[k]=tmp2[j];
        j++;
        merge->trocas++;
      }
      k++;
      merge->comp++;
    }
    while (i<count1) {
      v[k]=tmp1[i];
      i++;
      k++;
      merge->trocas++;
    }

    while (j<count2) {
      v[k]=tmp2[j];
      k++;
      j++;
      merge->trocas++;
    }
}
    
void merge_recursao (int v[], int inicio, int fim, Saida *merge) {
  if (inicio>=fim) {
    return;
  }
  int meio=(inicio+fim)/2;
  merge_recursao (v, inicio, meio, merge);
  merge_recursao (v, meio+1, fim, merge);
  Merge_ordena (v,inicio, meio, fim, merge);
}

void comecoMerge (int v[], int n) {
  Saida *merge = calloc(1,sizeof(Saida));
  merge->trocas=0;
  merge->comp=0;
  merge_recursao(v,0,n-1,merge);
  merge->metodo = 'M';
  printf ("%c %d %d %d\n", merge->metodo, n, 2*merge->trocas, merge->comp);
  free(merge);
}

int main () {
  int qtd; //quantidade de vetores
  // printf("Digite a quantidade de vetores: ");
  scanf("%d",&qtd);
  
  int tam[qtd], i,j;
  int *vet[qtd];
  
  for (i=0;i<qtd;i++) {
    scanf ("%d", &tam[i]);
    // printf("Chegou aqui!!!");
  }
  // ----
  for (i=0;i<qtd;i++) {
    vet[i]=calloc(tam[i], sizeof(int));
      for (j=0;j<tam[i];j++){
        scanf("%d", &vet[i][j]);
        // printf("aqui tambem");
    }
  }
  for (i=0;i<qtd;i++) {
    insertion_sort(vet[i], tam[i]);
    comecoMerge(vet[i], tam[i]);
  }
  return 0;
}