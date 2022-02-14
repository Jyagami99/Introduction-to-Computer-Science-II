#include <stdio.h>
#include <stdlib.h>
#include "radix.h"

int main(){

  int expoente;
  scanf("%d", &expoente);

  int tamanho;
  scanf("%d", &tamanho);

  unsigned int *v = (unsigned int *) malloc (tamanho * sizeof(unsigned int));

  for(int i = 0; i < tamanho; i++){
    scanf("%d", &v[i]);
  }

  radix_sort(v, tamanho, expoente);

  free(v);

  return 0;
}