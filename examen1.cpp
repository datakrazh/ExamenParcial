#include<stdio.h>

int main(){
/*
Se imprimirá la pregunta de cuál será el límite
Se pone el valor escrito en "límite"
Mientras el número (ahora 0) sea menor al límite impuesto:
	Sumará +1 al 0
Si el resto de la división entera de "número" entre 2 es diferente de 0 (si es impar)
	imprimirá salto de línea, el valor del número 0+1, salto de línea
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
