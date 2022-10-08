#include <stdio.h>


int main(void){
    int i,f,g;
    scanf("%d %d",&f,&g);   //načítanie čísel
    for(i = f; i<= g; i ++){    //prebehnutie intervalom
        if(i % 3 == 0){printf("%d ",i);}    //podmienka*
    }                 //* ak zvyšok po delení 3 == 0 tak 
    return 0;          // sa vypíše na obrazovku

}