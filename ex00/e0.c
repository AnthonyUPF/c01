#include <stdio.h>

void ft_ft(int *nbr) {
    *nbr = 42;
}

int main() {
    int number;
    int *ptr = &number;

    ft_ft(ptr);

    printf("El valor de number es: %d\n", number);

    return 0;
}

