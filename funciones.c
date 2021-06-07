/*
	-Pedir al usuario el valor que desea realizar el cálculo de factorial.
	-Cambiar el tipo de dato para poder hacer cálculo más grande.
	-Validar la entrada del usuario (que sea un entero positivo), en caso de no cumplir este requerimiento se 
	debe pedir un valor válido.
	-Una vez terminado el cálculo, preguntar al usuario si desea calcular otro valor o si desea salir del programa.
	
*/

#include <stdio.h>

double factorial(double x);

int main(){
	
	double numero, calculo;
	int condicion;
	
	do{
	
		//Ingresamos el número, para obtener el factorial.
		
		printf("\n\nIngrese un numero: ");
		scanf("%lf", &numero);
		
		
		//Si el número es mayor a 0, se hará el cálculo del factorial. 
		if(numero > 0){
		
			
			calculo = factorial (numero);
			
			printf("El factorial del numero %.0lf es de: %.0lf ", numero, calculo);
			
			
		}
		
		//En caso de que sea negativo, va a mostrar el siguiente mensaje, 
		//hasta que el usuario ingrese un número positivo.
		else{
			
			do{
					
				printf("\nOpcion invalida, intente de nuevo\n");
				
				printf("\nIngrese un numero positivo: ");
				scanf("%lf", &numero);
			
				calculo = factorial (numero);
				printf("El factorial del numero %.0lf es de: %.0lf ", numero, calculo);
				
			}while(numero < 0);	//Aqui hay un pequeño error, si volvemos a ingresar un número negativo, se rompe el programa.
						
		}
		
			//Si ingresamos el número 1 se volverá a pedir un número y podremos calcular otro factorial.
			//Al menos que el usuario desee ingresar el número 0, para salir.
			
			printf("\nDesea realizar otro calculo [Si=1][No=0]: ");
			scanf("%d", &condicion);
		
	}while(condicion != 0); 
		
	//Y cuando termine el programa se va a mostrar este mensaje.
		
	printf("\nVuelva pronto :)\n");
	
	return 0;
}

double factorial(double x){
	
	if(x == 0 || x == 1){
		
		return 1;
	}
	
	else{
		
		return x * factorial (x - 1);
	}
	
}
