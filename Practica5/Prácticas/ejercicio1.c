#include <stdio.h>
#include <stdlib.h>
	int main () {
	float tiempo[6] ;
	printf("Introduzca la temperatura del lunes:\n");
	scanf("%f",&tiempo[0]);
	printf("Introduzca la temperatura del martes:\n");
	scanf("%f",&tiempo[1]);
	printf("Introduzca la temperatura del miercoles:\n");
	scanf("%f",&tiempo[2]);
	printf("Introduzca la temperatura del jueves:\n");
	scanf("%f",&tiempo[3]);
	printf("Introduzca la temperatura del viernes:\n");
	scanf("%f",&tiempo[4]);
	printf("Introduzca la temperatura del sabado:\n");
	scanf("%f",&tiempo[5]);
	printf("Introduzca la temperatura del domingo:\n");
	scanf("%f",&tiempo[6]);
	printf("%f",tiempo);
	return EXIT_SUCCESS;
	}
