#include<stdio.h>

int main(){
    //Manejo de Memoria y Apuntadores en C
    int miNumero = 10;
    printf("Valor miNumero: %d\n",miNumero);
    //Imprimimos la direccion de memoria de la variable
    //El especificar de formato %p -> pointer
    printf("Direccion memoria miNumero: %p\n", &miNumero);
    //Definiendo una variable apuntador
    int *apuntador = &miNumero;
    //Valor variable apuntador
    printf("Variable apuntador (dir. memoria): %p\n", apuntador);
    //Obtenemos el valor de la varible a la cual apuntamos
    //Dereference
    printf("Valor almacenado en dir. memoria: %d\n", *apuntador);
    //Modificar el  valor de la variable a la cual apuntamos
    (*apuntador) = 20;
    *apuntador = 20;
    printf("Se modifico el valor de la variable...\n");
    printf("Valor miNumero: %d\n", miNumero);
    printf("Valor almacenado en dir. memoria: %d\n", *apuntador);

    return 0;
}