#include<stdio.h>

//Definimos la funcion (procedimiento) saludar
void saludar(char mensaje[]){
    printf("Mensaje: %s\n",mensaje);
}

int main(){
    //Ejercicio para definir una funcion
    char argMensaje[50];
    printf("Prolporciona el mensaje a mostrar: ");
    scanf("%[^\n]s", argMensaje);
    saludar(argMensaje);

    return 0;
}