/*
Instrucciones:
	Subir 5 programas diferentes
1er programa: a partir del número que das sumar 10 números
2do programa: a partir del número que das sumar desde el 1 hasta el que das
3er programa: a partir del número que das obtiene los impares hasta el número que diste
4to programa: a partir del número que das obtiene su tabla de multiplicar
5to programa: a partir del número que das suma los dígitos de ese número
6to programa: a partir del número que das decir si es negativo y finalizar
7mo programa: a partir del número que das hace un árbol con n pisos arriba y abajo
*/

#include<stdio.h>

int main(){
/*
Se pone el valor escrito en "límite"
Mientras el número (ahora 0) sea menor al límite impuesto:
	Sumará +1 al 0
	imprimirá salto de línea, el valor del número 0+1, salto de línea
FIN
*/
	int limite;
	int numero=0;
	
	printf("hasta que numero quieres analizar los impares: ");
	scanf("%d", &limite);
	
	while (numero<limite){
	numero=numero+1;
	
	
		
		printf("\n%d\n", numero);	
	
}


		
	
	
	
	return 0;
	
}
