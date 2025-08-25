#include <stdio.h>

int main()
{
    int numeros[5];
    int soma = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &numeros[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        soma = soma + numeros[i];
    }
    printf("%d", soma);
    return 0;
}
