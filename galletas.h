#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int ingresarGalletas;


struct Galletas{
	
	int idGalletas;
	char nombreGalletas[20], nombreProveedor[20],  
		 tipoProducto[20];
	float costoGalletas;	 
		 
}galletas[30];

void ingresaGalletas(struct Galletas *);
void enlistarGalletas(struct Galletas *);
void buscarGalletas(struct Galletas *);
void modificarGalletas(struct Galletas *);
void eliminarGalletas(struct Galletas *);

void ingresaGalletas(struct Galletas *g){
	
	int agregar;
	
	do{
	
		if(ingresarGalletas < 30){
			
			printf("\n\n:::::::::::::::::::::::::::::::::::::::::\n");
			printf("\t\tREGISTO DE GALLETAS %d", ingresarGalletas + 1); printf("             :");
			printf("\n:::::::::::::::::::::::::::::::::::::::::\n");
				
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca su ID: "); 
			scanf("%d", &g[ingresarGalletas].idGalletas); printf("                                         :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
				
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el nombre de las galletas: ");
			scanf("%s", g[ingresarGalletas].nombreGalletas); printf("                                         :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
		
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el nombre del proveedor: ");
			scanf("%s", g[ingresarGalletas].nombreProveedor); printf("                                                 :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
				
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el tipo del producto: ");  
			scanf("%s", g[ingresarGalletas].tipoProducto); printf("                                                 :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
				
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el precio del producto: ");
			scanf("%f", &g[ingresarGalletas].costoGalletas); printf("                                                        :");
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf(":EL PRODUCTO HA SIDO REGISTRADO, CON EXITO              :");
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			
			ingresarGalletas++;
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

void enlistarGalletas(struct Galletas *g){
	
	int i;
	
	printf("\t\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf("\tID\t:\tPRDOUCTO\t:\tPROVEEDOR\t:\tTIPO PRODUCTO\t:\tPRECIO:");
	printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	
	for(i = 0; i < ingresarGalletas; i++){
		
		printf("\t%d\t:\t%s\t:\t%s\t:\t%s\t:\t%.2f\t:", g[i].idGalletas, g[i].nombreGalletas, g[i].nombreProveedor, g[i].tipoProducto, g[i].costoGalletas);
			
		printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	}
	
	printf("\n");
	
}

void buscarGalletas(struct Galletas *g){
	
	int i, id;
	
	printf("Introduzca el ID a buscar: ");
	scanf("%d", &id);
	
	for(i = 0; i < ingresarGalletas; i++){
		
		if(id == g[i].idGalletas){
			
			printf(":::::::::::::::::::::::");
			printf("\n:PRODUCTO EXISTENTE   :");
			printf("\n:::::::::::::::::::::::");
			
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
			printf("\nDATOS DEL PRODUCTO:                                                       :");
			printf("\n\nProducto: %s                                                            :", g[i].nombreGalletas);
			printf("\nProveedor: %s                                                         :", g[i].nombreProveedor);
			printf("\nTipo Producto: %s                                                          :", g[i].tipoProducto);
			printf("\nPrecio: %.2f                                     :", g[i].costoGalletas);
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

void modificarGalletas(struct Galletas *g){

	int i, id;
	
	printf("Introduzca el ID a modificar: ");
	scanf("%d", &id);
	
	for(i = 0; i < ingresarGalletas; i++){
		
		if(id == g[i].idGalletas){
			
			printf(":::::::::::::::::::::::");
			printf("\nPRODUCTO A MODIFICAR :");
			printf("\n:::::::::::::::::::::::");
			
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
			printf("\nDATOS DEL PRODUCTO:                                                       :");
			printf("\n\nID: %d                                                                     :", g[i].idGalletas);
			printf("\nProducto: %s                                                            :", g[i].nombreGalletas);
			printf("\nProveedor: %s                                                         :", g[i].nombreProveedor);
			printf("\nTipo Producto: %s                                                           :", g[i].tipoProducto);
			printf("\nPrecio: %.2f                                     :", g[i].costoGalletas);
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
			
			printf("\n\n\n::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca su ID: "); 
			scanf("%d", &g[ingresarGalletas - 1].idGalletas); printf("                                         :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
			
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el nombre del producto: ");
			scanf("%s", g[ingresarGalletas - 1].nombreGalletas); printf("                                         :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
			
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el nombre del proveedor: ");
			scanf("%s", g[ingresarGalletas - 1].nombreProveedor); printf("                                                 :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el tipo de producto: ");  
			scanf("%s", g[ingresarGalletas - 1].tipoProducto); printf("                                                 :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el precio: ");
			scanf("%f", &g[ingresarGalletas - 1].costoGalletas); printf("                                                        :");
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

void eliminarGalletas(struct Galletas *g){
	
	int i, id;
	
	printf("Introduzca su ID: ");
	scanf("%d", &id);
	
	for(i = 0; i < ingresarGalletas; i++){
		
		if(id == g[i].idGalletas){
		
			g[i].idGalletas = g[i + 1].idGalletas;
			strcpy(g[i].nombreGalletas, g[i + 1].nombreGalletas);
			strcpy(g[i].nombreProveedor, g[i + 1].nombreProveedor);
			strcpy(g[i].tipoProducto, g[i + 1].tipoProducto);
			g[i].costoGalletas = g[i + 1].costoGalletas;
			
			ingresarGalletas--;
			
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
