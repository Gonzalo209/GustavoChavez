#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int ingresarGomitas;

struct Gomitas{
	
	int idGomitas;
	char nombreGomitas[20], nombreProveedor[20],  
		 tipoProducto[20];
	float costoGomitas;	 
		 
}gomitas[30];

void ingresaGomitas(struct Gomitas *);
void enlistarGomitas(struct Gomitas *);
void buscarGomitas(struct Gomitas *);
void modificarGomitas(struct Gomitas *);
void eliminarGomitas(struct Gomitas *);

void ingresaGomitas(struct Gomitas *g){
	
	int agregar;
	
	do{
	
		if(ingresarGomitas < 30){
			
			printf("\n\n:::::::::::::::::::::::::::::::::::::::::\n");
			printf("\t\tREGISTO DE GOMITAS %d", ingresarGomitas + 1); printf("             :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
				
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca su ID: "); 
			scanf("%d", &g[ingresarGomitas].idGomitas); printf("                                         :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
				
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el nombre de las gomitas: ");
			scanf("%s", g[ingresarGomitas].nombreGomitas); printf("                                         :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
				
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el nombre del proveedor: ");
			scanf("%s", g[ingresarGomitas].nombreProveedor); printf("                                                 :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
				
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el tipo del producto: ");  
			scanf("%s", g[ingresarGomitas].tipoProducto); printf("                                                 :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
				
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el precio del producto: ");
			scanf("%f", &g[ingresarGomitas].costoGomitas); printf("                                                        :");
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("EL PRODUCTO HA SIDO REGISTRADO, CON EXITO              :");
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			
			ingresarGomitas++;
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

void enlistarGomitas(struct Gomitas *g){
	
	int i;
	
	printf("\t\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf("\tID\t:\tPRDOUCTO\t:\tPROVEEDOR\t:\tTIPO PRODUCTO\t:\tPRECIO:");
	printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	
	for(i = 0; i < ingresarGomitas; i++){
		
		printf("\t%d\t:\t%s\t:\t%s\t:\t%s\t:\t%.2f\t:", g[i].idGomitas, g[i].nombreGomitas, g[i].nombreProveedor, g[i].tipoProducto, g[i].costoGomitas);
		
		printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");	
	}
	
	printf("\n");
	
}

void buscarGomitas(struct Gomitas *g){
	
	int i, id;
	
	printf("Introduzca el ID a buscar: ");
	scanf("%d", &id);
	
	for(i = 0; i < ingresarGomitas; i++){
		
		if(id == g[i].idGomitas){
			
			printf(":::::::::::::::::::::::");
			printf("\nPRODUCTO EXISTENTE   :");
			printf("\n:::::::::::::::::::::::");
			
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
			printf("\nDATOS DEL PRODUCTO:                                                       :");
			printf("\n\nProducto: %s                                                            :", g[i].nombreGomitas);
			printf("\nProveedor: %s                                                        	:", g[i].nombreProveedor);
			printf("\nTipo Producto: %s                                                          :", g[i].tipoProducto);
			printf("\nPrecio: %.2f                                     :", g[i].costoGomitas);
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

void modificarGomitas(struct Gomitas *g){

	int i, id;
	
	printf("Introduzca el ID a modificar: ");
	scanf("%d", &id);
	
	for(i = 0; i < ingresarGomitas; i++){
		
		if(id == g[i].idGomitas){
			
			printf(":::::::::::::::::::::::");
			printf("\nPRODUCTO A MODIFICAR :");
			printf("\n:::::::::::::::::::::::");
			
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
			printf("\nDATOS DEL PRODUCTO:                                                       :");
			printf("\n\nID: %d                                                                     :", g[i].idGomitas);
			printf("\nProducto: %s                                                            :", g[i].nombreGomitas);
			printf("\nProveedor: %s                                                         :", g[i].nombreProveedor);
			printf("\nTipo Producto: %s                                                           :", g[i].tipoProducto);
			printf("\nPrecio: %.2f                                     :", g[i].costoGomitas);
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
			
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca su ID: "); 
			scanf("%d", &g[ingresarGomitas - 1].idGomitas); printf("                                         :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
				
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el nombre de las gomitas: ");
			scanf("%s", g[ingresarGomitas - 1].nombreGomitas); printf("                                         :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n");
				
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el nombre del proveedor: ");
			scanf("%s", g[ingresarGomitas - 1].nombreProveedor); printf("                                                 :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
				
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el tipo del producto: ");  
			scanf("%s", g[ingresarGomitas - 1].tipoProducto); printf("                                                 :");
			printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
				
			printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
			printf("Introduzca el precio del producto: ");
			scanf("%f", &g[ingresarGomitas - 1].costoGomitas); printf("                                                        :");
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

void eliminarGomitas(struct Gomitas *g){
	
	int i, id;
	
	printf("Introduzca su ID: ");
	scanf("%d", &id);
	
	for(i = 0; i < ingresarGomitas; i++){
		
		if(id == g[i].idGomitas){
			
			g[i].idGomitas = 0;
			strcpy(g[i].nombreGomitas, " ");
			strcpy(g[i].nombreProveedor, " ");
			strcpy(g[i].tipoProducto, " ");
			g[i].costoGomitas = 0.0;
			
			ingresarGomitas--;
			
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
