#include<stdio.h>

int main(){
/*
Se imprimir� la pregunta de cu�l ser� el l�mite
Se pone el valor escrito en "l�mite"
Mientras el n�mero (ahora 0) sea menor al l�mite impuesto:
	Sumar� +1 al 0
Si el resto de la divisi�n entera de "n�mero" entre 2 es diferente de 0 (si es impar)
	imprimir� salto de l�nea, el valor del n�mero 0+1, salto de l�nea
FIN
*/
	int limite;
	int numero=0;
	
	printf("hasta que numero quieres analizar los impares: ");
	scanf("%d", &limite);
	
	while (numero<limite){
	numero=numero+1;
	
	if (numero%2!=0){
		
		printf("\n%d\n", numero);	
	}
}


		
	
	
	
	return 0;
	
}
