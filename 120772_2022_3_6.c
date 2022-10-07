#include <stdio.h>


int main(void){
    int i,f,g;
    scanf("%d %d",&f,&g);
    for(i = f; i<= g; i ++){
        if(i % 3 == 0){printf("%d ",i);}
    }
    return 0;

}