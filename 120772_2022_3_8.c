#include <stdio.h>

int main(void){
    int N,i,k;
    scanf("%d",&N);
    for (i=0;i < N;i++){
        for(k =0; k < N; k++){
            if((k == N/2) || (i == N/2) || (k == i) || (k == N - i - 1))
                printf("*");
            else 
                printf("_");

        }
        printf("\n");
    }
    return 0;
}