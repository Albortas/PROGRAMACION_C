#include<stdio.h>
#include<stdbool.h>

int main(){
    int entero;
    float flotante;
    double doble;
    char caracter;
    char cadena[50] = "Hola Mundo";
    bool booleano = true;
    //Imprimir cada varible (tamanio)
    //%lu - long unsigned
    printf("int tamanio bytes: %lu\n", sizeof(entero));
    printf("float tamanio bytes: %lu\n", sizeof(flotante));
    printf("double tamanio bytes: %lu\n", sizeof(doble));
    printf("char tamanio bytes: %lu\n", sizeof(caracter));
    printf("cadena tamanio bytes: %lu\n", sizeof(cadena));
    printf("bool tamanio bytes: %lu\n", sizeof(booleano));

    return 0;
}