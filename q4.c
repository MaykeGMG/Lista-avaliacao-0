#include <stdio.h>

int main()
{
    float temp_C, temp_F, t;
    char escala;
    printf("Digite a temeratura e a escala ('C' para celsius, 'F' para fahrenheit): ");
    scanf("%f %c", &t, &escala);

    if (escala == 'C')
    {
        temp_C = t;
        temp_F = (t * 1.8) + 32;
    }
    else if (escala = 'F')
    {
        temp_F = t;
        temp_C = (temp_F - 32) / 1.8;
    }

    printf("Celsius: %2.f; Fahrenheit: %2.f", temp_C, temp_F);
    return 0;
}
