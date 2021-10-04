#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main()
{

    int x, vet[11], t = 10;
    for (x = 0; x < 11; x++)
    {
        vet[x] = t;
        t++;
    }
    printf("\n\n");
   
   for (x = 10; x >= 0; x = x - 2)
        printf("Elementos Pares: %d\t", vet[x]);
    
    printf("\n");
    return (0);
}