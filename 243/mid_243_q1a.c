#include <stdio.h>

int main() {
    int a, b, gcd;
    scanf("%d %d", &a, &b);
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;
    printf("%d\n", gcd);
    return 0;
}
