#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    float valor[2][2], soma = 0;
    int i,j;
    
    printf("\t\nDigite os valores da matriz:\n");
    
    for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        scanf("%f", &valor[i][j]);
    }}

    for(i=0; i<2;i++){
    for(j=0; j<2;j++){
        soma = soma + valor[i][j];
    }}

        printf("Os valores são: \n");

    for(i=0;i<2;i++){
    for(j=0;j<2;j++)
    {
        printf("%.1f\n",valor[i][j]);
    }}

        printf("A soma é = %.1f\n",soma);
    
 return 0; 
    }

