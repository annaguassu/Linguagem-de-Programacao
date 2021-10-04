#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    
    int vet1[8], x, cont = 0;

    for (x = 0; x <= 7; x++)
    {
        printf("\nPreencha o vetor com um valor: ");
        scanf("%d", &vet1[x]);

        if (vet1[x] > 30)
        {
            cont++;
        }
    }

    for (x = 0; x <= 7; x++)
    {
        printf("\t%d", vet1[x]);
    }
    
    printf("\n\n %d Numeros sao maiores que 30", cont);
    return 0;
}