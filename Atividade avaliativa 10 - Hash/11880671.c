#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void insereHash(int data, int M, int *hashKeyArr){
   int hashIndex = data % M;
   int temp = 0;
   for(int i = 0;i < M;i++) //Checa se tem valor igual ja na array
      if(hashKeyArr[i] == data)
         return;
   
   while (hashKeyArr[hashIndex] != -1 && temp <= M ){
      temp++;
      hashIndex++;
      hashIndex %= M;
   }

   hashKeyArr[hashIndex] = data;
}

int searchHash(int data, int M, int *hashKeyArr){
   int hashIndex = data % M;
   int temp = 0;

   while (temp <= M){
      temp++;
      if (hashKeyArr[hashIndex] == data){
         return hashIndex;
      }
      hashIndex++;
      hashIndex %= M;
   }

   return -1;
}

void deleteHash(int data, int M, int *hashKeyArr){
   int hashIndex = data % M;
   int temp = 0;
   while (temp <= M){
      ++temp;
      if (hashKeyArr[hashIndex] == data){
         hashKeyArr[hashIndex] = -1;
         return;
      }
      hashIndex++;
      hashIndex %= M;
   }
}

int main(){
   int M, N, D, B, temp;
   scanf("%d", &M);
   int *hashKeyArr = (int *)malloc(M * sizeof(int));
   memset(hashKeyArr,-1,sizeof(int) * M);
   scanf("%d", &N);
   for (int i = 0; i < N; ++i){
      scanf("%d", &temp);
      insereHash(temp, M, hashKeyArr);
   }
   scanf("%d", &D);
   for (int i = 0; i < D; ++i){
      scanf("%d", &temp);
      deleteHash(temp, M, hashKeyArr);
   }
   scanf("%d", &B);
   for (int i = 0; i < B; ++i){
      scanf("%d", &temp);
      printf("%d ", searchHash(temp, M, hashKeyArr));
   }
   return 0;
}