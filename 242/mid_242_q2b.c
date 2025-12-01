#include <stdio.h>

int main() {
    int n, a = 0, b = 1, sum = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        sum += a;
        int temp = a + b;
        a = b;
        b = temp;
    }
    printf("%d\n", sum);
    return 0;
}
