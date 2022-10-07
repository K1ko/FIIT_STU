#include <stdio.h>

int main(void){
    int cislo,i,a,b,c,k;
    scanf("%d",&cislo);
    a = cislo;
    b = 0;
    c = 1;
    if(cislo < 1 || cislo > 15)
    { return 0;}
    else
    for(i = cislo;i >=1;--i,c++){
        a = cislo;
        a = a-b;
        b= b+1;
        printf("%d : ",c);
        for(k = 1; k<=i; ++k,a--){
            printf("%d ",a);
            }
        printf("\n");
    
    }
    return 0;
}