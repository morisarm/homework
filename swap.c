#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Type two digit number:\n");
    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("%d %d\n", a, b);
    return 0;
}
