#include <stdio.h>

int main() {
    int a, b, gcd, lcm;
    scanf("%d %d", &a, &b);
    int x = a, y = b;
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;
    lcm = (x * y) / gcd;
    printf("%d\n", lcm);
    return 0;
}
