#include <stdlib.h>
#include <stdio.h>

char *strcopy(char *str) {
int n, i;
char *nova;
for (n = 0; str[n] != '\0'; n++) {}
nova = malloc(n * sizeof(char));
for (i = 0; i <= n; i++) {
nova[i] = str[i];
}
return nova;
}

int main(){
    char *string = NULL;
    
    string = strcopy("testando a funcao de copia de string.");
    printf("%s\n", string);
    
    free(string);
    
    return 0;
}
