#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int i, j, matriz[5][5], par = 1, impar = -1;

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("Matriz [%i][%i] = ",i, j );
            scanf("%i", &matriz[i][j]);
                if(matriz[i][j] % 2 == 0){
                    matriz[i][j] = par;
                }else{
                    matriz[i][j] = impar;
                }
            }
        }
        
        printf("\t\nValor após a substituição\n\n");
            for(i=0;i<5;i++){
                for(j=0;j<5;j++){
                    printf("Matriz[%d][%d] = %d", i, j, matriz[i][j] );
                    printf("\n");
                }
    }
    return 0;
}