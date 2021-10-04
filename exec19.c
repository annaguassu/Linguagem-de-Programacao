#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

main(){

    int x;
    float vetcubo[5], vet[5];
    
    for (x = 0; x < 5; x++){
        printf("Digite um numero: ");
        scanf("%f", &vet[x]);
        printf("\n");

        vetcubo[x] = pow(vet[x], 3);
    }

    for (x = 0; x < 5; x++){
        printf("O cubo do %do numero digitado eh: %3.2f\t\n\n", x, vetcubo[x]);
    }
    printf("\n");
    return 0;
}