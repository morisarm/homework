#include <stdio.h>

int main() {
    int n;

    printf("Type a number:\n");
    scanf("%d", &n);

    printf("%d\n", n % 10);
    return 0;
}
