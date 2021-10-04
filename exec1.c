#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

main(){
    
    int i,;
    int vet[8], num, localizar = 0;
    for (i = 0; i < 8; i++)
    {
        printf("\nDigite um numero para o vetor[%d]: ", i+1);
        scanf("%i", &vet[i]);
    }

    printf("\n\n");
    printf("Digite qual valor você quer achar a posicao: ");
    scanf("%i", &num);

    for (int i = 0; i < 8; i++){
        if (vet[i] == num)
        {
            printf("\n O numero %i esta na posicao %i ", num, x+1);
            localizar = 1;
        }
    }

    if (localizar != 1)
        printf("\n iii, você nao inseriu esse numero :c");
    return (0);
}