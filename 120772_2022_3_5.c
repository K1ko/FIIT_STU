#include <stdio.h>

int main(void){
    int i;
    float cislo;
    long int faktorial;
    scanf("%f",&cislo);
    faktorial = 1;
    while (cislo<0 || cislo -(int)cislo != 0 ){
        scanf("%f",&cislo);
    }
    for(i = 1; i <= cislo; i++){
        faktorial = faktorial*i;
    }
    printf("%ld",faktorial);
    return 0;
}