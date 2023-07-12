
void ft_rev_int_tab(int *tab, int size) {
    int temp;
    int start = 0;
    int end = size - 1;

    while (start < end) {
        temp = tab[start];
        tab[start] = tab[end];
        tab[end] = temp;

        start++;
        end--;
    }
}

#include <stdio.h>
int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(int);

    printf("Array original: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    ft_rev_int_tab(array, size);

    printf("\nArray invertido: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}

