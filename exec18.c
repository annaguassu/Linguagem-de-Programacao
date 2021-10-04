#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    
    int i, y, vet[11], t = 10;

    for (i = 0; i < 11; i++){
        vet[i] = t;
        t++;
    }

    printf("\n\n");

    for (y = 1; y < 11; y = y + 2){
        printf("%d\t", vet[y]);
    }
    
    return 0;
}
