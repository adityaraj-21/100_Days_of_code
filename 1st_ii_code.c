#include <stdio.h>

int main(){
    int num1 , num2;
    int sum , difference , product;
    float quotient;

    printf("enter the first integer :");
    scanf("%d" , &num1);

    printf("enter the second integer:");
    scanf("%d" , &num2);

    sum= num1+num2;
    difference= num1-num2;
    product= num1 * num2;

    if (num2 != 0) {
        quotient = (float)num1 / num2;
    } else{
        printf(" division by zero is not valid\n ");
        return 1;
    }
    return 0;
}


