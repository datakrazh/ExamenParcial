#include <stdio.h>

int main() {
/*
Se pedirá un número que se guardará en la int inicio
Este número determinará a de dónde parte nuestro proceso
El límite (lim) se da para dar un fin habiendo llegado a 10 números pasados de nuestro numero de origen
Mientras el inicio que nosotros determinamos sea distinto del límite que sería el último número (que suma 10):
	A inicio se le sumará de 1 en 1
	Al texto que aparecerá en cada ciclo de while, se le irá agregando +1
	Se imprimirá el +1, +2, etc. para mostrar que hay una progresión como si se le fueran sumando al número original
	y se mostrará el número de inicio que ahora será el resultado de la suma de +1 hasta llegar al límite
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
