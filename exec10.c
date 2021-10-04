#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main(){

    char nomes[3][30], contE = 0, contA = 0, tam = 0;
    int i, m;

    for (i = 0; i < 3; i++)
    {
        printf("\n\nInforme o %do nome: ", i + 1);
        scanf("%s", &nomes[i]);
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        tam = strlen(nomes[i]);//define o tamanho da string

        for (m = 0; m <= tam - 1; m++)
        {
            if (nomes[i][m] == 'A' || nomes[i][m] == 'a')
                contA++;
            if (nomes[i][m] == 'E' || nomes[i][m] == 'e')
                contE++;
        }
    } 

    printf("\n os nomes possuem %d letras A, %d letras E ", contA, contE);
    printf("\n\n");

    return 0;
}