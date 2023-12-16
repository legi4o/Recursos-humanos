#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    float salariototal = 1500;
    float horastrabalhadas;

    setlocale(LC_ALL, "");

    printf(" Digite o total de horas trabalhadas: ");
    scanf("%f", &horastrabalhadas);

    printf("\n");

    if (horastrabalhadas < 220)
    {
        salariototal -= 200;
        printf(" O SALÁRIO A RECEBER SERÁ DE %.1f REAIS \n", salariototal);
    }
    else if (horastrabalhadas >= 220)
    {
        salariototal = 1500;
        printf(" O SALÁRIO A RECEBER SERÁ DE %.1f REAIS \n", salariototal);
    }

    return 0;
}
