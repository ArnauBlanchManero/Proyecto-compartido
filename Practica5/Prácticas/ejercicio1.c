#include <stdio.h>
#include <stdlib.h>

float ingreso_datos(){

	printf("Introduzca la temperatura del lunes:\n");
	scanf("%f",&tiempo[0]);
}

float temperatura_promedio(){
	
}

int main () {
	float tiempo[6] = ingreso_datos();
	float promedio = temperatura_promedio();
	return EXIT_SUCCESS;
	}
	
