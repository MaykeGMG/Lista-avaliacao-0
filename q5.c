#include <stdio.h>

int main()
{
    char string[201] = {0};
    scanf(" %[^\n]", string);
    int tam = strlen(string);
    printf("%d", tam);
    return 0;
}
