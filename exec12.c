#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

main()
{

    int i, vet[6];

    for (i = 1; i <= 6; i++)
    {
        printf("\tPreencha o vetor: ");
        scanf("%d", &vet[i]);
        printf("\n");
    }

    for (i = 1; i <= 6; i++)
    {
        printf("\tVetor %i: %d\n\n", i+1, vet[i]);
    }

    return 0;
}