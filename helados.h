#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int ingresarHelados;


struct Helados{
	
	int idHelados;
	char nombreHelados[20], nombreProveedor[20],  
		 tipoProducto[20];
	float costoHelados;	 
		 
}helados[30];

void ingresaHelados(struct Helados *);
void enlistarHelados(struct Helados *);
void buscarHelados(struct Helados *);
void modificarHelados(struct Helados *);
void eliminarHelados(struct Helados *);

void ingresaHelados(struct Helados *h){
	
	int agregar;
	
	do{
	
		if(ingresarHelados < 30){
			
			printf("\n\n:::::::::::::::::::::::::::::::::::::::::\n");
			printf("\t\tREGISTO DE HELADOS %d", ingresarHelados + 1); printf("             :");
			printf("\n:::::::::::::::::::::::::::::::::::::::::\n");
				
			
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca su ID: "); 
			scanf("%d", &h[ingresarHelados].idHelados); printf("                                         :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
				
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el nombre de los helados: ");
			scanf("%s", h[ingresarHelados].nombreHelados); printf("                                         :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
				
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el nombre del proveedor: ");
			scanf("%s", h[ingresarHelados].nombreProveedor); printf("                                                 :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
				
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el tipo del producto: ");  
			scanf("%s", h[ingresarHelados].tipoProducto); printf("                                                 :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el precio del producto: ");
			scanf("%f", &h[ingresarHelados].costoHelados); printf("                                                        :");
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf(":EL PRODUCTO HA SIDO REGISTRADO, CON EXITO              :");
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			
			ingresarHelados++;
		}
		
		else{
			
			printf("\nEl espacio en la memoria se lleno");
			
		}
	
		printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
		printf("Desea agregar otro producto [Si = 1] [No = 0]: ");
		scanf("%d", &agregar); printf("                                                    :");
		printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	
	}while(agregar != 0);
	
}

void enlistarHelados(struct Helados *h){
	
	int i;
	
	printf("\t\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf("\tID\t:\tPRDOUCTO\t:\tPROVEEDOR\t:\tTIPO PRODUCTO\t:\tPRECIO:");
	printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	
	for(i = 0; i < ingresarHelados; i++){
		
		printf("\t%d\t:\t%s\t:\t%s\t:\t%s\t:\t%.2f\t:", h[i].idHelados, h[i].nombreHelados, h[i].nombreProveedor, h[i].tipoProducto, h[i].costoHelados);
		
		printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");	
	}
	
	printf("\n");
	
}

void buscarHelados(struct Helados *h){
	
	int i, id;
	
	printf("Introduzca el ID a buscar: ");
	scanf("%d", &id);
	
	for(i = 0; i < ingresarHelados; i++){
		
		if(id == h[i].idHelados){
			
			printf(":::::::::::::::::::::::");
			printf("\n:PRODUCTO EXISTENTE   :");
			printf("\n:::::::::::::::::::::::");
			
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
			printf("\nDATOS DEL PRODUCTO:                                                       :");
			printf("\n\nProducto: %s                                                            :", h[i].nombreHelados);
			printf("\nProveedor: %s                                                         :", h[i].nombreProveedor);
			printf("\nTipo Producto: %s                                                          :", h[i].tipoProducto);
			printf("\nPrecio: %.2f                                     :", h[i].costoHelados);
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
			
		}
		
		/*
		else{
			
			printf("\n-------------------------------------------------------------------------\n");
			printf("\t\tEL PRODUCTO A BUSCAR NO EXISTE               |\n");
			printf("-------------------------------------------------------------------------\n");
			
		}
		*/
	}
	
}

void modificarHelados(struct Helados *h){

	int i, id;
	
	printf("Introduzca el ID a modificar: ");
	scanf("%d", &id);
	
	for(i = 0; i < ingresarHelados; i++){
		
		if(id == h[i].idHelados){
			
			printf(":::::::::::::::::::::::");
			printf("\nPRODUCTO A MODIFICAR :");
			printf("\n:::::::::::::::::::::::");
			
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
			printf("\nDATOS DEL PRODUCTO:                                                       :");
			printf("\n\nID: %d                                                                     :", h[i].idHelados);
			printf("\nProducto: %s                                                            :", h[i].nombreHelados);
			printf("\nProveedor: %s                                                         :", h[i].nombreProveedor);
			printf("\nTipo Producto: %s                                                           :", h[i].tipoProducto);
			printf("\nPrecio: %.2f                                     :", h[i].costoHelados);
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
			
			printf("\n\n\n::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca su ID: "); 
			scanf("%d", &h[ingresarHelados - 1].idHelados); printf("                                         :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
			
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el nombre del producto: ");
			scanf("%s", h[ingresarHelados - 1].nombreHelados); printf("                                         :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
			
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el nombre del proveedor: ");
			scanf("%s", h[ingresarHelados - 1].nombreProveedor); printf("                                                 :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el tipo de producto: ");  
			scanf("%s", h[ingresarHelados - 1].tipoProducto); printf("                                                 :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el precio: ");
			scanf("%f", &h[ingresarHelados - 1].costoHelados); printf("                                                        :");
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("\t\tLOS DATOS SE HAN MODIFICADO, CON EXITO            :");
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			
		}
		
		/*
		else{
			
			printf("\n-------------------------------------------------------------------------\n");
			printf("\t\tEL PRODUCTO A MODIFICAR NO EXISTE          |\n");
			printf("-------------------------------------------------------------------------\n");
		
		}
		*/
			
	}

}

void eliminarHelados(struct Helados *h){
	
	int i, id;
	
	printf("Introduzca su ID: ");
	scanf("%d", &id);
	
	for(i = 0; i < ingresarHelados; i++){
		
		if(id == h[i].idHelados){
		
			h[i].idHelados = h[i + 1].idHelados;
			strcpy(h[i].nombreHelados, h[i + 1].nombreHelados);
			strcpy(h[i].nombreProveedor, h[i + 1].nombreProveedor);
			strcpy(h[i].tipoProducto, h[i + 1].tipoProducto);
			h[i].costoHelados = h[i + 1].costoHelados;
			
			ingresarHelados--;
			
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf(":\t\tPRODUCTO ELIMINADO                :");
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
		}
		
		/*
		else{
			
			printf("\n-------------------------------------------------------------------------\n");
			printf("\t\tEL PRODUCTO A ELIMINAR, NO EXISTE               |");
			printf("\n-------------------------------------------------------------------------\n");
		}
		*/
		
	}
	
}
