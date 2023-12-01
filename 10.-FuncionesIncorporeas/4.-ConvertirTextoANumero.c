#include<stdio.h>
#include<stdlib.h>

int main(){
    //Convertir string a numero
    char cadena1[] = "10";
    char cadena2[] = "20";
    //int atoi(const char *cadena);
    //atoi -> Ascci to int
    //atof -> Ascci to float
    //Si no es numero, regresa 0
    int resultado = atoi(cadena1) + atoi(cadena2);
    printf("Resultado suma: %d\n", resultado);

    return 0;
}