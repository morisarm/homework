#include <stdio.h>

int main() {
    int n, sum;

    printf("Type three digit number:\n");
    scanf("%d", &n);

    sum = n / 100 + (n / 10) % 10 + n % 10;

    printf("%d\n", sum);
    return 0;
}
