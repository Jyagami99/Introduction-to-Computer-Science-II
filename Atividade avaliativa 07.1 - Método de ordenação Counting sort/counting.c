#include <stdio.h>
#include <stdlib.h>
#include "counting.h"

void counting_sort(int *v, int tamanho, int chaves){

  int *counting = (int *) malloc ((chaves + 1) * sizeof(int));

  for(int i = 0; i < chaves; i++){
    for(int j = 0; j < tamanho; j++){
      if(v[j] == i){
        counting[i + 1]++;
      }
    }
  }
  
  for(int i = 2; i < chaves; i++){
    counting[i] += counting[i - 1];
  }

  for(int i = 0; i < tamanho; i++){
    printf("%d ", v[i]);
    for(int j = 0; j < chaves; j++){
      if(v[i] == j){
        printf("%d\n", counting[j]);
        counting[j]++;
      }
    }
  }

  free(counting);

}

