#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{


setlocale(LC_ALL, "");

int anonascimento;
int tempoTrabalho;
int idade;

printf(" Digite o ano de nascimento: ");
scanf("%d", &anonascimento);

printf(" Digite o tempo de trabalho: ");
scanf("%d", &tempoTrabalho);

idade = 2023 - anonascimento;

if (idade >= 65 || tempoTrabalho >= 35)
{
    printf(" PARABÊNS! VOCÊ ESTA APTO PARA SE APOSENTAR!");
}
else
{
    printf(" VOCÊ NÃO ESTA APTO PARA SE APOSENTAR");
}








    return 0;
}