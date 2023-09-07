#include <stdio.h>

int main() {
/*
Se solicitará un número y se registra en "numero"
Mientras el número sea mayor o igual a cero
	Se imprimirá un aviso de que es un entero
 	Se dejará un espacio para poner el siguiente número
Mientras no se cumpla con las condiciones anteriores y por lo tanto "numero" no sea igual  o mayor a cero se imprimirá el aviso de que es negativo
*/
int numero;

    printf("Escoge un numero: ");
    scanf("%d",&numero);

while (numero>=0)
	{
		printf("Este numero es positivo, escoge otro que no lo sea: ");
		scanf("%d",&numero);
	}

	printf("Este numero es negativo");

    return 0;
}
