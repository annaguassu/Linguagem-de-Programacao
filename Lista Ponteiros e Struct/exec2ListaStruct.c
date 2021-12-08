#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[30];
    float altura;
    float peso;
    float n2;
    long long cpf;
    char sexo;
    float IMC;
} Pessoas;

float IMC(Pessoas p){
  p.IMC = p.peso/ (p.altura * p.altura);
    
};

int main(){
    Pessoas pessoa[3];
    
    for(int i= 0; i<3; i++){
        
        printf("\nDigite o nome: ");
        scanf("%s", &pessoa[i].nome);
        printf("Digite o sexo: ");
        scanf("%s", &pessoa[i].sexo);
        printf("Digite a altura: ");
        scanf("%f", &pessoa[i].altura);
        printf("Digite o peso: ");
        scanf("%f", &pessoa[i].peso);
        printf("Digite o CPF: ");
        scanf("%Lu", &pessoa[i].cpf);
        
    }
    
    long long search;
    printf("\n\tPara localizar o cadastro e seu IMC, digite o CPF do usuario: \n\n");
    scanf("%Lu", &search);
    
    for(int i=0; i<3; i++){
        if(search == pessoa[i].cpf){
            
            float imc = pessoa[i].peso/(pessoa[i].altura * pessoa[i].altura);
            
            printf("\nNome: %s", pessoa[i].nome);
            printf("\nSexo: %s", pessoa[i].sexo);
            printf("\nIMC: %1.2f", imc);
            
            break;
        }
    }
    
    getchar();
    return 0;
}
