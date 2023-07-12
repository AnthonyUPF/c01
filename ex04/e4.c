
void ft_ultimate_div_mod(int *a, int *b) {
    int temp = *a;
    *a = temp / *b;
    *b = temp % *b;
}

#include <stdio.h>
int main() {
    int a = 10;
    int b = 3;

    printf("Antes de la función:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    ft_ultimate_div_mod(&a, &b);

    printf("Después de la función:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}

