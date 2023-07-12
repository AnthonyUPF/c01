#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod) {
    *div = a / b;
    *mod = a % b;
}

int main() {
    int a = 13;
    int b = 5;
    int division, modulo;

    ft_div_mod(a, b, &division, &modulo);

    printf("División: %d\n", division);
    printf("Resto: %d\n", modulo);

    return 0;
}

