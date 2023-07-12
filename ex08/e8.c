
void ft_sort_int_tab(int *tab, int size) {
    int i = 0;
    int j, temp;

    while (i < size) {
        j = i + 1;
        while (j < size) {
            if (tab[i] > tab[j]) {
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
            j++;
        }
        i++;
    }
}

#include <stdio.h>
int main() {
    int array[] = {5, 2, 8, 1, 3};
    int size = sizeof(array) / sizeof(array[0]);
    int i;

    printf("Array antes de la ordenación:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    ft_sort_int_tab(array, size);

    printf("\nArray después de la ordenación:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}

