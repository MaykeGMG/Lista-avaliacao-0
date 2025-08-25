#include <stdio.h>

int main()
{
    int num;
    int produto = 1;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    if (num >= 0)
    {
        for (int i = num; i >= 1; i--)
        {
            produto = produto * i;
        }
        printf("%d", produto);
    }
    else
    {
        printf("Erro! você deve digitar um inteiro positivo.");
    }
    return 0;
}
