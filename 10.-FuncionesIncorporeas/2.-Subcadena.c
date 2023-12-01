#include<stdio.h>
#include<string.h>

int main(){
    //Obtener una subcadena
    //strncpy
    char cadena[] = "Hola Mundo";
    char subcadena[10];

    //Copiamos a partir del caracter inicio
    //e indicmos cuantos caracteres se copian
    //int inicio = 0, nCaracteres = 4; //Hola
    int inicio = 4, nCaracteres = 6; // Mundo
    //void *strncpy (void *destino, const void * origen, tamanio number);
    strncpy(subcadena, &cadena[inicio], nCaracteres);
    subcadena[nCaracteres] = '\0';
    printf("Cadena Original: %s\n", cadena);
    printf("Subcadena: %s\n",subcadena);

    return 0;
}