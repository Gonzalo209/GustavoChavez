#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int ingresarCaramelos;


struct Caramelos{
	
	int idCaramelos;
	char nombreCaramelos[20], nombreProveedor[20],  
		 tipoProducto[20];
	float costoCaramelos;	 
		 
}caramelos[30];

void ingresaCaramelos(struct Caramelos *);
void enlistarCaramelos(struct Caramelos *);
void buscarCaramelos(struct Caramelos *);
void modificarCaramelos(struct Caramelos *);
void eliminarCaramelos(struct Caramelos *);

void ingresaCaramelos(struct Caramelos *c){
	
	int agregar;
	
	do{
	
		if(ingresarCaramelos < 30){
			
			printf("\n\n:::::::::::::::::::::::::::::::::::::::::\n");
			printf("\t\tREGISTO DE CARAMELOS %d", ingresarCaramelos + 1); printf("             :");
			printf("\n:::::::::::::::::::::::::::::::::::::::::\n");
				
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca su ID: "); 
			scanf("%d", &c[ingresarCaramelos].idCaramelos); printf("                                         :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
				
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el nombre de los caramelos: ");
			scanf("%s", c[ingresarCaramelos].nombreCaramelos); printf("                                         :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
				
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el nombre del proveedor: ");
			scanf("%s", c[ingresarCaramelos].nombreProveedor); printf("                                                 :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
				
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el tipo del producto: ");  
			scanf("%s", c[ingresarCaramelos].tipoProducto); printf("                                                 :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
				
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el precio del producto: ");
			scanf("%f", &c[ingresarCaramelos].costoCaramelos); printf("                                                        :");
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf(":EL PRODUCTO HA SIDO REGISTRADO, CON EXITO              :");
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			
			ingresarCaramelos++;
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

void enlistarCaramelos(struct Caramelos *c){
	
	int i;
	
	printf("\t\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf("\tID\t:\tPRDOUCTO\t:\tPROVEEDOR\t:\tTIPO PRODUCTO\t:\tPRECIO:");
	printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	
	for(i = 0; i < ingresarCaramelos; i++){
		
		printf("\t%d\t:\t%s\t:\t%s\t:\t%s\t:\t%.2f\t:", c[i].idCaramelos, c[i].nombreCaramelos, c[i].nombreProveedor, c[i].tipoProducto, c[i].costoCaramelos);		
		
		printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");	
	}
	
	printf("\n");
	
}

void buscarCaramelos(struct Caramelos *c){
	
	int i, id;
	
	printf("Introduzca el ID a buscar: ");
	scanf("%d", &id);
	
	for(i = 0; i < ingresarCaramelos; i++){
		
		if(id == c[i].idCaramelos){
			
			printf(":::::::::::::::::::::::");
			printf("\nPRODUCTO EXISTENTE   :");
			printf("\n:::::::::::::::::::::::");
			
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
			printf("\nDATOS DEL PRODUCTO:                                                       :");
			printf("\n\nProducto: %s                                                            :", c[i].nombreCaramelos);
			printf("\nProveedor: %s                                                         :", c[i].nombreProveedor);
			printf("\nTipo Producto: %s                                                          :", c[i].tipoProducto);
			printf("\nPrecio: %.2f                                     :", c[i].costoCaramelos);
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
			
		}
		
		/*
		else{
			
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("\t\tEL PRODUCTO A BUSCAR NO EXISTE               :\n");
			printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			
		}
		
		*/
	}
	
}

void modificarCaramelos(struct Caramelos *c){

	int i, id;
	
	printf("Introduzca el ID a modificar: ");
	scanf("%d", &id);
	
	for(i = 0; i < ingresarCaramelos; i++){
		
		if(id == c[i].idCaramelos){
			
			printf(":::::::::::::::::::::::");
			printf("\nPRODUCTO A MODIFICAR :");
			printf("\n:::::::::::::::::::::::");
			
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
			printf("\nDATOS DEL PRODUCTO:                                                         :");
			printf("\n\nID: %d                                                                    :", c[i].idCaramelos);
			printf("\nProducto: %s                                                                :", c[i].nombreCaramelos);
			printf("\nProveedor: %s                                                               :", c[i].nombreProveedor);
			printf("\nTipo Producto: %s                                                           :", c[i].tipoProducto);
			printf("\nPrecio: %.2f                                                                :", c[i].costoCaramelos);
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
			
			printf("\n\n\n::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca su ID: "); 
			scanf("%d", &c[ingresarCaramelos - 1].idCaramelos); printf("                                         :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
			
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el nombre del producto: ");
			scanf("%s", c[ingresarCaramelos - 1].nombreCaramelos); printf("                                         :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
			
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el nombre del proveedor: ");
			scanf("%s", c[ingresarCaramelos - 1].nombreProveedor); printf("                                                 :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el tipo de producto: ");  
			scanf("%s", c[ingresarCaramelos - 1].tipoProducto); printf("                                                 :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el precio: ");
			scanf("%f", &c[ingresarCaramelos - 1].costoCaramelos); printf("                                                        :");
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("\t\tLOS DATOS SE HAN MODIFICADO, CON EXITO            :");
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			
		}
		
		/*
		else{
			
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("\t\tEL PRODUCTO A MODIFICAR NO EXISTE          |\n");
			printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
		
		}
		
		*/
			
	}

}

void eliminarCaramelos(struct Caramelos *c){
	
	int i, id;
	
	printf("Introduzca su ID: ");
	scanf("%d", &id);
	
	for(i = 0; i < ingresarCaramelos; i++){
		
		if(id == c[i].idCaramelos){
			
			c[i].idCaramelos = c[i + 1].idCaramelos;
			strcpy(c[i].nombreCaramelos, c[i + 1].nombreCaramelos);
			strcpy(c[i].nombreProveedor, c[i + 1].nombreProveedor);
			strcpy(c[i].tipoProducto, c[i + 1].tipoProducto);
			c[i].costoCaramelos = c[i + 1].costoCaramelos;
			
			ingresarCaramelos--;
			
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("\t\tPRODUCTO ELIMINADO                :");
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
		}
		
		/*
		
		else{
			
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("\t\tEL PRODUCTO A ELIMINAR, NO EXISTE               :");
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
		}
		
		*/
		
	}
	
}
