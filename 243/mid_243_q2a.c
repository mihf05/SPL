#include <stdio.h>

int main() {
    int n, isPerfect = 0, sum = 0;
    scanf("%d", &n);
    for(int i = 1; i < n; i++) if(n % i == 0) sum += i;
    isPerfect = (sum == n);
    printf("%s\n", isPerfect ? "Perfect" : "Not Perfect");
    return 0;
}
