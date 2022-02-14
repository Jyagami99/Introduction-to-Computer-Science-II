#include <stdio.h>
#include <stdlib.h>

void quick_sort(int *vet, int c, int f);

int busca(int *arr, int result, int i, int f);

int main(){
  int i, n, *vet_n, k, *vet_k;
  
  scanf("%d", &n);
  vet_n = malloc(sizeof(int) * n);

    for(i=0; i<n; i++){
        scanf("%d", &vet_n[i]);
    }

    scanf("%d", &k);
    vet_k = malloc(sizeof(int) * k);
    for(i=0; i<k; i++){
        scanf("%d", &vet_k[i]);
    }

    quick_sort(vet_n, 0, n - 1);

    for(i=0; i<k; i++){
        if(busca(vet_n, vet_k[i], 0, n-1) == -1){
            printf("0\n");
        }else{
            printf("1\n");
        }
    }
    free(vet_n);
    free(vet_k);
    return 0;
}

void quick_sort(int *vet, int c, int f) {
    int m = (c + f)/2;
    int pivot = vet[m];
    int i = c;
    int j = f;

    if (c >= f){
        return;
    }

    while(1) {
        while(vet[i] < pivot){
            i++;
        }
        while(vet[j] > pivot) {
            j--;
        }
        if (j <= i){
            break;
        }
        int tmp = vet[i];
        vet[i] = vet[j];
        vet[j] = tmp;
        i++;
        j--;
    }

    quick_sort(vet, c, j);
    quick_sort(vet, j + 1, f);
}

int busca(int *arr, int result, int i, int f){
    if (f >= i){
        int mid = i + (f - i) / 2;
        if (arr[mid] == result){
            return mid;
        }

        if (arr[mid] > result){
            return busca(arr, result, i, mid - 1);
        }

        return busca(arr, result, mid + 1, f);
    }
    return -1;
}