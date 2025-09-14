/* https://www.youtube.com/watch?v=UpAKU2x_gTQ&list=PL4LsnY2J10q2PE4ZLnJM0T-YuhW7tbdjN&index=22

En este video inicialmente se expone la organización de datos en memoria, las direcciones de memoria y los espacios ocupados por los tipos de datos; 
para luego definir el concepto de puntero. Se presentan los operadores & y *, y ejemplos básicos de asignación de dirección a un puntero y acceso a la variable apuntada.

*/

#include<stdio.h>

int main(){

    int a = 5, b = 10;

    //scanf("%d", &a); //mencionamos que era la "direccion de a"

    printf("La direccion de la variable es %p\n", &a);
    /* "&" ---> direccion de una variable */

    int *p;
    p = &a; //p apunta a la variable "a"

    printf("El valor de p es: %p\n", p);

    *p = 10;

    printf("El valor de a es:  %d\n", a);

    printf("La direccion de la variable b es: %p\n", &b);
    
    p =&b;
    *p = *p + a;
    int *q = &a;
   
    printf("El valor de b es:  %d\n", b);
    printf("La suma de a y b es:  %d\n", *p+*q);




    return 0;
}

/*
    Operaciones principales:
    1)Asignar una direccion a un puntero
    int *p;
    p = &a;  //cuando queremos que un puntero apunte a una variable, le mandamos la direccion de esa variable

    2)Acceder al valor que almacena la variable al que se esta apuntando
    *p = 10;

    En resumen, Un puntero es una variable que almacena la direccion de otra variable

    Ej:
    
    int a= 5;
    int *q;    //se declara un puntero a tipo int
    q = &a;    //guardamos la direccion de a en q
    *q = 10;   //modificamos el valor de a



*/