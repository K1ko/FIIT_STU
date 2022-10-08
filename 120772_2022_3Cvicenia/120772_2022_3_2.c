#include <stdio.h>

int main(void){
    int i,n;
    double max,min,cisla;
    scanf("%d",&n);                 // koľkokrát zbehne cyklus na načítanie

    for (i = 1; i <= n; i++)            // cyklus na počet čísel
    {
        scanf("%lf",&cisla);            //načítanie čísel
        if(i == 1){                     //ak je iba jedno načítané číslo max == min 
            max = cisla;
            min = cisla;                // vloženie čísla do premenných max a min
        }
        if (cisla > max)            // porovnávanie čísel vložených v cykle a postupne nastavovanie nových hodnôt
            max = cisla;
        if (cisla < min)
            min = cisla;
    }
    printf("Maximum: %.2lf\n",max);         // výpis funkcie
    printf("Minimum: %.2lf\n",min); 
    return 0;
}