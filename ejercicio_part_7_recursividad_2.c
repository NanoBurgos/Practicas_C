/* https://www.youtube.com/watch?v=f9RNFxZx7uc&list=PL4LsnY2J10q2PE4ZLnJM0T-YuhW7tbdjN&index=17

Escribir un programa que muestre el maximo xom,un divisior (MCD) de dos numeros A y B
(Usando el algoritmo de euclides)

En este ejercicio se calcula (a través de una función recursiva) el máximo común divisor de dos números introducidos por teclado, siguiendo el algoritmo de Euclides
*/
#include<stdio.h>

int MCD_Rec(int a, int b){
    int r = a%b;
    if(r==0) return b; //si el resto es cero ya se llego al caso base
    else MCD_Rec(b,r); //si no, vuelve a llamar a la funcion pero con el divisor y con el resto

}

int main(){
    int a, b;
    printf("Ingresa el primer numero: ");
    scanf("%d", &a);

    printf("Ingresa el segundo numero: ");
    scanf("%d", &b);

    printf("\nEl MCD es: %d\n", MCD_Rec(a,b));
    return 0;
}

/*
El algoritmo de Euclides es un método eficiente para encontrar el máximo común divisor (MCD) de dos números enteros, basado en el principio de que el MCD de dos números es
el mismo que el MCD de su divisor y su residuo. Se resuelve aplicando repetidamente el proceso de división con resto hasta obtener un residuo de cero; el último divisor
no nulo es el MCD. 

Pasos para encontrar el MCD con el algoritmo de Euclides:
Sean dos números enteros, A y B.
Divide el número mayor (A) entre el número menor (B) para obtener un cociente y un residuo (R). La relación es A = B * Q + R.

Reemplaza el número mayor por el divisor (B) y el número menor por el residuo (R).

Repite el paso 2, dividiendo el nuevo número mayor entre el nuevo número menor, hasta que el residuo sea 0.

El último divisor que no produjo residuo es el MCD. 

*/