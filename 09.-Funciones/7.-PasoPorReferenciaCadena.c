#include<stdio.h>

char* cambiarValor(char *parametro){
    //Variable Dereference
    printf("Variable apuntador (dir. memoria): %p\n", parametro);
    parametro = "Adios";
    printf("Variable apuntador (dir. memoria): %p\n", parametro);
    return parametro;
}

int main(){
    //Ejemplo paso por referencia
    //char arg[] = "Hola";
    char *arg = "Hola";
    printf("Antes llamar funcion: %s\n", arg);
    //Los arreglos siempre se pasan por referencia
    arg = cambiarValor(arg);
    printf("Despues llamar funcion: %s\n", arg);

    return 0;
}