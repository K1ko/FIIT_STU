#include <stdio.h>

int main(void){
    int N,i,cisla,pocet;
    pocet = 0;
    scanf("%d",&N);
    for (i = 1; i <=N;i++){
        scanf("%d",&cisla);                         //načítanie čísel
        if (cisla >= 0 && cisla <= 100){pocet++;}       //Ak podmienka platí , počet sa zväčší o 1
    }
    printf("%d",pocet);
    return 0;
}