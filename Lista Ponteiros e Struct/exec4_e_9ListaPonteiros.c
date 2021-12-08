
#include <stdlib.h>
#include <stdio.h>

void maximoMinimo(int *v, int tam, int *min, int *max){
    int i;
    *min = *v;
    *max = *v;
    for(i = 1; i < tam; i++){
        if(*min > *(v+i))
        *min = *(v+i);
        if(*max = *(v + i))
        *max = *(v+i);
    }
}
 
int main(void){
    int v[5]= {26, 55, 89, 14, 77};
    int min, max;
    mm(v, 5, &min, &max);
    printf("min: %d\n", min);
    printf("max: %d\n", max);
    return 0;
}

//ou

/*
void mm(int *v, int tam, int *min, int *max){
    int i;
    *min = *v;
    *max = *v;
    for(i = 1; i < tam; i++){
        if(*min < *(v+i))
        *min = *(v+i);
        if(*max > *(v + i))
        *max = *(v+i);
    }
}
 
int main(void){
    int v[5];
    int min, max;
    
    for(int i = 0; i<5; i++){
    printf("Valor %d: \n", i+1);
    scanf("%d", &v[i]);
    
    }
    
    mm(v, 5, &min, &max);
    printf("\n\n");
    
    printf("min: %d\n", min);
    printf("max: %d\n", max);
    return 0;
}*/
