#include <stdio.h>
#include <stdlib.h>

float ingreso_datos(char dia[11]){ // Obtenemos el día de la semana de longitud 11 porque es una cadena de caracteres.
	float datos; // El usuario introducirá el valor de la temperatura del día.
	printf("Introduzca la temperatura del %s: ", dia); 
	scanf("%f",&datos); // Se guarda el número que el usuario haya introducido
	return datos; // El return guardará el número en tiempo[i] del bucle de main.
}

float temperatura_maxima(int ant, int max){
	if (ant >= max)
		max = ant;
	return max;
}

float temperatura_promedio(float tiempo[]){
	int acumulación = 0;
	for ( i = tiempo[0]; i < tiempo[7] ; i++); {
		acumulación += tiempo[i];
	}
}

int main () {
	float tiempo[6]; // Declaramos el array tiempo donde guardaremos el tiempo que ha hecho cada día.
	char dia_semana[7][11]={"lunes", "martes", "miércoles", "jueves", "viernes", "sábado", "domingo"}; // Declaramos un array que contenga los días de la semana (que a su vez también son arrays de caracteres).
	for (int i=0; i<7; i++){ // Vamos a hacer un bucle para pedir la temperatura de cada día. Este bucle se reperirá 7 veces.
		tiempo[i] = ingreso_datos(dia_semana[i]); // Guardamos en cada valor de tiempo lo que devuelva ingreso_datos(), que le pasamos el día de la semana correspondiente.
	}
	float promedio = temperatura_promedio();
	
	float anterior;
	float maxima = tiempo[0];
	for (int i=0; i<7; i++){
		anterior = tiempo[i];
		maxima = temperatura_maxima(anterior, maxima);
	}
	printf("La temperatura máxima es %.1fºC\n", maxima);
	return EXIT_SUCCESS;
}
	
