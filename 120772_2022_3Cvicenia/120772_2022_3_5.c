#include <stdio.h>

int main(void){
    int i;
    float cislo;
    long int faktorial; //long int kvôli miestu v pamäti
    scanf("%f",&cislo); //keby použijeme iba int , pri vačších číslach môže hádzať output mimo pamäte
    faktorial = 1;
    while (cislo<0 || cislo -(int)cislo != 0 ){ //Ošetrenie pre nezáporné čísla
        scanf("%f",&cislo);
    }
    for(i = 1; i <= cislo; i++){    //Cyklus na zabezpečenie faktorialu n(n-1)(n-2)...
        faktorial = faktorial*i;
    }
    printf("%ld",faktorial);
    return 0;
}