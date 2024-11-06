#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct articulo {
	char nombre[100];
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

	do{
		printf("Has introducido demasiados productos\n");
		n_productos = pedir_cantidad_productos();
	} while (n_productos > 10); // Compruebo que el usuario haya introducido menos de 10 productos

	struct articulo producto[n_productos];

	for (int i = 0; i < n_productos; i++){ // Se repite tantas veces como número de productos haya
		printf("Nombre del producto %d: ", i);
		scanf(" %s", producto[i].nombre);
		printf("Cantidad de %s: ", producto[i].nombre);
		scanf("%d", &producto[i].cantidad);
	}

// 2. Mostrar inventario completo

	printf("Inventario Completo:\n");
	for (int i = 0; i < n_productos; i++){ // Se repite tantas veces como número de productos haya
		printf("Producto %d: %s - %d unidades\n", i, producto[i].nombre, producto[i].cantidad);
	}

// 3. Rebastecimiento de productos
	
	char respuesta[4];
	char rebastecer_producto[100];
	int i = 0;
	printf("¿Desea rebastecer algún producto? (sí/no): ");
	scanf(" %s", respuesta);
	if (strcmp(respuesta, "sí")){
		printf("Ingrese el nombre del producto: ");
		scanf(" %s", rebastecer_producto);
		while(strcmp(producto[i].nombre, rebastecer_producto)){
			i++;
		}
		printf("Cantidad a añadir: ");
		scanf("%d", &producto[i].cantidad);
	}
	return 0;
}
