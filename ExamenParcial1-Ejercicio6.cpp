#include <stdio.h>

int main() {
     
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
