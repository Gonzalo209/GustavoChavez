#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int ingresarDatos;

struct Proveedores{
	
	int idProveedor, telefonoProveedor;
	char nombreProveedor[20], nombreProducto[20], 
		 correoProveedor[20];
	
}proveedor[30];

void ingresarProveedores(struct Proveedores *);
void enlistarProveedores(struct Proveedores *);
void buscarProveedores(struct Proveedores *);
void modificarProveedores(struct Proveedores *);
void eliminarProveedores(struct Proveedores *);

void ingresarProveedores(struct Proveedores *p){
	
	int agregar;
	
	do{
	
		if(ingresarDatos < 30){
			
			printf("\n\n::::::::::::::::::::::::::::::::::::::::::\n");
			printf(":\t\tPROVEEDOR %d", ingresarDatos + 1); printf("             :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::::\n");
				
			printf("\n::::::::::::::::::::::::::::::::::::::::::::\n");
			printf(":Introduzca su ID: "); 
			scanf("%d", &p[ingresarDatos].idProveedor); printf("                                         :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::::\n");
				
			printf("\n::::::::::::::::::::::::::::::::::::::::::::\n");
			printf(":Introduzca su nombre: ");
			scanf("%s", p[ingresarDatos].nombreProveedor); printf("                                         :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::::\n");
				
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf(":Introduzca el nombre del producto: ");
			scanf("%s", p[ingresarDatos].nombreProducto); printf("                                                 :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
				
			printf("\n:::::::::::::::::::::::::::::::::::::::::::\n");
			printf(":Introduzca su numero telefonico: ");  
			scanf("%d", &p[ingresarDatos].telefonoProveedor); printf("                                                 :");
			printf("\n:::::::::::::::::::::::::::::::::::::::::::\n");
				
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf(":Ingrese su correo electronico: ");
			scanf("%s", p[ingresarDatos].correoProveedor); printf("                                                        :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf(":EL PROVEEDOR HA SIDO REGISTRADO, CON EXITO              :");
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			
			ingresarDatos++;
		}
		
		else{
			
			printf("\nEl espacio en la memoria se lleno");
			
		}
	
		printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
		printf(":Desea agregar otro proveedor [Si = 1] [No = 0]: ");
		scanf("%d", &agregar); printf("                                                    :");
		printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	
	}while(agregar != 0);
	
}

void enlistarProveedores(struct Proveedores *p){
	
	int i;
	
	printf("\t\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf("\tID\t:\tPROVEEDOR\t:\tPRODUCTO\t:\tTELEFONO\t:\tCORREO\t\t\t:");
	printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	
	
	for(i = 0; i < ingresarDatos; i++){
		
		printf("\t%d\t:\t%s\t\t:\t%s\t\t:\t%d\t\t:\t%s\t:", p[i].idProveedor, p[i].nombreProveedor, p[i].nombreProducto, p[i].telefonoProveedor, p[i].correoProveedor);
		
		printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	
	}
	
	printf("\n");
}

void buscarProveedores(struct Proveedores *p){
	
	int i = 0, id;
	
	printf("Introduzca el ID a buscar: ");
	scanf("%d", &id);
	
	for(i = 0; i < ingresarDatos; i++){
		
		if(id == p[i].idProveedor){
			
			printf(":::::::::::::::::::::::");
			printf("\n:PROVEEDOR EXISTENTE   :");
			printf("\n:::::::::::::::::::::::");
			
			
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
			printf("\n:DATOS DEL PROVEEDOR:                                                       :");
			printf("\n\n:Nombre: %s                                                               :", p[i].nombreProveedor);
			printf("\n:Producto: %s                                                               :", p[i].nombreProducto);
			printf("\n:Telefono: %d                                                               :", p[i].telefonoProveedor);
			printf("\n:Correo electronico: %s                                                     :", p[i].correoProveedor);
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");

		}
		
		/*
		else{
			
			printf("\n-------------------------------------------------------------------------\n");
			printf("\t\tEL PROVEEDOR A BUSCAR NO EXISTE               |\n");
			printf("-------------------------------------------------------------------------\n");
			
			
		}
		*/
		
	}
	
}

void modificarProveedores(struct Proveedores *p){
	
	int i, id;
	
	printf("Introduzca el ID a modificar: ");
	scanf("%d", &id);
	
	for(i = 0; i < ingresarDatos; i++){
		
		if(id == p[i].idProveedor){
			
			printf(":::::::::::::::::::::::");
			printf("\nPROVEEDOR A MODIFICAR :");
			printf("\n:::::::::::::::::::::::");
			
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
			printf("\n:DATOS DEL PROVEEDOR:                                                       :");
			printf("\n\n:ID: %d                                                                     :", p[i].idProveedor);
			printf("\n:Nombre: %s                                                            :", p[i].nombreProveedor);
			printf("\n:Producto: %s                                                         :", p[i].nombreProducto);
			printf("\n:Telefono: %d                                                           :", p[i].telefonoProveedor);
			printf("\n:Correo electronico: %s                                     :", p[i].correoProveedor);
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	
			
			printf("\n\n\n::::::::::::::::::::::::::::::::::::::::::\n");
			printf(";Introduzca su ID: "); 
			scanf("%d", &p[ingresarDatos - 1].idProveedor); printf("                                         :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
			
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
			printf(":Introduzca su nombre: ");
			scanf("%s", p[ingresarDatos - 1].nombreProveedor); printf("                                         :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
			
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf(":Introduzca el nombre del producto: ");
			scanf("%s", p[ingresarDatos - 1].nombreProducto); printf("                                                 :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf(":Introduzca su numero telefonico: ");  
			scanf("%d", &p[ingresarDatos - 1].telefonoProveedor); printf("                                                 :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf(":Ingrese su correo electronico: ");
			scanf("%s", p[ingresarDatos - 1].correoProveedor); printf("                                                        :");
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			
			
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf(":\t\tLOS DATOS SE HAN MODIFICADO, CON EXITO            :");
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			
		}
		
		/*
		else{
			
			printf("\n-------------------------------------------------------------------------\n");
			printf("\t\tEL PROVEEDOR A MODIFICAR NO EXISTE          |\n");
			printf("-------------------------------------------------------------------------\n");
			
		
		}
		*/
			
	}
	
}

void eliminarProveedores(struct Proveedores *p){
	
	int i, id, j;
	char seguro;
	
	
	printf("Introduzca su ID: ");
	scanf("%d", &id);
	
	printf("Esta seguro de eliminar al proveedor [Si = s][No = n]: ");
	fflush(stdin);
	scanf("%c", &seguro);
	
	if(seguro == 's'){
	
		for(i = 0; i < ingresarDatos - 1; i++){
			
			for(j = 0; j < ingresarDatos; j++){
			
			
				if(id == p[i].idProveedor){
					
					
					p[i].idProveedor = p[j + 1].idProveedor;
					strcpy(p[i].nombreProveedor, p[j + 1].nombreProveedor);
					strcpy(p[i].nombreProducto, p[j + 1].nombreProducto);
					p[i].telefonoProveedor = p[j + 1].telefonoProveedor;
					strcpy(p[i].correoProveedor, p[j + 1].correoProveedor);
					
					ingresarDatos --;
					
					printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");			
					printf(":\t\tPROVEEDOR ELIMINADO                :");
					printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
					
				}
			
			}
			
		}
	
	}
	
	else{
		
		printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");			
		printf(":\t\tNO SE ELIMINO EL PROVEEDOR                :");
		printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
		
	}
		/*
		else{
			
			printf("\n-------------------------------------------------------------------------\n");
			printf("\t\tEL PROVEEDOR A ELIMINAR, NO EXISTE               |");
			printf("\n-------------------------------------------------------------------------\n");
			
			break;
		}
		*/
	
	
}
