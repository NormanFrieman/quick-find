#include <stdio.h>
#include <stdlib.h>
#include "UF.h"

int main(int argc, char *argv[]){
    int p, q, N = atoi(argv[1]);
    UF_init(N);
    while(scanf("%d %d", &p, &q) == 2){
        if(p >= 0 && q >= 0){
            if(!UF_connected(p, q)){
                UF_union(p, q);
                printf("%d %d\n", p, q);
            }
        }else{
            UF_show();
        }
    }

    return 0;
}