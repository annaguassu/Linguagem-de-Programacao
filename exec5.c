#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main()
{

    char nome[3][20];
    int i;

    for (i = 0; i <= 2; i++)
    {
        printf("\n[%d] Digite o %do nome: (max: 20 caracteres)", i, (i + 1));
        scanf("%s", &nome[i]);
    }
    printf("Os nomes digitados foram:");
    for (i = 0; i <= 2; i++)
    {
        printf("\n %s", nome[i], i);
    }

    return 0;
}