#include <stdio.h>
#include <math.h>

int main() {
    int n, d, c = 0, s = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    d = n;

    // Calculate the number of digits
    while (d != 0) {
        d = d / 10;
        c++;
    }

    d = n;

    // Calculate the sum of the digits raised to the power of c
    while (d != 0) {
        s += pow(d % 10, c);
        d = d / 10;
    }

    if (s == n) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
