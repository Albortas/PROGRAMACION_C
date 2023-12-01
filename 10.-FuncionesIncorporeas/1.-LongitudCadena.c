#include<stdio.h>
#include<string.h>

int main(){
    //Definir una cadena
    char cadena[] = "Hola Mundo";
    printf("Cadena: %s\n", cadena);
    //Obtenemos la longitud de la cadena
    printf("Largo de la cadena: %ld\n", strlen(cadena));
    //Recoremos cada caracter
    for (int i = 0; i < strlen(cadena); i++){
        printf("%c\t", cadena[i]);
    }
    printf("\n");

    return 0;
}