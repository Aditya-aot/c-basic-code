#include <stdio.h>

int fac() {
    int num, factorial = 1, i = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (i <= num) {
        factorial *= i;
        i++;
    }
    printf("Factorial of %d = %d\n", num, factorial);
    return 0;
}
