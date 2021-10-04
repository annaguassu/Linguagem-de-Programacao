#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main()
{

    int i, y;
    char nome[3][20], contA = 0, contE = 0, tam = 0;

    for (i = 0; i < 3; i++)
    {
        printf("Digite o %do nome!\n", i+1);
        scanf("%c",&nome[i]);
    }

    for (i = 0; i < 3; i++){

        tam = strlen(nome[i]);
        if (nome[i][y] == 'A' || nome[i][y] == 'a')
        {
            contA++;
        }
        if (nome[i][y] == 'E' || nome[i][y] == 'e')
        {
            contE++;
        }
    }

    printf("\n\nNos nomes digitados tem %i letras A", contA);
    printf("\n\nNos nomes digitados tem %i letras E", contE);

    return 0;
}