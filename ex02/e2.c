#include <stdio.h>

void ft_swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1 = 5;
    int num2 = 10;

    printf("Antes del intercambio: num1 = %d, num2 = %d\n", num1, num2);

    ft_swap(&num1, &num2);

    printf("Después del intercambio: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

