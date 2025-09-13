/* https://www.youtube.com/watch?v=YJ9JbeJN1Q4&list=PL4LsnY2J10q2PE4ZLnJM0T-YuhW7tbdjN&index=11

6-  Escribir un programa que lea una letra minuscula y que la muestre en mayusculas en pantalla

En este video se escribe un programa que lee una letra minúscula por teclado y muestra la misma 
letra pero en mayúscula. Se revisa la disposición de las letras en la tabla ASCII.

*/

#include<stdio.h>

int main(){
char letra;

printf("Ingrese una letra minuscula: ");
scanf("%c", &letra);

char mayuscula = letra - 'a' + 'A';

printf("La letra mayuscula es: %c\n", mayuscula);

return 0;
}

/*
En la tabla ASCII 
A->65  B->66 ..........
0->97  b->98 ..........

Cuando escribimos 'a' esta poniendo su valor numerico correspondiente en la tabla ASCII

La distancia entre la 'a' y la 'A' es la misma entre la 'b' y la 'B', y se cumple para todas las letras

Por eso la expresion 'a' + 'A' nos permite poder convertir cualquier letra en su mayuscula correspondiente



*/