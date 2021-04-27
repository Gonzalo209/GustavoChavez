/*
	Crear código fuente (divisas.c), el programa debe pedir una cantidad al usuario 
	y convertirla a alguna de las divisas disponibles (euro, dolar estadounidense o libra).
	
*/

#include <stdio.h>
#include <stdlib.h>
/*
-----------------------------
LAS MACROS LA UTILIZAMOS PARA
DEFINIR UN VALOR CONSTANTE
PARA QUE NO LO ALTEREMOS.
-----------------------------
*/
#define PESOS1 23.99
#define PESOS2 19.81
#define PESOS3 27.55
#define EUROS 0.042
#define DOLARES 0.050
#define LIBRAS 0.036

int main(){
	
	//VARIABLES LOCALES.
	
	float euros = 0.0, conversion = 0.0, dolares = 0.0, libras = 0.0, pesos = 0.0;
	int divisas;
	char tecla, convertir;
	
	do{
		
		/*
		---------------------------------------
		REALIZAMOS NUESTRO MENÚ DE 4 OPCIONES
		DEL CONVERSOR DE MONEDAS
		--------------------------------------
		*/
		printf("\n\n\t\t--------------------------------------------------\n");
		printf("\t\t\t\tCONVERSOR DE MONEDAS                            ");
		printf("\n\t\t--------------------------------------------------\n");	
		printf("\n\n1.Conversor de euros a pesos o pesos a euros\n2.Conversos de dolar estadounidense a pesos o de pesos a dolar estadounidense"
		" \n3.Conversor de libras a pesos o de pesos a libras\n4.Salir");
		printf("\nEliga una opcion, por favor: ");
		scanf("%d", &divisas);
		
		switch(divisas){
			
			case 1:
				
				printf("\n\n\t\t---------------------------------------------------------\n");
				printf("\t\t\tCONVERSOR EUROS A PESOS O DE PESOS A EUROS          ");
				printf("\n\t\t-----------------------------------------------------------\n");
				
				printf("Si desea hacer la conversion de euros a pesos, introduca una [e], por favor: \n");
				printf("Si desea hacer la conversion de pesos a euros, introduca una [p], por favor: \n");
				printf("\nIngrese la letra [e] o [p]: ");
				scanf("%s", &convertir);
				
				if(convertir == 'e'){
				
				printf("\n\n\t\t--------------------------------------------------\n");
				printf("\t\t\t\tCONVERSOR DE EUROS A PESOS                            ");
				printf("\n\t\t--------------------------------------------------\n");
				
				printf("\nIngrese el total de euros a cambiar: ");
				scanf("%f", &euros);
				
				conversion = euros * PESOS1;
				
				printf("\nLa conversion de euros a pesos es de: \n\n %.2f euros = %.2f pesos", euros, conversion);
				
				}
				
				else
					if(convertir == 'p'){
					
				printf("\n\n\t\t--------------------------------------------------\n");
				printf("\t\t\t\tCONVERSOR DE PESOS A EUROS                            ");
				printf("\n\t\t--------------------------------------------------\n");
				
				printf("\nIngrese el total de pesos a cambiar: ");
				scanf("%f", &pesos);
				
				conversion = pesos * EUROS;
				
				printf("\nLa conversion de pesos a euros es de: \n\n %.2f pesos = %.2f euros", euros, conversion);	
					
				}
				
				else{
					
					printf("\nError");
					
				}
				
				printf("\nPresione la tecla s o S, por favor: ");
				scanf("%s", &tecla);
				
				if(tecla == 's' || tecla == 'S'){
					
					system("cls"); //system("clear");
					
				}
				
					
				break;
				
			case 2:
				
				printf("\n\n\t\t---------------------------------------------------------\n");
				printf("\t\t\tCONVERSOR DOLARES A PESOS O DE PESOS A DOLARES          ");
				printf("\n\t\t-----------------------------------------------------------\n");
				
				printf("Si desea hacer la conversion de dolares a pesos, introduca una [d], por favor: \n");
				printf("Si desea hacer la conversion de pesos a euros, introduca una [p], por favor: \n");
				printf("\nIngrese la letra [d] o [p]: ");
				scanf("%s", &convertir);
				
				if(convertir == 'd'){
				
				
				printf("\n\n\t\t--------------------------------------------------\n");
				printf("\t\t\t\tCONVERSOR DE DOLARES A PESOS                            ");
				printf("\n\t\t--------------------------------------------------\n");
				
				printf("\nIngrese el total de dolares a cambiar: ");
				scanf("%f", &dolares);
				
				conversion = dolares * PESOS2;
				
				printf("La conversion de dolares a pesos es de: \n\n %.2f dolares = %.2f pesos", dolares, conversion);
				
				}
				
				else
					if(convertir == 'p'){
					
				printf("\n\n\t\t--------------------------------------------------\n");
				printf("\t\t\t\tCONVERSOR DE PESOS A DOLARES                            ");
				printf("\n\t\t--------------------------------------------------\n");
				
				printf("\nIngrese el total de pesos a cambiar: ");
				scanf("%f", &pesos);
				
				conversion = pesos * DOLARES;
				
				printf("La conversion de pesos a dolares es de: \n\n %.2f pesos = %.2f dolares", pesos, conversion);
					
				}
				
				else{
					
					printf("\nError");
					
				}
				
				printf("\nPresione la tecla s o S, por favor: ");
				scanf("%s", &tecla);
				
				if(tecla == 's' || tecla == 'S'){
					
					system("cls"); //system("clear");
					
				}
				
				break;
				
			case 3:
			
				printf("\n\n\t\t---------------------------------------------------------\n");
				printf("\t\t\tCONVERSOR LIBRAS A PESOS O DE PESOS A LIBRAS          ");
				printf("\n\t\t-----------------------------------------------------------\n");
				
				printf("Si desea hacer la conversion de libras a pesos, introduca una [l], por favor: \n");
				printf("Si desea hacer la conversion de pesos a libras, introduca una [p], por favor: \n");
				printf("\nIngrese la letra [d] o [p]: ");
				scanf("%s", &convertir);
				
				if(convertir == 'l'){
						
				printf("\n\n\t\t--------------------------------------------------\n");
				printf("\t\t\t\tCONVERSOR DE LIBRAS A PESOS                            ");
				printf("\n\t\t--------------------------------------------------\n");
				
				printf("\nIngrese el total de libras a cambiar: ");
				scanf("%f", &libras);
				
				conversion = libras * PESOS3;
				
				printf("La conversion de libras a pesos es de: \n\n %.2f libras = %.2f pesos", libras, conversion);
				
				}
				
				else
					if(convertir == 'p'){
						
					printf("\n\n\t\t--------------------------------------------------\n");
					printf("\t\t\t\tCONVERSOR DE PESOS A LIBRAS                            ");
					printf("\n\t\t--------------------------------------------------\n");
				
					printf("\nIngrese el total de pesos a cambiar: ");
					scanf("%f", &pesos);
				
					conversion = pesos * LIBRAS;
				
					printf("La conversion de pesos a libras es de: \n\n %.2f pesos = %.2f libras", pesos, conversion);	
					
					
					
				}
				
				else{
					
					printf("\nError");
					
				}
				
				printf("\nPresione la tecla s o S, por favor: ");
				scanf("%s", &tecla);
				
				if(tecla == 's' || tecla == 'S'){
					
					system("cls"); //system("clear");
					
				}
			
				break;
				
			case 4:
				
				printf("\nHASTA LUEGO, VUELVA PRONTO:)");
				
				break;
				
			default:
			
				printf("\nIngrese una opcion del 1 al 3 o si desea salir eliga la opcion 4\n");
				
				printf("\nPresione la tecla s o S, por favor: ");
				scanf("%s", &tecla);
				
				if(tecla == 's' || tecla == 'S'){
					
					/*
					-------------------
					SYSTEM CLS SIRVE,
					PARA LIMPIAR LA PANTALLA
					Y NO SE VE AMONTONADO
					-------------------
					*/
					system("cls"); //system("clear"); 
					
				}
				
				break;		
			
			
		}
		
	}while(divisas != 4); //HASTA QUE NOSOTROS DIGITEMOS EL NÚMERO 4 SE SALDRÁ DEL SISTEMA.
	
	
	
	return 0;
} 	
