#include <stdio.h>
#include <stdlib.h>

#define NOTA_APROVADO 5.00

int main(){
// 1. Ingreso de notas
	int cantidad_estudiantes;
	printf("Ingresa la cantidad de estudiantes que hay: ");
	scanf("%d", &cantidad_estudiantes);
	double nota[cantidad_estudiantes]; // Aquí guardaremos las notas de todos los estudiantes.
	for (int i = 0; i < cantidad_estudiantes; i++){ // Este bucle se repetirá tantas veces como estudiantes haya.
		printf("Nota final del estudiante %d: ", i);
		scanf("%lf", &nota[i]);
	}
// 2. Cálculo del promedio
	double acumulador = 0;
	double promedio;
	for (int i = 0; i < cantidad_estudiantes; i++){ // Este bucle se repetirá tantas veces como estudiantes haya.
		acumulador += nota[i]; // Iremos sumando cada valor del array.
	}
	promedio = acumulador / cantidad_estudiantes; // La fórmula para hallar el promedio es sumar todos los datos y dividirlos entre la cantidad de esos datos que hay.
	printf("Promedio de notas: %.2lf\n", promedio);
// 3. Número de Aprobados y Suspensos:
	int aprobados = 0;
	int suspensos = 0;
	for (int i = 0; i < cantidad_estudiantes; i++){ // Este bucle se repetirá tantas veces como estudiantes haya.
		if (nota[i] >= NOTA_APROVADO){
			aprobados++;
		} else {
			suspensos++;
		}
	}
	printf("Número de estudiantes aprobados: %d\nNúmero de estudiantes suspensos: %d\n", aprobados, suspensos);
	return 0;
}
