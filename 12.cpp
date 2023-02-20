#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int* fibonacci(int n) {
    int* fib = malloc(n * sizeof(int));
    fib[0] = 0;
    fib[1] = 1;

    int i;
    for (i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
        if (fib[i] >= n) break;
    }

    return fib;
}

int isPrime(int n) {
    if (n < 2) return 0;
    int i;
    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

void listFibonacciPrimes(int n) {
    int* fib = fibonacci(n);

    int i;
    for (i = 0; fib[i] < n; i++) {
        if (isPrime(fib[i])) printf("%d ", fib[i]);
    }

    printf("\n");
}

int main() {
    int n;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    printf("Cac so Fibonacci nho hon %d la so nguyen to: ", n);
    listFibonacciPrimes(n);

    return 0;
}

