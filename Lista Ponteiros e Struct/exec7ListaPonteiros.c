

#include <stdio.h>

void troca (int *i, int *j) {
    
    int temp; 
    temp = *i;
    *i = *j; 
    *j = temp;
}

 
int main(void){
int n1, n2;
 printf("Valor 1: ");
 scanf("%d", &n1);
 printf("Valor 2: ");
 scanf("%d", &n2);
 
 printf("Antes: %d e %d\n", n1, n2);
 troca(&n1,&n2);
 printf("Depois: %d e %d\n", n1, n2);
 

 return 0;

}
