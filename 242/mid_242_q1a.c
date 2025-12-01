#include <stdio.h>

int main() {
    int n, isPrime = 1;
    scanf("%d", &n);
    if(n < 2) isPrime = 0;
    for(int i = 2; i * i <= n; i++) if(n % i == 0) isPrime = 0;
    printf("%s\n", isPrime ? "Prime" : "Not Prime");
    return 0;
}
