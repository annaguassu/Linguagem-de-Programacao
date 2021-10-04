#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{

    int x, vet[11], t = 10;
    
    printf("vetor de 10 a 20\n\n");
    for (x = 0; x < 11; x++)
    {
        vet[x] = t;
        t++;
    }

    for (x = 0; x < 11; x++){
        printf("%d\t\n", vet[x]);
    }
    
    return 0;
}