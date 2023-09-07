#include <stdio.h>

int main() {
/*
Se pedirá un número que se guardará en la int numero
Se pedirá otro número que seguardará en la int lim
La primer cantidad determinará el multiplicando y la segunda el multiplicador
Mientras el incremento, que representa el aumento en el valor del multiplicador más adelante, sea menor que el límite que nosotros establecimos:
     El incremento subirá su valor en 1
     El resultado lo determinamos como el resultado de la multiplicación
     Imprimiremos el resultado de la multiplicación en sentido de que se lee "número (multiplicando)" * "incremento (multiplicador)" = "resultado"
Se imprimirá que terminó el programa (esto como guía para saber que funcionaba el while)
*/
int numero;
int incremento=0;
int resultado;
int lim;

printf("Escoge un numero: ");
scanf("%d",&numero);
printf("Escoge hasta que tabla de multiplicar del numero dado quieres saber: ");
scanf("%d",&lim);


while (incremento<lim){
incremento=incremento+1;
resultado=numero*incremento;
printf("%dx%d=%d\n", numero, incremento, resultado);
}
printf("FIN");

    return 0;
}
