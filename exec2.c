#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main(){
    printf("preencher o vetor com numeros pares de 2 a 20");
    
    int i, y = 0, vet[10];
    
    for(i=0; i<=9; i++){
        vet[i] = y+2;
        y = y + 2;
    }

    for(i=0; i<=9; i++){
        printf("\n%i",vet[i]);
    }
    return 0;
}