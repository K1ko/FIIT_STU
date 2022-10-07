#include <stdio.h>

int main(void){
    char retazec[16];
    int i;
    for(i=0;i<14;i++){
        scanf("%c ",&(retazec[i]));
    }
    scanf("%c",&(retazec[i])); 
    //printf("%c",retazec[5]);
    for(i=15;i >=0;i--){
        printf("%c",retazec[i]);
    }
    return 0;
}