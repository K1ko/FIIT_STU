#include <stdio.h>

int main(void){
    int N,i,k;
    scanf("%d",&N);
    if(N<1 || N > 15){printf("Zlý vstup");return 0;} //zabezpečenie podmienky
    else
    for (i=0;i < N;i++){ //riadky
        for(k =0; k < N; k++){ // stípce
            if((k == N/2) || (i == N/2) || (k == i) || (k == N - i - 1))
                printf("*");
            else 
                printf("_"); // medzera

        }
        printf("\n");
    }
    return 0;
}