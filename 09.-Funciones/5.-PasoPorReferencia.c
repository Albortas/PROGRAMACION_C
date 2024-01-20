#include<stdio.h>

void cambiarValor(int *parametro){
    //Variable Dereference
    printf("Variable apuntador (dir. memoria): %p\n", parametro);
    *parametro = 20;
}

int main(){
    int argumento = 10;
    printf("Antes llamar funcion: %d\n", argumento);
    cambiarValor(&argumento);
    printf("Despues llamar funcion: %d\n", argumento);

    return 0;
}