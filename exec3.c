#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main(){
    
    int i, y = 0;
    int	vet[10], vet2[10];
    
    for(i=0; i<=9; i++){
        vet[i] = y+2;
        y = y + 2;
    }
        printf("\tprimeiro vetor: \n");
    for(i=0; i<=9; i++){
        printf("\t\n%i ",vet[i]);
    }
        printf("\tsegundo vetor: \n");
     for(i=0; i<=9; i++){
        vet2[i] = i + 10;
    }

    for(i=0; i<=9; i++){
        printf("\t\n%i",vet2[i]);
    }
        
    for(i=0; i<=9; i++){
        
        printf("\t\n\n a soma do primeiro vetor na posição %i e do segundo vetor na posição %i eh %i",vet[i], vet2[i], vet[i] + vet2[i]);
    }

    return 0;
}