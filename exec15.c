#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){

    float vet[5], vetCuboubo[5];
    int i;
    
    for (i = 0; i < 5; i++){

        printf("\tDigite um numero: ");
        scanf("%f", &vet[i]);

        vetCubo[i] = pow(vet[i], 3);

        printf("\tNumeros ao cubo: %3.0f\n", vetCubo[i]);
        
        printf("\n");
    }

    return 0;
}