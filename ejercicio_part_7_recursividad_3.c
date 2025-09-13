/* https://www.youtube.com/watch?v=JBU-QJsG_aY&list=PL4LsnY2J10q2PE4ZLnJM0T-YuhW7tbdjN&index=16

Escribir una funcion que reciba una cadena y la convierta en Mayusculas

En este video se escribe un programa que convierte a mayúsculas y luego a minúsculas (mediante funciones respectivas) una cadena ingresada por teclado. 

Se repasa además los aspectos en cuando al manejo de cadenas en C, la lectura de cadenas por teclado, y la relación de los caracteres con números enteros.

*/

#include<stdio.h>

//Los cambios que se hagan en esta funcion se van a reflejar en el vector original
void convertirMayusculas(char cadena[]){ //generalmente al pasar una cadena, tambien debemos de pasar su tamaño
    int i = 0;
    while(cadena[i]!='\0'){ // '\0' indica el final de la cadena, el bucle se reperira hasta que encuentre ese caracter al final de la cadena
        if(cadena[i]>='a' && cadena[i]<='z'){
            cadena[i] = cadena[i] - ('a' - 'A');
        }
        i++;    
    }

}

int main(){
    char cadena[100]; //definimos el tamaño maximo

    printf("Ingrese una frase: ");
    //scanf("%s", cadena);
    gets(cadena);

    convertirMayusculas(cadena);

    printf("\nLa cadena ingresada fue: %s\n",cadena);


    return 0;
}

/*
Una cadena en realidad es un arreglo o un vector de caracteres

"Las cadenas se ponen entre comillas dobles"

"hola que tal" --> '\0' la convencion en C, es que al final de la cadena se agrega un caracter mas

'\0' simboliza el final de la cadena

Tenemos dos Funciones principales para capturar cadenas, (ambas estan en stdio.h)
scanf("%s", cadena) en el caso de los vectores o cadenas, NO se pone el & (no se busca la direccion de la cadena)

void se usa cuando no se va a retornar nada
*/