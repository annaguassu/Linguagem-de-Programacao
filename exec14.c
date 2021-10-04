#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

main(){

    int x;
    float vet[5], vetcubo[5];
    
    for (x = 0; x < 5; x++){

        printf("Digite um numero: ");
        scanf("%f", &vet[x]);
        printf("\n");
        vetcubo[x] = pow(vet[x], 3);
    }

    for (x = 0; x < 5; x++){
        printf("%3.2f\t", vetcubo[x]);
    }
    
    return 0;
}