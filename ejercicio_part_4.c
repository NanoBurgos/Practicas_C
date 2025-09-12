/* https://www.youtube.com/watch?v=HHdpfWxwC8w&list=PL4LsnY2J10q2PE4ZLnJM0T-YuhW7tbdjN&index=10

5-  Leer un numero de 5 cifras e imprimir el digito de las centenas

En este video se escribe un programa que calcula el dígito de centenas de un número de cinco cifras introducido por teclado. 
Se revisa la utilidad de los operadores / y % para ejercicios que involucren manipulación de dígitos.
*/

#include<stdio.h>

int main(){

    int n;

    printf("Ingrese un numero de 5 cifras: ");
    scanf("%d", &n);

    int n1 = n/100; //abc
    int n2 = n1%10; //c

    printf("El digito de las centenas es: %d", n2);

    return 0;
}
/*
En C cuando dividimos dos numeros enteros, el resultado da entero

1234/10 -> 123

abcde , si queremos el digito de las centenas "c" 
abcde/100 -> abc

% = resto de una division
125 % 5 -> 5
abc % 10 -> c

*/