#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[30];
    int matricula;
    float n1;
    float n2;
    float media;
} Alunos;

float media(Alunos x){
  x.media = ((x.n1 + x.n2)/ 2);
    
};

int main(){
    Alunos aluno[2];
    
    for(int i= 0; i<2; i++){
        printf("\nDigite o nome do aluno %d: ", i+1);
        scanf("%s", &aluno[i].nome);
        printf("Digite o código da matricula do aluno %d: ", i+1);
        scanf("%d", &aluno[i].matricula);
        printf("Digite a nota 1 do aluno %d: ", i+1);
        scanf("%f", &aluno[i].n1);
        printf("Digite a nota 2 do aluno %d: ", i+1);
        scanf("%f", &aluno[i].n2);
    }
    
    for(int i=0; i<2; i++){
        printf("\n\n\tAs notas do aluno %d: \n %s \n Nota 1: %.1f\n Nota 2: %.1f\n Media: %.1f\n\n", aluno[i].matricula, aluno[i].nome, aluno[i].n1, aluno[i].n2, media(aluno[i]));
    }
}
