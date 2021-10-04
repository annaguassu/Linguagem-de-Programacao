#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portugues");

    int i, j, matriz[3][3], soma=0;
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("\t\nMatriz[%i][%i] = ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }

    printf("Os valores da matriz são:");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%i", matriz[i][j]);
            printf("\n");
        }
    }

     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(matriz[i][j] % 2 == 0){
                soma = soma + matriz[i][j];
            }
        }
    }
    printf("A soma dos numeros pares é : %d", soma);
        return 0;
}