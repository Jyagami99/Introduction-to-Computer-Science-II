#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "radix.h"

void printf_vetor(unsigned int *v, int tamanho){
  for(int i = 0; i < tamanho; i++){
    printf("%d ", v[i]);
  }
  printf("\n");
}

int *counting_sort(int *v, int tamanho, int chaves){

  int *counting = (int *) malloc ((chaves + 1) * sizeof(int));

  for(int i = 0; i < chaves; i++){
    for(int j = 0; j < tamanho; j++){
      if(v[j] == i){
        counting[i + 1]++;
      }
    }
  }
  
  for(int i = 2; i < chaves + 1; i++){
    counting[i] += counting[i - 1];
  }
  
  /*
  printf("Counting: ");
  for(int i = 0; i < chaves+1; i++){
    printf("%d ", counting[i]);
  }
  printf("\n");
  */
  
  return counting;
}

void radix_sort(unsigned int *v, int tamanho, int expoente){

  int mask = ((1 << expoente) - 1);
  //printf("%d\n", mask);

  int chaves = pow(2, expoente);

  int *aux = (int *) malloc (tamanho * sizeof(int));

  int maior = v[0];
  int x = 0;

  for(int i = 0; i < tamanho; i++){
    if(v[i] > maior){
      maior = v[i];
    }
  }

  while(maior > 0){
    x++;
    maior = maior / chaves;
  }

  for(int p = 0; p < x; p++){
    //trocas
    //printf("Troca:\n");
    for(int i = 0; i < tamanho; i++){
      aux[i] = (v[i] >> (p * expoente)) & mask;
    }

    /*
    printf("Aux: ");
    for(int i = 0; i < tamanho; i++){
      printf("%d ", aux[i]);
    }
    printf("\n");
    */

    int *posicao = counting_sort(aux, tamanho, chaves);
    
    int *aux2 = (int *) malloc(tamanho * sizeof(int));

    for(int i = 0; i < tamanho; i++){
      for(int j = 0; j < chaves; j++){
        if(aux[i] == j){
          //printf("%d -> posicao[%d]\n",aux[i], posicao[j]);
          aux2[posicao[j]] = v[i];
          posicao[j]++;
        }
      }
    }

    for(int i = 0; i < tamanho; i++){
      v[i] = aux2[i];
    }

    //printf
    printf_vetor(v, tamanho);
    //printf("\n");
  }

  free(aux);

}