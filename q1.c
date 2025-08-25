#include <stdio.h>

int main()
{
    int num;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);
    if (num >= 0)
    {
        for (int i = 1; i <= num; i++)
        {
            printf("%d ", i);
        }
    }
    else
    {
        printf("Erro! você deve digitar um inteiro positivo.");
    }
    return 0;
}
