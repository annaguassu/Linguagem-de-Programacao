#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portugues");

    int i, j, mat[3][3], par = 0, impar = 0;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("\t\nMatriz [%d] [%d] = \n", i, j);
            scanf("%i", &mat[i][j]);
        }
    }

    printf("\t\nOs números na matriz são:");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%i", mat[i][j]);
            printf("\n");
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
           if(mat[i][j] % 2 == 0){
               par++;              
           }else{
               impar++;
           }
        }
    }

    printf("\t\nTem %i números impares.", impar);
    printf("\t\nTem %i números pares.", par);
    return 0;
}