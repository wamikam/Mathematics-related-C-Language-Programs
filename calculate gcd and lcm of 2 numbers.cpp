#include <stdio.h>

int main() {
    int n1, n2, i, gcd, lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    // Find the GCD
    for (i = 1; i <= n1 && i <= n2; ++i) {
        if (n1 % i == 0 && n2 % i == 0) {
            gcd = i;
        }
    }

    // Calculate the LCM using the formula: lcm = (n1 * n2) / gcd
    lcm = (n1 * n2) / gcd;

    printf("The GCD of %d and %d is %d\n", n1, n2, gcd);
    printf("The LCM of %d and %d is %d\n", n1, n2, lcm);

    return 0;
}
