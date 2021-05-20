#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int ingresarChicles;

struct Chicles{
	
	int idChicle;
	char nombreChicle[20], nombreProveedor[20],  
		 tipoProducto[20];
	float costoChicle;	 
		 
}chicle[30];

void ingresaChicles(struct Chicles *);
void enlistarChicles(struct Chicles *);
void buscarChicles(struct Chicles *);
void modificarChicles(struct Chicles *);
void eliminarChicles(struct Chicles *);

void ingresaChicles(struct Chicles *c){
	
	int agregar;
	
	do{
	
		if(ingresarChicles < 30){
			
			printf("\n\n:::::::::::::::::::::::::::::::::::::::::\n");
			printf("\t\tREGISTO DE CHICLE %d", ingresarChicles + 1); printf("             :");
			printf("\n:::::::::::::::::::::::::::::::::::::::::\n");
				
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca su ID: "); 
			scanf("%d", &c[ingresarChicles].idChicle); printf("                                         :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
				
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el nombre del chicle: ");
			scanf("%s", c[ingresarChicles].nombreChicle); printf("                                         :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
				
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el nombre del proveedor: ");
			scanf("%s", c[ingresarChicles].nombreProveedor); printf("                                                 :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
				
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el tipo del producto: ");  
			scanf("%s", c[ingresarChicles].tipoProducto); printf("                                                 :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
				
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el precio del producto: ");
			scanf("%f", &c[ingresarChicles].costoChicle); printf("                                                        :");
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("EL PRODUCTO HA SIDO REGISTRADO, CON EXITO              :");
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			
			ingresarChicles++;
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

void enlistarChicles(struct Chicles *c){
	
	int i;
	
	printf("\t\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf("\tID\t:\tPRDOUCTO\t:\tPROVEEDOR\t:\tTIPO PRODUCTO\t:\tPRECIO:");
	printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	
	for(i = 0; i < ingresarChicles; i++){
		
		printf("\t%d\t:\t%s\t:\t%s\t:\t%s\t:\t%.2f\t:", c[i].idChicle, c[i].nombreChicle, c[i].nombreProveedor, c[i].tipoProducto, c[i].costoChicle);
		
		printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	}
	
	printf("\n");
	
}

void buscarChicles(struct Chicles *c){
	
	int i = 0, id;
	
	printf("Introduzca el ID a buscar: ");
	scanf("%d", &id);
	
	for(i = 0; i < ingresarChicles; i++){
		
		if(id == c[i].idChicle){
			
			printf(":::::::::::::::::::::::");
			printf("\nPRODUCTO EXISTENTE   :");
			printf("\n:::::::::::::::::::::::");
			
			
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
			printf("\nDATOS DEL PRODUCTO:                                                       :");
			printf("\n\nProducto: %s                                                            :", c[i].nombreChicle);
			printf("\nProveedor: %s                                                         :", c[i].nombreProveedor);
			printf("\nTipo Producto: %s                                                          :", c[i].tipoProducto);
			printf("\nPrecio: %.2f                                     :", c[i].costoChicle);
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

void modificarChicles(struct Chicles *c){

		int i, id;
	
	printf("Introduzca el ID a modificar: ");
	scanf("%d", &id);
	
	for(i = 0; i < ingresarChicles; i++){
		
		if(id == c[i].idChicle){
			
			printf(":::::::::::::::::::::::");
			printf("\nPRODUCTO A MODIFICAR |");
			printf("\n:::::::::::::::::::::::");
			
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
			printf("\nDATOS DEL PRODUCTO:                                                        :");
			printf("\n\nID: %d                                                                   :", c[i].idChicle);
			printf("\nProducto: %s                                                               :", c[i].nombreChicle);
			printf("\nProveedor: %s                                                              :", c[i].nombreProveedor);
			printf("\nTipo Producto: %s                                                          :", c[i].tipoProducto);
			printf("\nPrecio: %.2f                                                               :", c[i].costoChicle);
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
			
			
			printf("\n\n\n::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca su ID: "); 
			scanf("%d", &c[ingresarChicles - 1].idChicle); printf("                                         :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
			
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el nombre del producto: ");
			scanf("%s", c[ingresarChicles - 1].nombreChicle); printf("                                         :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
			
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el nombre del proveedor: ");
			scanf("%s", c[ingresarChicles - 1].nombreProveedor); printf("                                                 :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el tipo de producto: ");  
			scanf("%s", c[ingresarChicles - 1].tipoProducto); printf("                                                 :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el precio: ");
			scanf("%f", &c[ingresarChicles - 1].costoChicle); printf("                                                        :");
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("\t\tLOS DATOS SE HAN MODIFICADO, CON EXITO            :");
			printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			
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

void eliminarChicles(struct Chicles *c){
	
	int i, id;
	
	printf("Introduzca su ID: ");
	scanf("%d", &id);
	
	for(i = 0; i < ingresarChicles; i++){
		
		if(id == c[i].idChicle){
			
			c[i].idChicle = c[i + 1].idChicle;
			strcpy(c[i].nombreChicle, c[i + 1].nombreChicle);
			strcpy(c[i].nombreProveedor, c[i + 1].nombreProveedor);
			strcpy(c[i].tipoProducto, c[i + 1].tipoProducto);
			c[i].costoChicle = c[i + 1].costoChicle;
			
			ingresarChicles--;
			
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("\t\tPRODUCTO ELIMINADO                :");
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
