/* 
parte 1 https://www.youtube.com/watch?v=COixeFDfOg4&list=PL4LsnY2J10q2PE4ZLnJM0T-YuhW7tbdjN&index=17
parte 2 https://www.youtube.com/watch?v=JKaCc-ow4cc&list=PL4LsnY2J10q2PE4ZLnJM0T-YuhW7tbdjN&index=18

En este video se analiza y escribe un programa en C que realiza cifrado para una serie de cadenas ingresadas por teclado.

Nota: hay una imprecisión en la parte final del video (cuando se revisa si el bloque de 5 caracteres corresponde al número 0).

*/

#include<stdio.h>
#include<string.h> //para poder usar la funcion string compare strcmp()
#include<stdlib.h> //para poder usar la funcion atoi() 

void procesar(char cad[]){
    char desp_cad[8], texto[201];
    int i = 0;
    //obtencio del desplazamiento(como cadena)
    while(cad[i]!=':'){
        desp_cad[i] = cad[i];
        i++;
    }
    desp_cad[i]='\0';
    i++; //por que aqui se tiene el ':'
    //obtencion del texto a cifrar
    int j = 0;
    while(cad[i] != '\0'){
        texto[j] = cad[i];
        i++;
        j++;
    }
    texto[j] = '\0';
    //conversion de la cadena desp_cad a un numero
    int desp = atoi(desp_cad);

   // printf("%s\t%s\n", desp_cad, texto); //para verificar que estamos haciendo bien hasta aca
    printf("%d\t%s\n", desp, texto); //para verificar que estamos haciendo bien y vamos a imprimir como numero el valor del desplaxamiento

    //proceso de cifrado
    j = 0;
    while(texto[i] != '\0'){
        if(texto[j]>= 'A' && texto[j]<= 'Z' ) //Mayusculas
        texto[j] = ((texto[j] - 'A' + desp) % 26) + 'A';

        if(texto[j]>= 'a' && texto[j]<= 'z' ) //Minusculas
        texto[j] = ((texto[j] - 'a' + desp) % 26) + 'a';

        if(texto[j]>= '0' && texto[j]<= '9' ) //Numeros
        texto[j] = ((texto[j] - '0' + desp) % 10) + '0';
        j++;

    }
    printf("%s\n",texto);
}

int main(){
    char linea[209];
    gets(linea);
    while(strcmp(linea,"#") != 0){
        procesar(linea);
        gets(linea);
    }



}