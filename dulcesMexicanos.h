#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int ingresarDulcesMexicanos;

struct DulcesMexicanos{
	
	int idDulcesMexicanos;
	char nombreDulcesMexicanos[20], nombreProveedor[20],  
		 tipoProducto[20];
	float costoDulcesMexicanos;	 
		 
}dulcesmexicanos[30];

void ingresaDulcesMexicanos(struct DulcesMexicanos *);
void enlistarDulcesMexicanos(struct DulcesMexicanos *);
void buscarDulcesMexicanos(struct DulcesMexicanos *);
void modificarDulcesMexicanos(struct DulcesMexicanos *);
void eliminarDulcesMexicanos(struct DulcesMexicanos *);

void ingresaDulcesMexicanos(struct DulcesMexicanos *dm){
	
	int agregar;
	
	do{
	
		if(ingresarDulcesMexicanos < 30){
			
			printf("\n\n:::::::::::::::::::::::::::::::::::::::::\n");
			printf("\t\tREGISTO DE DULCES MEXICANOS %d", ingresarDulcesMexicanos + 1); printf("             :");
			printf("\n:::::::::::::::::::::::::::::::::::::::::\n");
				
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca su ID: "); 
			scanf("%d", &dm[ingresarDulcesMexicanos].idDulcesMexicanos); printf("                                         :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
				
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el nombre de los dulces mexicanos: ");
			scanf("%s", dm[ingresarDulcesMexicanos].nombreDulcesMexicanos); printf("                                         :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
				
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el nombre del proveedor: ");
			scanf("%s", dm[ingresarDulcesMexicanos].nombreProveedor); printf("                                                 :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
				
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el tipo del producto: ");  
			scanf("%s", dm[ingresarDulcesMexicanos].tipoProducto); printf("                                                 :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
				
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el precio del producto: ");
			scanf("%f", &dm[ingresarDulcesMexicanos].costoDulcesMexicanos); printf("                                                        :");
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf(":EL PRODUCTO HA SIDO REGISTRADO, CON EXITO              :");
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			
			ingresarDulcesMexicanos++;
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

void enlistarDulcesMexicanos(struct DulcesMexicanos *dm){
	
	int i;
	
	printf("\t\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf("\tID\t:\tPRDOUCTO\t:\tPROVEEDOR\t:\tTIPO PRODUCTO\t:\tPRECIO:");
	printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	
	for(i = 0; i < ingresarDulcesMexicanos; i++){
		
		printf("\t%d\t:\t%s\t:\t%s\t:\t%s\t:\t%.2f\t:", dm[i].idDulcesMexicanos, dm[i].nombreDulcesMexicanos, dm[i].nombreProveedor, dm[i].tipoProducto, dm[i].costoDulcesMexicanos);
		
		printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");	
	}
	
	printf("\n");
	
}

void buscarDulcesMexicanos(struct DulcesMexicanos *dm){
	
	int i, id;
	
	printf("Introduzca el ID a buscar: ");
	scanf("%d", &id);
	
	for(i = 0; i < ingresarDulcesMexicanos; i++){
		
		if(id == dm[i].idDulcesMexicanos){
			
			printf(":::::::::::::::::::::::");
			printf("\n:PRODUCTO EXISTENTE   :");
			printf("\n:::::::::::::::::::::::");
			
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
			printf("\nDATOS DEL PRODUCTO:                                                       :");
			printf("\n\nProducto: %s                                                            :", dm[i].nombreDulcesMexicanos);
			printf("\nProveedor: %s                                                         :", dm[i].nombreProveedor);
			printf("\nTipo Producto: %s                                                          :", dm[i].tipoProducto);
			printf("\nPrecio: %.2f                                     :", dm[i].costoDulcesMexicanos);
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

void modificarDulcesMexicanos(struct DulcesMexicanos *dm){

	int i, id;
	
	printf("Introduzca el ID a modificar: ");
	scanf("%d", &id);
	
	for(i = 0; i < ingresarDulcesMexicanos; i++){
		
		if(id == dm[i].idDulcesMexicanos){
			
			printf(":::::::::::::::::::::::");
			printf("\nPRODUCTO A MODIFICAR :");
			printf("\n:::::::::::::::::::::::");
		
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
			printf("\nDATOS DEL PRODUCTO:                                                       :");
			printf("\n\nID: %d                                                                     :", dm[i].idDulcesMexicanos);
			printf("\nProducto: %s                                                            :", dm[i].nombreDulcesMexicanos);
			printf("\nProveedor: %s                                                         :", dm[i].nombreProveedor);
			printf("\nTipo Producto: %s                                                           :", dm[i].tipoProducto);
			printf("\nPrecio: %.2f                                     :", dm[i].costoDulcesMexicanos);
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
			
			printf("\n\n\n::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca su ID: "); 
			scanf("%d", &dm[ingresarDulcesMexicanos - 1].idDulcesMexicanos); printf("                                         :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
			
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el nombre del producto: ");
			scanf("%s", dm[ingresarDulcesMexicanos - 1].nombreDulcesMexicanos); printf("                                         :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
			
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el nombre del proveedor: ");
			scanf("%s", dm[ingresarDulcesMexicanos - 1].nombreProveedor); printf("                                                 :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el tipo de producto: ");  
			scanf("%s", dm[ingresarDulcesMexicanos - 1].tipoProducto); printf("                                                 :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el precio: ");
			scanf("%f", &dm[ingresarDulcesMexicanos - 1].costoDulcesMexicanos); printf("                                                        :");
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

void eliminarDulcesMexicanos(struct DulcesMexicanos *dm){
	
	int i, id;
	
	printf("Introduzca su ID: ");
	scanf("%d", &id);
	
	for(i = 0; i < ingresarDulcesMexicanos; i++){
		
		if(id == dm[i].idDulcesMexicanos){
			
			dm[i].idDulcesMexicanos = dm[i + 1].idDulcesMexicanos;
			strcpy(dm[i].nombreDulcesMexicanos, dm[i + 1].nombreDulcesMexicanos);
			strcpy(dm[i].nombreProveedor, dm[i + 1].nombreProveedor);
			strcpy(dm[i].tipoProducto, dm[i + 1].tipoProducto);
			dm[i].costoDulcesMexicanos = dm[i + 1].costoDulcesMexicanos;
			
			ingresarDulcesMexicanos--;
			
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
