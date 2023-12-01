#include<stdio.h>

int main(){
    //1. Declaramos una variable
    int miNumero;
    //2. La inicializamos
    miNumero = 10;
    //3. Imprimir la varible
    //Especificador de formato %d <- decimal
    printf ("Mi numero es: %d",miNumero);
    //placeholder = marcador de posicion(lugar donde se va a sustituir la varible)

    //1. Declaramos e inicializamos la variable
    int miNumero2 = 20, miNumero3 = 30;
    //2. Imprimir el valor de las variables
    printf("\nMi numero dos es: %d, numero tres es: %d",miNumero2,miNumero3);

    return 0;
}