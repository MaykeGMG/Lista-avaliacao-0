#include <stdio.h>

int main()
{
    int eh_primo = 0;
    int num, n;
    printf("Digite um número: ");
    scanf("%d", &num);
    int raiz = sqrt(num);
    if (num <= 1){
        printf("Não é primo.");
    }
    else if(num == 2){
        eh_primo = 1;
    }
    else if(num > 2){
        for (int i = 2; i <= raiz; i++){
            n = num;
            if ((n % i) == 0)
            {
                eh_primo = 0;
                break;
            }
            else
            {
                eh_primo = 1;
            }
        }
    }

    if (eh_primo == 1){
        printf("é primo");
    }
    else if(eh_primo == 0){
        printf("não é primo");
    }
    return 0;
}
