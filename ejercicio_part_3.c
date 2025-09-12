/* https://www.youtube.com/watch?v=6peHHjFFRvg&list=PL4LsnY2J10q2PE4ZLnJM0T-YuhW7tbdjN&index=9

Calcular la suma y el promedio de 5 valores introducidos por teclado

Se escribe y explica un programa que lee cinco números enteros, devolviendo su suma y su promedio. 
Se revisa los conceptos de división entre enteros, y además se presenta una forma de "simular" lectura de datos por teclado 
a través de un archivo .txt
*/
#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("Ingrese el primer numero: "); scanf("%d",&a);
    printf("Ingrese el segundo numero: "); scanf("%d",&b);
    printf("Ingrese el tercer numero: "); scanf("%d",&c);
    printf("Ingrese el cuarto numero: "); scanf("%d",&d);
    printf("Ingrese el quinto numero: "); scanf("%d",&e);

    int suma = a+b+c+d+e;

    float promedio = suma/5.0; //el resultado entre dos enteros es un entero, por eso al 5 de cantidad lo ponemos como flotante

    printf("\nLa suma es: %d", suma);

    printf("\nEl promedio es: %f", promedio);


    return 0;
}

/*
El resultado entre dos enteros es un entero, por eso al 5 de cantidad lo ponemos como flotante 5.0

Otra forma seria escribir:
float promedio = (float)suma/5.0;
En este caso, estamos diciendo que suma(entero) lo convierta a flotante

Otra forma seria escribir:
float promedio = 1.0*suma/5; entonces estamos convirtiendo en tipo flotante a la operacion

PARA NO TENER QUE ESTAR INTRODUCIENDO TODAS LAS VARIABLES DESPUES DE REALIZAR CAMBIOS Y VOLVER A COMPILAR
1-Creamos un archivo.txt con los valores que queremos introducir (Ej: entrada.txt)
2-En la carpeta donde tenemos el archivo, en la barra de direccines escribimos cmd
(abre el CMD con la ruta de la carpeta)
3- En el CMD, escribimos el nombre del archivo ejecutable"<"nombre del archivo txt con las variables
Ej: ejercicio_part_3<entrada.txt

Entonces lo que esta en el archivo "entrada" usa como los valores introducidos al programa

*/