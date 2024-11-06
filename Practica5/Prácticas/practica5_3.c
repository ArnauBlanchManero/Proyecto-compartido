#include <stdio.h>
#include <stdlib.h>

struct articulo {
	char nombre[21];
	int cantidad;
};

int pedir_cantidad_productos(){
	int cantidad;
	printf("Cuántos productos quieres gestionar? (máximo de 10) ");
	scanf("%d", &cantidad);
	return cantidad;
}


int main(){
// 1. Ingreso de productos y cantidades
	int n_productos;
	struct articulo producto;
	do{
		printf("Has introducido demasiados productos\n");
		n_productos = pedir_cantidad_productos();
	} while (n_productos > 10); // Compruebo que el usuario haya introducido menos de 10 productos
	for (int i = 0; i < n_productos; i++){ // Se repite tantas veces como número de productos haya
		printf("Nombre del producto %d: ", i);
		scanf(" %s", producto.nombre);
		printf("Cantidad de %s: ", producto.nombre);
		scanf("%d", &producto.cantidad);
	}
// 2. Mostrar inventario completo
	return 0;
}
