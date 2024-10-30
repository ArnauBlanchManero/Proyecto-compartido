#include <stdio.h>
#include <stdlib.h>

float ingreso_datos(float datos, int num, char dia[10]){
		printf("Introduzca la temperatura del %s: ", dia);
		scanf("%f",&datos);
	
	return datos;
}

float temperatura_promedio(){
	
}

int main () {
	float tiempo[6];
	char dia_semana[7][11]={"lunes", "martes", "miércoles", "jueves", "viernes", "sábado", "domingo"};
	for (int i=0; i<7; i++){
		tiempo[i] = ingreso_datos(tiempo[i], i, dia_semana[i]);
	}
	float promedio = temperatura_promedio();
	return EXIT_SUCCESS;
}
	
