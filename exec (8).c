#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int i, j, mat1[3][3], mat2[3][3], soma[3][3];

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){ 
            printf("\t\n Preencha a matriz 1 [%i][%i] = ", i, j);
            scanf("%i", &mat1[i][j]);
        }
    }

    printf("\t\nOs numero da matriz 1 sao:");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){ 
            printf("\t\n%i ", mat1[i][j]);
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){ 
            printf("\t\n Preencha a Matriz 2 [%i][%i] = ", i, j);
            scanf("%i", &mat2[i][j]);
        }
    }

    printf("\t\nOs numero da matriz 2 sao:");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){ 
            printf("\t\n%i ", mat2[i][j]);
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){ 
            soma[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printf("\t\nA soma de ambas as matrizes e: ");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){ 
            printf("\n%i", soma[i][j]);
        }
    }
    
    return 0;
}