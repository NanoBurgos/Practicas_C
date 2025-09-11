/*https://www.youtube.com/watch?v=hW68tcCIfdY&list=PL4LsnY2J10q2PE4ZLnJM0T-YuhW7tbdjN&index=7

Luego de ingresar el radio por teclado, hallar la cia y el area de un circulo

En este video se escribe un programa que calcula la circunferencia y el círculo a partir del radio (ingresado por teclado).
*/
#include<stdio.h>

#define pi 3.1415

int main(){
    float radio;
    printf("Ingrese el valor del Radio: ");
    scanf("%f", &radio); 
    //%f indica que vamos a ingresar algo float=decimal
    //&radio indica que vamos a cargar lo que se introduce en la direccion de radio

    float cia = 2*pi*radio;
    float circulo = pi*radio*radio;

    printf("\nLa CIA es: %.3f", cia);
    printf("\nEl Area es: %.3f", circulo);

    return 0;
}

/*
El define pi 3.1415 es para decirle al compilador que cada vez que encuente "pi" reemplace por el valor que le decimos al lado
¿Para que definimos asi una variable?, cuando esa variable esta en muchas operaciones, si queremos que el calculo sea mas exacto,
debemos agregarle mas decimales a pi
entonces definimos de una forma global, para no tener que estar modificando uno a uno en los lugares que aparezca

\n es un salto de linea, para que los mensajes no salgan encimados

%.3f  el .3 antes de la f indica la cantidad de decimales que queremos mostrar 

*/