/*
Instrucciones:
	Subir 5 programas diferentes
1er programa: a partir del n�mero que das sumar 10 n�meros
2do programa: a partir del n�mero que das sumar desde el 1 hasta el que das
3er programa: a partir del n�mero que das obtiene los impares hasta el n�mero que diste
4to programa: a partir del n�mero que das obtiene su tabla de multiplicar
5to programa: a partir del n�mero que das suma los d�gitos de ese n�mero
6to programa: a partir del n�mero que das decir si es negativo y finalizar
7mo programa: a partir del n�mero que das hace un �rbol con n pisos arriba y abajo
*/

#include<stdio.h>

int main(){
/*
Se pone el valor escrito en "l�mite"
Mientras el n�mero (ahora 0) sea menor al l�mite impuesto:
	Sumar� +1 al 0
	imprimir� salto de l�nea, el valor del n�mero 0+1, salto de l�nea
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
