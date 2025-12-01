#include <stdio.h>

int main() {
    int n, isPalin, temp, rev = 0;
    scanf("%d", &n);
    temp = n;
    while(temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    isPalin = (n == rev);
    printf("%s\n", isPalin ? "Palindrome" : "Not Palindrome");
    return 0;
}
