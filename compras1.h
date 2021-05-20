#include <stdio.h>
#include <Windows.h>

//MACROS PARA DEFINIR LOS VALORES
#define CHICLES 30.5
#define CHOCOLATES 55.67
#define GOMITAS 23.45
#define PALETAS 19.76
#define DULCESMEXICANOS 39.78
#define CARAMELOS 23.56
#define REFRESCOS 100.54
#define FRITURAS 67.89
#define PANES 20.54
#define GALLETAS 32.12
#define HELADOS 44.56

struct Compra{
	
	int idCompra, cantidad;
	float total, totalCompra;
	char nombreProducto[20];
	
}compra[100];

void comprarProductos();
void consultarCompra();
void enlistarVentas();
void validarCompra();
float pagarProducto();

extern int compras;

int comprobar;

void comprarProductos(){
	
	float totalPagar = 0.0, suma = 0.0;
	int agregar;
		
	do{
		
		if(compras < 100){
		
		
		printf("Ingrese el id de la compra: ");
		scanf("%d", &compra[compras].idCompra);
		
		printf("Ingrese la cantidad comprada: ");
		scanf("%d", &compra[compras].cantidad);
		
		printf("Ingrese el nombre del producto: ");
		scanf("%s", compra[compras].nombreProducto);
	
		validarCompra();
		
		compras++;
		
		totalPagar = pagarProducto();
		
		printf("El total a pagar es: %.2f\n", totalPagar); 

		}
		
		else{
			
			printf("La memoria se ha llenado");
			
		}
		
		printf("Desea comprar algo mas [Si = 1][No = 0]: ");
		scanf("%d", &agregar);
		
	}while(agregar != 0);
		
}

void validarCompra(){
	
	printf("1. Chicles\n2. Chocolates\n3. Gomitas\n4. Paletas\n5. Dulces Mexicanos\n6. Caramelos\n7. Refrescos\n8. Frituras\n9. Panes\n10. Galletas\n11. Helados\n");
	printf("Ingrese el tipo de producto, que desee comprar: ");
	scanf("%d", &comprobar);
	
	if(comprobar < 1 || comprobar > 11){
		
		printf("Opcion invalida");
		
	}
	
}

float pagarProducto(){
	
	int i;
	
	for(i = 0; i < compras + 1; i++){
		
		if(comprobar == 1){
			
			compra[i].totalCompra = compra[i].cantidad * CHICLES; 
			
		}
		
		else
			if(comprobar == 2){
				
				compra[i].totalCompra = compra[i].cantidad * CHOCOLATES;
			
			}
			
		else
			if(comprobar == 3){
					
				compra[i].totalCompra = compra[i].cantidad * GOMITAS;
					
			}	
				
		else
			if(comprobar == 4){
						
				compra[i].totalCompra = compra[i].cantidad * PALETAS;			
						
			}
					
		else
			if(comprobar == 5){
						
				compra[i].totalCompra = compra[i].cantidad * DULCESMEXICANOS;
						
			}
						
		else
			if(comprobar == 6){
						
				compra[i].totalCompra = compra[i].cantidad * CARAMELOS;		
						
			}	
		
		else
			if(comprobar == 7){
				
				compra[i].totalCompra = compra[i].cantidad * REFRESCOS;
				
			}	
		
		else
			if(comprobar == 8){
				
				compra[i].totalCompra = compra[i].cantidad * FRITURAS;
				
			}
		
		else
			if(comprobar == 9){
				
				compra[i].totalCompra = compra[i].cantidad * PANES;
				
			}
			
		else
			if(comprobar == 10){
				
				compra[i].totalCompra = compra[i].cantidad * GALLETAS;
				
			}
		
		else
			
			if(comprobar == 11){
				
				compra[i].totalCompra = compra[i].cantidad * HELADOS;
				
			}
				
		return compra[i].totalCompra;
	
	}
	
	
}

void consultarCompra(){
	
	int id, i;
	
	printf("Ingrese el id de la compra a consultar: ");
	scanf("%d", &id);
	
	for(i = 0; i < compras; i++){
		
		if(id == compra[i].idCompra){
			
			printf("\nLA COMPRA REALIZADA ES DE: \n");
			
			printf("\n\nEl nombre del producto: %s\n", compra[i].nombreProducto);
			printf("Las cantidades compradas: %d\n", compra[i].cantidad);
			printf("El total a pagar es de: %.2f\n", compra[i].totalCompra);
			
		}
		
	}
	
	
	
}

void enlistarVentas(){
	
	int i;
	float suma = 0.0;
	
	for(i = 0; i < compras; i++){
		
		suma += compra[i].totalCompra;
		
	}
	
	for(i = 0; i < compras; i++){
		
		printf("Nombre producto: %s\n", compra[i].nombreProducto);
		printf("Cantidades compradas: %d\n", compra[i].cantidad);
		printf("Total por producto: %.2f\n", compra[i].totalCompra);
		
	}
	
	printf("Total de compras hasta el momento: %.2f\n", suma);
}

