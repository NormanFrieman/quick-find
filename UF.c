#include "UF.h"
#include <stdio.h>
#include <stdlib.h>

struct QuickFindUF {
    int *arr;
    int N;
};
struct QuickFindUF quickFind;

void UF_init(int N){
    quickFind.N = N;
    quickFind.arr = (int *)malloc(N * sizeof(int));
    for(int i = 0; i < N; i++){
        quickFind.arr[i] = i;
    }
}

void UF_union(int p, int q){
    int aux = quickFind.arr[q];
    
    for(int i = 0; i < quickFind.N; i++){
        if(quickFind.arr[i] == aux)
            quickFind.arr[i] = quickFind.arr[p];
    }
}

int UF_find(int p){
    return quickFind.arr[p];
}

bool UF_connected(int p, int q){
    return UF_find(p) == UF_find(q);
}

void UF_show(){
    for(int i = 0; i < quickFind.N; i++){
        printf("%d ", quickFind.arr[i]);
    }
    printf("\n");
}