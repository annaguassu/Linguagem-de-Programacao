#include <stdio.h>
#include <stdib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int i, j, soma = 0, soma_diagonal = 0;
    int valor[3][3];

    printf("\t\nDigite os valores: \n");
    
    for(i=0; i < 3; i++){
        for(j=0; j < 3; j++ ){

            scanf("%i", &valor[i][j]);

            soma = soma + valor[i][j];
            
        }
    }

    printf("\t\n\nA soma dos valores é: %i\n", soma);

    soma_diagonal = valor[0][0] + valor[1][1] + valor[2][2];
    
    printf("A soma da diagonal principal é: %i", soma_diagonal);

    return 0;
}