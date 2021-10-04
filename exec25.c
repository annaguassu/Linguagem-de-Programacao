#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main()
{
    
    int i, y, vet[11], t = 10;
    
    for (i = 0; i < 11; i++)
    {
        vet[i] = t;
        t++;
    }

    printf("\n\n");
    
    for (i = 10; i >= 0; i = i - 2){
        printf("%d\t", vet[i]);
    }
    
    printf("\n\n");
    
    for (y = 1; y < 11; y = y + 2){
        printf("%d\t", vet[y]);
    }
    
    return 0;
}