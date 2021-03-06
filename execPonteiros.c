#include <stdio.h>

void minimax(int *v, int tam, int *min, int *max){
    int i;
    *min = *v;
    *max = *v;
     for(i = 1; i < tam; i++){
        if(*min > *(v + i))
            *min = *(v + i);
        if(*max < *(v + i))
            *max = *(v + i);
    }
}


int main(void){
    int v[5] = {26, 55, 89, 14, 77};
    int min, max;
    minimax(v, 5, &min, &max);
    printf("min: %d\n", min);
    printf("max: %d\n", max);
    return 0;
}

