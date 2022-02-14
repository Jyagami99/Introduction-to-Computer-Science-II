#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void levetor(int *vet, int n){ 
  int i; 
  for(i = 0; i < n; i++){ 
    scanf("%d",&vet[i]);
  }

}

void foiAlocado(int* vet){ 
  if(vet == NULL){ 
    printf("Vetor nao alocado"); 
    exit(0);
  }
}

int Shellsort(int *v, int n){
  int gap=(int)pow(2,floor(log2(n)))-1;
  int steps=0;
  while(gap>0){
    for(int i=gap;i<n;i++){
      int aux=v[i];
      steps++;
      int j=i-gap;
      while(j>=0&&(steps++, v[j]>aux)){
        steps++;
        v[j+gap]=v[j];
        j=j-gap;
      }
      v[j+gap]=aux;
      steps++;
    }
    gap=gap/2;
  }
  return steps;
}

void _quick(int *v, int c, int f, int *steps){

  if (c >= f){
    return;
  }

  int m = (c + f) / 2;
  int pivot = v[m];
  steps[0]++;
  int i = c;
  int j = f;

  while(1){
    while((steps[0]++, v[i] < pivot) && j>0){
      i++;
    } 
    while (steps[0]++, v[j] > pivot){
      j--;
    }
    if (j <= i){
      break;
    }
    
    int tmp = v[i];
    v[i] = v[j];
    v[j] = tmp;
    i++;
    j--;
    steps[0] = steps[0] + 3;
  }

  _quick(v, c, j, steps);
  _quick(v, j + 1, f, steps);

}

int Quicksort(int *v, int n){
  int *steps=(int*)malloc(sizeof(int));
  steps[0]=0;
  _quick(v, 0, n - 1, steps);
  return steps[0];
}

int main(void) {
  
  int *v, *u, n, steps1, steps2;
  scanf("%d", &n);
  v=(int*)malloc(sizeof(int)*n);
  u=(int*)malloc(sizeof(int)*n);

  foiAlocado(v); 
  foiAlocado(u);
  
  levetor(v, n);

  for(int i=0;i<n;i++){
    u[i]=v[i];
  }

  for(int i=1;i<=n;i++){
    steps1=Shellsort(u, i);
    for(int i=0;i<n;i++){
      u[i]=v[i];
    }
    steps2=Quicksort(u, i);
    for(int i=0;i<n;i++){
      u[i]=v[i];
    }
    if(steps1<steps2){
      printf("S ");
    }
    if(steps1>steps2){
      printf("Q ");
    }
    if(steps1==steps2){
      printf("- ");
    }
  }
  free(v);
  free(u);

  return 0;
}