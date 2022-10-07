#include <stdio.h>
int main(void) {
    int C1,C2,result;
    char znak;

    scanf("%d %d %c",&C1,&C2,&znak);

    switch(znak)

{
    case '+': 
            result = C1+C2;
            printf("%d %c %d = %d\n",C1,znak,C2,result);    //súčet
            break;
    case '-':
            result = C1-C2;
            printf("%d %c %d = %d\n",C1,znak,C2,result);    //rozdiel
            break;
    case '*':
            result = C1*C2;
            printf("%d %c %d = %d\n",C1,znak,C2,result);   //súčin
            break;
    case '/':
            result = C1/C2;
            printf("%d %c %d = %d\n",C1,znak,C2,result);  //podiel
            break;
    case '%':
            result = C1%C2;
            printf("%d %c %d = %d\n",C1,znak,C2,result);    //delenie zvyšok
            break;
    default:
            printf("Zle zadaná voľba");

    return 0;

}
}