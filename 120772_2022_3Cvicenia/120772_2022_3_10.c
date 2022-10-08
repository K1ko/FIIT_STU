#include <stdio.h>

int main(void){
    char retazec[16];
    int i;
    for(i=0;i<14;i++){      //načítanie reťazca
        scanf("%c ",&(retazec[i]));
    }
    scanf("%c",&(retazec[i])); //načítanie posledného znaku reťazca
    for(i=15;i >=0;i--){ //reversed-cyklus na zbehnutie zoznamu
        printf("%c",retazec[i]); //vypisovanie prvkov pomocou reversed - cyklusu
    }
    return 0;
}