#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){

    int vet1[8], i, m5 = 0, between = 0, maior = 0;
    float soma = 0;

    for (i = 0; i <= 7; i++){
    printf("Informe um numero %d: ", i + 1);
    scanf("%d", &vet1[i]);
    printf("\n");
    }
        
    for (i = 0; i <= 7; i++){
    printf("\t%d", vet1[i]);
    printf("\n\n");
    }   

    for (i = 0; i <= 7; i++){
    soma = soma + vet1[i];

    if (vet1[i] % 5 == 0){
        m5++;
    }

    if (vet1[i] > 10 && vet1[i] < 30){
        between++;
    }

    if (vet1[i] > maior){
        maior = vet1[i];
    }
}

printf("\n A media do vetor e: %3.2f ", soma / 8);
printf("\n Multiplos de 5: %d ", m5);
printf("\n Entre 10 e 30: %d ", between);
printf("\n Maior numero: %d ", maior);

printf("\n");
return 0;

}