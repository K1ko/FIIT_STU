#include <stdio.h>

int main(void){
    int cislo,i,a,b,c,k;
    scanf("%d",&cislo); //načítanie zač.čísla
    a = cislo;
    b = 0;
    c = 1;
    if(cislo < 1 || cislo > 15) //podmienka na ošetrenie intervalu
    { return 0;} // ak číslo nie je z intervalu , program sa ukončí
    else
    for(i = cislo;i >=1;--i,c++){ //číslovanie riadkov
        a = cislo; //do premennej sa nastaví počiatočné číslo
        a = a-b; // z premennej sa bude odpočítavať na základe riadkov
        b= b+1;
        printf("%d : ",c); // číslovanie riadkov
        for(k = 1; k<=i; ++k,a--){ //postupné vypisovanie čísel a odrátavenie na základe riadkov
            printf("%d ",a);
            }
        printf("\n"); //printovanie do nového riadku
    
    }
    return 0;
}