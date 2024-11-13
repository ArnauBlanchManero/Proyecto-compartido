#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char palabra[40][20] = {"casa", "árbol", "perro", "gato", "auto", "bicicleta", "sol", "luna", "estrella", "montaña", "río", "mar", "tierra", "agua", "aire", "metal", "bosque", "flor", "lluvia", "trueno", "viento", "tormenta", "nieve", "campo", "ciudad", "puente", "edificio", "escalera", "pintura", "escultura"};
    int tiene;
    printf("Aquí están todas las palabras:\n");
    for(int i = 0; i < 30; i++){ // Antes pedía al usuario que insertara las palabras que quisisera, ahora imprimo las 30 palabras que he definido
        printf("- %s\n", palabra[i]);
    }
    printf("Ahora voy a imprimir las palabras que tienen la letra 'e'\n");
    for(int i = 0; i < 30; i++){
    tiene = 0; // Es importante darle el valor 0 dentro del bucle para que en cada palabra diferente se resetee
        for(int j = 0; j < strlen(palabra[i]); j++){ //Este bucle se repetirá tantas veces como letras tenga la palabra
            if(palabra[i][j] == 'e'){ // Aquí he cambiado 'a' por 'e'
                tiene = 1; // Sólo se igualará a 1 si la palabra contiene la letra e
                continue;
            }
        }
        if(tiene == 1) // Aquí he cambiado 0 por 1 para ver cuales sí tienen e
            printf("- %s\n", palabra[i]);
    }

    printf("Ahora voy a imprimir las palabras que tienen la letra 'g'\n");
    for(int i = 0; i < 30; i++){
    tiene = 0; // Es importante darle el valor 0 dentro del bucle para que en cada palabra diferente se resetee
        for(int j = 0; j < strlen(palabra[i]); j++){ //Este bucle se repetirá tantas veces como letras tenga la palabra
            if(palabra[i][j] == 'g'){ // Aquí he cambiado 'e' por 'g'
                tiene = 1; // Sólo se igualará a 1 si la palabra contiene la letra g
                continue;
            }
        }
        if(tiene == 1) // Aquí he cambiado 0 por 1 para ver cuales sí tienen e
            printf("- %s\n", palabra[i]);
    }

    printf("Ahora voy a imprimir las palabras que tienen la letra 'g'\n");
    for(int i = 0; i < 30; i++){
    tiene = 0; // Es importante darle el valor 0 dentro del bucle para que en cada palabra diferente se resetee
        for(int j = 0; j < strlen(palabra[i]); j++){ //Este bucle se repetirá tantas veces como letras tenga la palabra
            if(palabra[i][j] == 'e' || palabra[i][j] == 'g'){ // Aquí he añadido que entre si tiene 'e' o 'g'
                tiene = 1; // Sólo se igualará a 1 si la palabra contiene la letra e o g
                continue;
            }
        }
        if(tiene == 1) // Aquí he cambiado 0 por 1 para ver cuales sí tienen e
            printf("- %s\n", palabra[i]);
    }
    return 0;
}
