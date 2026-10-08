#include <stdio.h>

int main() {
    int n;

    printf("Type a number:\n");
    scanf("%d", &n);

    if (n % 3 == 0 && n % 5 == 0)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
