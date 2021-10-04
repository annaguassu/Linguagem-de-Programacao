#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int li, col, contador = 0, matriz[6][6];

    for(li=0;li<6;li++){
        for(j=0;j<6;j++){
            
            printf("O valor de [%i][%i] =", i+1, j+1);
            
            scanf("%i", &matriz[i][j]);

                 if(matriz[i][j] > 10){
                     cont++;
            }
        }
    }  
    printf("\nOs número maiores que 10 são: %i", cont);
    return 0;
}