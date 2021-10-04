#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main()
{
    int vet1[5], vet2[5], num, cont = 0, i;

    printf("\n");
    printf("\n Primeiro Vetor\n\n");

    for (i = 0; i <= 4; i++)
    {
        
        printf("\t[%d] Preencha o primeiro vetor: ", i+1);
        scanf("%d", &num);
        vet1[i] = num;
    }

    printf("\n\n");
    printf("\nVetor 2");

    for (i = 0; i <= 4; i++)
    {
        printf("\t[%d] Digite um valor: ", i+1);
        scanf("%d", &num);
        vet2[i] = num;
    }

    printf("\n\n");
    printf("\t\nVetor 1\n\n");
    
    for (i = 0; i <= 4; i++)
        printf("\t%d ", vet1[i]);
    printf("\n");
    printf("\t\nVetor 2\n\n");

    for (i = 0; i <= 4; i++)
        printf("\t%d ", vet2[i]);
    printf("\n\n");
    printf("\t\nSoma:\n\n");
    
    for (i = 0; i <= 4; i++)
        printf("\t%d ", vet1[i] + vet2[i]);
   
    return 0;
}