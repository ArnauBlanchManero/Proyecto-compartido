#include <stdio.h>
#include <stdlib.h>

float ingreso_datos(char dia[11]){ // Obtenemos el día de la semana de longitud 11 porque es una cadena de caracteres.
	float datos; // El usuario introducirá el valor de la temperatura del día.
	printf("Introduzca la temperatura del %s: ", dia); 
	scanf("%f",&datos); // Se guarda el número que el usuario haya introducido
	return datos; // El return guardará el número en tiempo[i] del bucle de main.
}

float temperatura_maxima(float temp, float max){ // Para saber la temperatura máxima, 
	if (temp >= max)                     // necesitamos comparar la temperatra de cada día y 
		max = temp;                  // guardar en max el valor que sea mayor del que teníamos guardado.
	return max;
}

float temperatura_minima(float temp, float min){ // Para saber la temperatura mínima, 
	if (temp <= min)                     // necesitamos comparar la temperatra de cada día y 
		min = temp;                  // guardar en min el valor que sea menor del que teníamos guardado.
	return min;
}

int main () {
	float tiempo[7] = {23, 12.5, 201, 24, 15, 20, -25.2}; // No voy a pedir las tenperaturas
	char dia_semana[7][11]={"lunes", "martes", "miércoles", "jueves", "viernes", "sábado", "domingo"}; // Declaramos un array que contenga los días de la semana (que a su vez también son arrays de caracteres).
	for (int i=0; i<7; i++){ // Vamos a hacer un bucle para pedir la temperatura de cada día. Este bucle se reperirá 7 veces.
		printf("Temperatura del %s: %f\n", dia_semana[i], tiempo[i]); // Antes pedia al usuario que pusiera los datos que quisera con la funcion ingreso_datos()
	}
	
	float acumulación = 0; // Declaramos el acumulador que se encarga de acumular la suma de las temperaturas introducidas por el usuario.
	for ( int i = 0 ; i < 7 ; i++) { // Usamos i para realizar un bucle desde el valor 0 hasta el valor 7 incrementado de uno en uno esto nos servira para almacenar de manera consecutiva el valor de tiempo.
	acumulación += tiempo[i]; // El valor de acumulacion se encarga de acumular los valores de tiempo desde el 0 hasta el 7 introducidos por el usuario.
	}				 // El valor de prom se encarga de almacenar el valor final de la suma de todos los tiempos y lo divide entre 7 para realizar el promedio.
	float prom = acumulación / 7;
	printf("Temperatura promedio de la semana: %.1fºC\n",prom); // Se imprime el valor del prom
	
	float temperatura; // Declaramos temperatura para guardar la temperatura de cada día en cada vuelta del bucle.
	float maxima = tiempo[0]; // Inicializamos la vriale en la temperatura del lunes.
	for (int i=0; i<7; i++){
		temperatura = tiempo[i];
		maxima = temperatura_maxima(temperatura, maxima);
	}
	printf("Temperatura máxima: %.1fºC ", maxima);
	for (int i=0; i<7; i++){
		if (maxima == tiempo[i]){ // Para buscar el día de la semana que tiene la temperatura máxima
			printf("el día %s\n", dia_semana[i]);
			break;
		}
	}
	// Para la temperatura mínima es igual
	float minima = tiempo[0]; // Inicializamos la vriale en la temperatura del lunes.
	for (int i=0; i<7; i++){
		temperatura = tiempo[i];
		minima = temperatura_minima(temperatura, minima);
	}
	printf("Temperatura mínima: %.1fºC ", minima);
	for (int i=0; i<7; i++){
		if (minima == tiempo[i]){ // Para buscar el día de la semana que tiene la temperatura mínima
			printf("el día %s\n", dia_semana[i]);
			break;
		}
	}
	
	// Contar cuantos días son superior al promedio
	int contador = 0;
	for (int i=0; i<7; i++){
		if(tiempo[i]>prom)
			contador++;
	}
	printf("Número de días con temperaturas superiores la promedio: %d\n", contador);

	// Imprimir los días por debajo del promedio
	printf("Días con temperaturas por debajo del promedio:\n");
	for (int i=0; i<7; i++){
		if(tiempo[i]<prom)
			printf("%s: %.1lfºC\n", dia_semana[i], tiempo[i]);
	}
	
	printf("Parte del examen sin los datos atípicos:\n");
	char atipico[7];
	int dias_consi = 0;
	for (int i = 0; i <= 6; i++){
		if(tiempo[i] < -10 || tiempo[i] > 45){
			atipico[i] = 'e'; // Eliminada
		} else {
			atipico[i] = 'c'; // Considerada
			dias_consi ++;
		}
		printf("La temperatura del %s ha sido %c\n", dia_semana[i], atipico[i]);
	}
	printf("Las nuevas temperaturas sin las temperaturas eliminadas: \n");
	for(int i = 0; i <= 6; i++){
		if(atipico[i] == 'c'){ // Sólo imprime las consideradas
			printf("Temperatura del %s: %.1lf\n", dia_semana[i], tiempo[i]);
		}
	}
	printf("El nuevo promedio: ");
	double prom_considerada = 0;
	for(int i = 0; i <= dias_consi; i++){
		if(atipico[i] == 'c')
			prom_considerada += tiempo[i];
	}
	printf("%lf\n", prom_considerada/dias_consi);
	return EXIT_SUCCESS;
}
	
