#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int valor1,valor2;

    printf("digite dois valores:");
    scanf("%d%d",&valor1, &valor2);

    system("clear");

    printf("primeiro valor digitado multiplicado por 4 é: %d\nsegundo valor digitado multiplicado por 3 é: %d",valor1*4,valor2*3);

}