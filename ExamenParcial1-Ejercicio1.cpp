#include <stdio.h>

int main() {
/*
Se pedir� un n�mero que se guardar� en la int inicio
Este n�mero determinar� a de d�nde parte nuestro proceso
El l�mite (lim) se da para dar un fin habiendo llegado a 10 n�meros pasados de nuestro numero de origen
Mientras el inicio que nosotros determinamos sea distinto del l�mite que ser�a el �ltimo n�mero (que suma 10):
	A inicio se le sumar� de 1 en 1
	Al texto que aparecer� en cada ciclo de while, se le ir� agregando +1
	Se imprimir� el +1, +2, etc. para mostrar que hay una progresi�n como si se le fueran sumando al n�mero original
	y se mostrar� el n�mero de inicio que ahora ser� el resultado de la suma de +1 hasta llegar al l�mite
FIN
*/
int lim=0;
int inicio;
int secuencia=0;

printf("Escoge a partir de que numero quieres empezar a sumar 10: ");
scanf("%d",&inicio);
lim=inicio+10;
while (inicio!=lim){
inicio=inicio+1;
secuencia=secuencia+1;
printf("+%d= %d\n",secuencia, inicio);
}
printf("FIN");

    return 0;
}
