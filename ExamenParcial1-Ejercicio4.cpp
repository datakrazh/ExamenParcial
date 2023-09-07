#include <stdio.h>

int main() {
     
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
