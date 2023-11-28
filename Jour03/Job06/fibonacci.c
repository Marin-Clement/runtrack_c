#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(int argc, char *argv[]) {
    if (argc > 1) {
        int num = atoi(argv[1]);
        int result = fibonacci(num);
        printf("Fibonacci of %d is %d\n", num, result);
    }
    return 0;
}
