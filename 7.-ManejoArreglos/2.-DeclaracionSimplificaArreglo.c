#include<stdio.h>

int main(){
    //Sintaxis simplificada
    int largoArreglo = 5;
    int numeros[largoArreglo];
    numeros[0] = 13;    
    numeros[1] = 21;    
    numeros[4] = 62;

    //Obtener el largo de un arreglo (memoria)
    int tamnioArreglo = sizeof(numeros);
    printf("Tamanio completo del arreglo en bytes: %d\n\n",tamnioArreglo);

    //Memoria ocupada por una celda
    int tamanioUnElemento = sizeof(numeros[0]);
    printf("Tamanio de un elemento del arreglo en bytes: %d\n\n",tamanioUnElemento);

    //Calculamos la cantidad de elmentos de nuestro arreglo
    int longitudArreglo = tamnioArreglo/tamanioUnElemento;
    printf("Largo de un arreglo es: %d\n\n",largoArreglo);

    //Iteramos todos los arrglos usando el ciclo for
    for (int i = 0; i < largoArreglo; i++)
    {
        printf("Valor %d Numeros[%d] = %d\n", i+1, i, numeros[i]);
    }
    //Esto no arroja un error pero no se debe hacer
    /* printf("Valor 10 Numeros[9] = %d\n", numeros[9]); */
}