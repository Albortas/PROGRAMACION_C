#include<stdio.h>

void cambiarValor(int *parametro){
    //Variable Dereference
    printf("Variable apuntador (dir. memoria): %p\n", parametro);
    parametro[0] = 4;
    parametro[1] = 5;
    parametro[2] = 6;
}

int main(){
    //Ejemplo paso por referencia
    int arg[] = {1, 2, 3};
    //int *arg = {1, 2, 3};
    printf("Antes llamar funcion: %d %d %d\n", arg[0], arg[1], arg[2]);
    //Los arreglos siempre se pasan por referencia
    cambiarValor(arg);
    printf("Despues llamar funcion: %d %d %d\n", arg[0], arg[1], arg[2]);

    return 0;
}