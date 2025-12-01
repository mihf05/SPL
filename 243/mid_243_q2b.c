#include <stdio.h>

int main() {
    int n, isArmstrong = 0, sum = 0, temp, digits = 0;
    scanf("%d", &n);
    temp = n;
    while(temp > 0) {
        digits++;
        temp /= 10;
    }
    temp = n;
    while(temp > 0) {
        int digit = temp % 10, power = 1;
        for(int i = 0; i < digits; i++) power *= digit;
        sum += power;
        temp /= 10;
    }
    isArmstrong = (sum == n);
    printf("%s\n", isArmstrong ? "Armstrong" : "Not Armstrong");
    return 0;
}
