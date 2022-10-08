#include <stdio.h>

int main(void){
    int i,prve_cislo,test,cisla,a;
    scanf("%d",&prve_cislo);
    a = prve_cislo;
    for(i = 1; i <= prve_cislo;i++){        //cyklus na načítanie čísel
        scanf("%d",&cisla);
        if(cisla <= 2*a && cisla >= a/2){       //overenie podmienky , ak je i-te číslo menšie ako dvojnásobok predchádzajúceho
            test = 0;                                   // a nie je menšie ako polovica predchádzajúceho, pomocná premenná
        }                                                       // zostáva na 0
        else
            test =1;                            // ak podmienka neplatí , premenná sa nastaví na 1
            a = cisla;                  // overovanie pre nasledujúce načítané číslo - po overení prvého čísla sa overí ďaľšie
    }
    if(test ==0){                           // overenie postupnosti , ak zostala premenná = 0 , postupnosť existuje
        printf("Postupnosť je správna");    
    
    }
    else                                        // ak podmienka neplatí , premenná sa stala = 1 , postupnosť je nesprávna
        printf("Postupnosť je nesprávna");
    return 0;
}