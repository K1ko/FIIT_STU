#include <stdio.h>

int main()
{
    int arr[]={4,7,1,3,2,5,6};
    int pole[]={},i,a;
    int index=0;

    printf("y: {");
    while (i<7){                //Cyklus na prebehnutie celého zoznamu
        a = arr[i]%2;
        if(a==0) {

            pole[index] = arr[i];           //Prekopírovanie párnych prvkov z A zoznamu
            index++;
        }
        i++;
    }
    for (int j = 0; j< index;j++){

        if(j== index-1) {                   //Zabezpečenie čiarok pri ľubovoľnom počte prvkov
            printf("%d", pole[j]);
        } else{printf("%d, ", pole[j]);}
    }
    printf("}");
    return 0;
}