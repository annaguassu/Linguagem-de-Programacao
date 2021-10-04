#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main(){
    int i, j, matriz[3][3];
    
    for(i=0;i<3;i++){
        for(j=0; j<3; j++){
            printf("O valor de [%i][%i]", i, j);
            scanf("%i", &matriz[j][i]);
        }
    }

    printf("\nOs números na matriz são:\n");
    for(i=0;i<3;i++){
        for(j=0; j<3; j++){
            printf("%i", matriz[i][j]);
            printf("\n");
        }
    }

    for(i=0;i<3;i++){
        for(j=0; j<3; j++){
            matriz[i][j]=matriz[i][j]*5;
        }
    }

    printf("\nOs valores multiplicados por 5\n");
    for(i=0;i<3;i++){
        for(j=0; j<3; j++){
            printf("%i", matriz[i][j]);
            printf("\n");
        }
    }
    return 0 ;
}