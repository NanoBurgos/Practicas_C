/* https://www.youtube.com/watch?v=X0rov4OJ5yI&list=PL4LsnY2J10q2PE4ZLnJM0T-YuhW7tbdjN&index=12

Dado un numero n, imprimir en pantalla sus factores primos de la siguiente manera:

Ej: 300 = 2^2 * 3^1 * 5^2

300 | 2
150 | 2
75  | 3 
25  | 5
5   | 5
(1)

*/
#include<stdio.h>
int main(){
    int n;

    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    int exponente = 0;
    int i =2; //inicializamos un contador(que van a ser los exponentes)
    printf("\n%d = ",n);

    while(n>1){ //mientras n>1 se haran estas operaciones
        while(n%i==0){ //mientras i sea divisor de n
            exponente++; //lo primero que hacemos es aumentar el exponente en uno
            n = n/i; //otra forma de escribir seria n/=i (seria una forma simplificada)
        }
        if(exponente>0) {
           if(n!=1) printf("%d^%d *",i,exponente);
           else printf("%d^%d\n",i,exponente);
            } //la condicion es para que no nos imprima numeros elevados a la 0 ej 4^0
        exponente = 0; //volvemos a inicializar el exponente
        i++;


    }

    return 0;
}