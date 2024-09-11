#include <stdio.h>
#include <math.h>

int main() {
    int n, i, isPrime = 1;

    scanf("%d", &n);

    if (n <= 1) {
        printf("BUKAN\n");
        return 0;
    }

    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime) {
        printf("PRIMA\n");
    } else {
        printf("BUKAN\n");
    }

    return 0;
}

