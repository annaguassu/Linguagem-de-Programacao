#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

int main()
{

    int i;
    float vetcubo[5], vet[5];

    for (i = 0; i < 5; i++){
        printf("Digite um numero: ");
        scanf("%f", &vet[i]);
        printf("\n");
        vetcubo[i] = pow(vet[i], 3);
    }

    for (i = 0; i < 5; i++){
        printf("O cubo do numero %f eh %3.2f\t", vet[i], vetcubo[i]);
    }

    printf("\n");
    return 0;
}