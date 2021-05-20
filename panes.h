#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int ingresarPanes;


struct Panes{
	
	int idPanes;
	char nombrePanes[20], nombreProveedor[20],  
		 tipoProducto[20];
	float costoPanes;	 
		 
}panes[30];

void ingresaPanes(struct Panes *);
void enlistarPanes(struct Panes *);
void buscarPanes(struct Panes *);
void modificarPanes(struct Panes *);
void eliminarPanes(struct Panes *);

void ingresaPanes(struct Panes *p){
	
	int agregar;
	
	do{
	
		if(ingresarPanes < 30){
			
			printf("\n\n:::::::::::::::::::::::::::::::::::::::::\n");
			printf(":\t\tREGISTO DE PANES %d", ingresarPanes + 1); printf("             :");
			printf("\n:::::::::::::::::::::::::::::::::::::::::\n");
				
			printf("\n:::::::::::::::::::::::::::::::::::::::::\n");
			printf(":Introduzca su ID: "); 
			scanf("%d", &p[ingresarPanes].idPanes); printf("                                         :");
			printf("\n:::::::::::::::::::::::::::::::::::::::::\n");
				
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
			printf(":Introduzca el nombre de los panes: ");
			scanf("%s", p[ingresarPanes].nombrePanes); printf("                                         :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
				
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf(":Introduzca el nombre del proveedor: ");
			scanf("%s", p[ingresarPanes].nombreProveedor); printf("                                                 :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
				
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf(":Introduzca el tipo del producto: ");  
			scanf("%s", p[ingresarPanes].tipoProducto); printf("                                                 :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
				
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf(":Introduzca el precio del producto: ");
			scanf("%f", &p[ingresarPanes].costoPanes); printf("                                                        :");
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf(":EL PRODUCTO HA SIDO REGISTRADO, CON EXITO              :");
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			
			ingresarPanes++;
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

void enlistarPanes(struct Panes *p){
	
	int i;
	
	printf("\t\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf("\tID\t:\tPRDOUCTO\t:\tPROVEEDOR\t:\tTIPO PRODUCTO\t:\tPRECIO:");
	printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	
	for(i = 0; i < ingresarPanes; i++){
		
		printf("\t%d\t:\t%s\t:\t%s\t:\t%s\t:\t%.2f\t:", p[i].idPanes, p[i].nombrePanes, p[i].nombreProveedor, p[i].tipoProducto, p[i].costoPanes);
		
		printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	}
	
	printf("\n");
	
}

void buscarPanes(struct Panes *p){
	
	int i, id;
	
	printf("Introduzca el ID a buscar: ");
	scanf("%d", &id);
	
	for(i = 0; i < ingresarPanes; i++){
		
		if(id == p[i].idPanes){
			
			printf(":::::::::::::::::::::::");
			printf("\n:PRODUCTO EXISTENTE   :");
			printf("\n:::::::::::::::::::::::");
			
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
			printf("\nDATOS DEL PRODUCTO:                                                       :");
			printf("\n\nProducto: %s                                                            :", p[i].nombrePanes);
			printf("\nProveedor: %s                                                         :", p[i].nombreProveedor);
			printf("\nTipo Producto: %s                                                          :", p[i].tipoProducto);
			printf("\nPrecio: %.2f                                     :", p[i].costoPanes);
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

void modificarPanes(struct Panes *p){

	int i, id;
	
	printf("Introduzca el ID a modificar: ");
	scanf("%d", &id);
	
	for(i = 0; i < ingresarPanes; i++){
		
		if(id == p[i].idPanes){
			
			printf(":::::::::::::::::::::::");
			printf("\nPRODUCTO A MODIFICAR :");
			printf("\n:::::::::::::::::::::::");
			
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
			printf("\nDATOS DEL PRODUCTO:                                                       :");
			printf("\n\nID: %d                                                                     :", p[i].idPanes);
			printf("\nProducto: %s                                                            :", p[i].nombrePanes);
			printf("\nProveedor: %s                                                         :", p[i].nombreProveedor);
			printf("\nTipo Producto: %s                                                           :", p[i].tipoProducto);
			printf("\nPrecio: %.2f                                     :", p[i].costoPanes);
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
			
			printf("\n\n\n::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca su ID: "); 
			scanf("%d", &p[ingresarPanes - 1].idPanes); printf("                                         :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
			
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el nombre del producto: ");
			scanf("%s", p[ingresarPanes - 1].nombrePanes); printf("                                         :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
			
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el nombre del proveedor: ");
			scanf("%s", p[ingresarPanes - 1].nombreProveedor); printf("                                                 :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el tipo de producto: ");  
			scanf("%s", p[ingresarPanes - 1].tipoProducto); printf("                                                 :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el precio: ");
			scanf("%f", &p[ingresarPanes - 1].costoPanes); printf("                                                        :");
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

void eliminarPanes(struct Panes *p){
	
	int i, id;
	
	printf("Introduzca su ID: ");
	scanf("%d", &id);
	
	for(i = 0; i < ingresarPanes; i++){
		
		if(id == p[i].idPanes){
			
			p[i].idPanes = p[i + 1].idPanes;
			strcpy(p[i].nombrePanes, p[i + 1].nombrePanes);
			strcpy(p[i].nombreProveedor, p[i + 1].nombreProveedor);
			strcpy(p[i].tipoProducto, p[i + 1].tipoProducto);
			p[i].costoPanes = p[i + 1].costoPanes;
			
			ingresarPanes--;
			
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
