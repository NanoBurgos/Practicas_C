/* https://www.youtube.com/watch?v=PsSqshGNyXo&list=PL4LsnY2J10q2PE4ZLnJM0T-YuhW7tbdjN&index=8 

3- Escribir un programa que permita la introduccion por teclado (mediante getchar) de dos valores enteros de una cifra
y que calcule e imprima en pantalla el producto de ellos

En este video se escribe un programa que, utilizando getchar(), lee dos números de una cifra por teclado y calcula su 
producto. Se revisa la relación entre un caracter y su representación según la tabla ASCII.*/

#include<stdio.h>
int main(){
    char n1, n2;

    printf("Ingrese el primer numero de una cifra: ");
    n1 = getchar();

    // '0' --> 48 eN CODIGO ASCII

    int n1_real = n1-48;

    getchar(); //para que absorba el enter despues de introducir el primer numero

    printf("Ingrese el segundo numero de una cifra: ");
    n2 = getchar();

    int n2_real = n2-48;

    printf("El producto es: %d ", n1_real*n2_real);

    return 0;
}

/*No hace falta recordad que valor representa un caracter en la tabla ASCII, 
en vez de escribir n1-48, podiamos hacer n1-'0' 
y C ya interpreta como el entero que representa a ese caracter*/