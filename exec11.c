#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{

    float PR1[3], PR2[3], media[3];
    char nome[3][30], nome1[3][30], resultado[3][50];
    int i, y = 1;

    for (i = 0; i < 3; i++)
    {
        printf("Informe nome %d: ", i + 1);
        gets(nome[i]);

        printf("Informe nota %d do aluno %s: ", y, nome[i]);
        scanf("%f", &PR1[i]);
        gets(nome1[i]);
        y++;
        
        printf("Informe nota %d do aluno %s: ", y, nome[i]);
        scanf("%f", &PR2[i]);
        gets(nome1[i]);
        y = 1;
    }

    for (i = 0; i < 3; i++){
        media[i] = (PR1[i] + PR2[i]) / 2;
        if (media[i] > 5)
            strcpy(resultado[i], "Aprovado");
        else
            strcpy(resultado[i], "Reprovado");
    }

    printf("\n\nNome:\tNota1:\t\tNota2:\tMedia:\tResultado:");
  
    for (i = 0; i < 3; i++)
    {
        printf("\n%s\t%3.2f\t\t%3.2f\t%3.2f\t%s", nome[i], PR1[i], PR2[i], media[i], resultado[i]);
    }

    printf("\n\n");
    return 0;
}
