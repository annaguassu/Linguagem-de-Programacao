#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portugues");

    int vet[8], i, cont = 0, soma = 0, somaTotal = 0;
    
    for (i = 0; i <= 7; i++)
    {
        printf("\nDigite um valor: ");
        scanf("%d", &vet[i]);
        if (vet[i] > 30)
        {
            cont++;
            soma = soma + vet[i];
        }
    }

    for (i = 0; i <= 7; i++){
        printf("\t%d", vet[i]);
        printf("\n\n A Soma dos numeros maiores que 30 e = %d", soma);
    }
    
    printf("\n\n %d Numeros sao maiores que 30", cont);
    

    for (i = 0; i <= 7; i++){
        somaTotal = somaTotal + vet[i];
    }

    printf("\n\n A Soma dos numeros digitados e = %d", somaTotal);
    
    return (0);
}