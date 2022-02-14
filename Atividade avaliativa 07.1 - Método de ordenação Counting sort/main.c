#include <stdio.h>
#include <stdlib.h>
#include "counting.h"

int main(void) {
  
  int chaves;
  scanf("%d", &chaves);

  int tamanho;
  scanf("%d", &tamanho);

  int *v = (int *) malloc (tamanho * sizeof(int));

  for(int i = 0; i < tamanho; i++){
    scanf("%d", &v[i]);
  } 

  counting_sort(v, tamanho, chaves);

  free(v);

  return 0;
}

