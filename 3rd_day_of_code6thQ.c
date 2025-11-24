#include <stdio.h>
int main() {
    int a, b, temp;

    printf("Enter two numbers to swap: ");
    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("\nAfter swap: %d %d\n", a, b);

    return 0;
}