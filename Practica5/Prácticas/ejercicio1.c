#include <stdio.h>
#include <stdlib.h>

float ingreso_datos(char dia[11]){ // Obtenemos el día de la semana de longitud 11 porque es una cadena de caracteres.
	float datos; // El usuario introducirá el valor de la temperatura del día.
	printf("Introduzca la temperatura del %s: ", dia); 
	scanf("%f",&datos); // Se guarda el número que el usuario haya introducido
	return datos; // El return guardará el número en tiempo[i] del bucle de main.
}

int main () {
	float tiempo[6]; // Declaramos el array tiempo donde guardaremos el tiempo que ha hecho cada día.
	char dia_semana[7][11]={"lunes", "martes", "miércoles", "jueves", "viernes", "sábado", "domingo"}; // Declaramos un array que contenga los días de la semana (que a su vez también son arrays de caracteres).
	for (int i=0; i<7; i++){ // Vamos a hacer un bucle para pedir la temperatura de cada día. Este bucle se reperirá 7 veces.
		tiempo[i] = ingreso_datos(dia_semana[i]); // Guardamos en cada valor de tiempo lo que devuelva ingreso_datos(), que le pasamos el día de la semana correspondiente.
	}
	
	int acumulación = 0; // Declaramos el acumulador que se encarga de acumular la suma de las temperaturas introducidas por el usuario
	for ( int i = 0 ; i < 7 ; i++); { // Usamos i para realizar un bucle desde el valor 0 hasta el valor 7 incrementado de uno en uno esto nos servira para almacenar de manera consecutiva el valor de tiempo
		acumulación += tiempo[i]; // El valor de acumulacion se encarga de acumular los valores de tiempo desde el 0 hasta el 7 introducidos por el usuario
		int prom = acumulación / 7; // El valor de prom se encarga de almacenar el valor final de la suma de todos los tiempos y lo divide entre 7 para realizar el promedio
	printf("El promedio es:\n",prom) // Se imprime el valor del prom
	}
	return EXIT_SUCCESS;
}
	
