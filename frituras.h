#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int ingresarFrituras;


struct Frituras{
	
	int idFrituras;
	char nombreFrituras[20], nombreProveedor[20],  
		 tipoProducto[20];
	float costoFrituras;	 
		 
}frituras[30];

void ingresaFrituras(struct Frituras *);
void enlistarFrituras(struct Frituras *);
void buscarFrituras(struct Frituras *);
void modificarFrituras(struct Frituras *);
void eliminarFrituras(struct Frituras *);

void ingresaFrituras(struct Frituras *f){
	
	int agregar;
	
	do{
	
		if(ingresarFrituras < 30){
			
			printf("\n\n:::::::::::::::::::::::::::::::::::::::::\n");
			printf("\t\tREGISTO DE FRITURAS %d", ingresarFrituras + 1); printf("             :");
			printf("\n:::::::::::::::::::::::::::::::::::::::::\n");
				
			printf("\n:::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca su ID: "); 
			scanf("%d", &f[ingresarFrituras].idFrituras); printf("                                         :");
			printf("\n:::::::::::::::::::::::::::::::::::::::::\n");
				
			printf("\n:::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el nombre de las frituras: ");
			scanf("%s", f[ingresarFrituras].nombreFrituras); printf("                                         :");
			printf("\n:::::::::::::::::::::::::::::::::::::::::\n");
				
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el nombre del proveedor: ");
			scanf("%s", f[ingresarFrituras].nombreProveedor); printf("                                                 :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
				
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el tipo del producto: ");  
			scanf("%s", f[ingresarFrituras].tipoProducto); printf("                                                 :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
				
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el precio del producto: ");
			scanf("%f", &f[ingresarFrituras].costoFrituras); printf("                                                        :");
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf(":EL PRODUCTO HA SIDO REGISTRADO, CON EXITO              :");
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			
			ingresarFrituras++;
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

void enlistarFrituras(struct Frituras *f){
	
	int i;
	
	printf("\t\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf("\tID\t:\tPRDOUCTO\t:\tPROVEEDOR\t:\tTIPO PRODUCTO\t:\tPRECIO:");
	printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	
	for(i = 0; i < ingresarFrituras; i++){
		
		printf("\t%d\t:\t%s\t:\t%s\t:\t%s\t:\t%.2f\t:", f[i].idFrituras, f[i].nombreFrituras, f[i].nombreProveedor, f[i].tipoProducto, f[i].costoFrituras);
		
		printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");	
	
	}
	
	printf("\n");
	
}

void buscarFrituras(struct Frituras *f){
	
	int i, id;
	
	printf("Introduzca el ID a buscar: ");
	scanf("%d", &id);
	
	for(i = 0; i < ingresarFrituras; i++){
		
		if(id == f[i].idFrituras){
			
			printf(":::::::::::::::::::::::");
			printf("\n:PRODUCTO EXISTENTE   :");
			printf("\n:::::::::::::::::::::::");
			
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
			printf("\nDATOS DEL PRODUCTO:                                                       :");
			printf("\n\nProducto: %s                                                            :", f[i].nombreFrituras);
			printf("\nProveedor: %s                                                         :", f[i].nombreProveedor);
			printf("\nTipo Producto: %s                                                          :", f[i].tipoProducto);
			printf("\nPrecio: %.2f                                     :", f[i].costoFrituras);
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

void modificarFrituras(struct Frituras *f){

	int i, id;
	
	printf("Introduzca el ID a modificar: ");
	scanf("%d", &id);
	
	for(i = 0; i < ingresarFrituras; i++){
		
		if(id == f[i].idFrituras){
			
			printf(":::::::::::::::::::::::");
			printf("\nPRODUCTO A MODIFICAR :");
			printf("\n:::::::::::::::::::::::");
			
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
			printf("\nDATOS DEL PRODUCTO:                                                       :");
			printf("\n\nID: %d                                                                     :", f[i].idFrituras);
			printf("\nProducto: %s                                                            :", f[i].nombreFrituras);
			printf("\nProveedor: %s                                                         :", f[i].nombreProveedor);
			printf("\nTipo Producto: %s                                                           :", f[i].tipoProducto);
			printf("\nPrecio: %.2f                                     :", f[i].costoFrituras);
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
			
			printf("\n\n\n::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca su ID: "); 
			scanf("%d", &f[ingresarFrituras - 1].idFrituras); printf("                                         :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
			
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el nombre del producto: ");
			scanf("%s", f[ingresarFrituras - 1].nombreFrituras); printf("                                         :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
			
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el nombre del proveedor: ");
			scanf("%s", f[ingresarFrituras - 1].nombreProveedor); printf("                                                 :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el tipo de producto: ");  
			scanf("%s", f[ingresarFrituras - 1].tipoProducto); printf("                                                 :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el precio: ");
			scanf("%f", &f[ingresarFrituras - 1].costoFrituras); printf("                                                        :");
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

void eliminarFrituras(struct Frituras *f){
	
	int i, id;
	
	printf("Introduzca su ID: ");
	scanf("%d", &id);
	
	for(i = 0; i < ingresarFrituras; i++){
		
		if(id == f[i].idFrituras){
			
			f[i].idFrituras = f[i + 1].idFrituras;
			strcpy(f[i].nombreFrituras, f[i + 1].nombreFrituras);
			strcpy(f[i].nombreProveedor, f[i + 1].nombreProveedor);
			strcpy(f[i].tipoProducto, f[i + 1].tipoProducto);
			f[i].costoFrituras = f[i + 1].costoFrituras;
			
			ingresarFrituras--;
			
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
