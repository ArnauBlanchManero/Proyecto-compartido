#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char palabra[5][20];
    int tiene;
    printf("Escribe una lista de palabras:\n");
    for(int i = 0; i < 5; i++){
        printf("- ");
        scanf(" %s", palabra[i]);
    }
    printf("Ahora voy a imprimir las palabras que no tienen la letra 'a'\n");
    for(int i = 0; i < 5; i++){
    tiene = 0;
        for(int j = 0; j < strlen(palabra[i]); j++){
            if(palabra[i][j] == 'a'){
                tiene = 1;
                continue;
            }
        }
        if(tiene == 0)
            printf("- %s\n", palabra[i]);
    }
    return 0;
}
