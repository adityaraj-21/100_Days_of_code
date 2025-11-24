#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a natural number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("\nSum of the first %d natural numbers = %d\n", n, sum);

    return 0;
}