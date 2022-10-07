#include <stdio.h>

int main()
{
    int arr[]={4,7,1,3,2,5,6};
    int pole[]={},i,a;
    int index=0;

    printf("y: {");
    while (i<7){
        a = arr[i]%2;
        if(a==0) {

            pole[index] = arr[i];


            /*if(index  ) {
                printf("%d, ", pole[index]);
            }else {
                    printf("%d",pole[index]);
                    //index++;
                }
                */
            index++;
        }
        i++;
    }
    for (int j = 0; j< index;j++){

        if(j== index-1) {
            printf("%d", pole[j]);
        } else{printf("%d, ", pole[j]);}
    }
    printf("}");
    return 0;
}