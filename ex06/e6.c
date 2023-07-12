#include <stdio.h>

int ft_strlen(char *str) {
    int count = 0;
    
    while (*str != '\0') {
        count++;
        str++;
    }
    
    return count;
}

int main() {
    char *string = "Hola, mundo!";
    int length = ft_strlen(string);
    
    printf("Longitud del string: %d\n", length);
    
    return 0;
}

