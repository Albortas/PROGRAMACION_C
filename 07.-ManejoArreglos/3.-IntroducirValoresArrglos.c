#include<stdio.h>

int main(){
    //Pedir por consola el tamanio del arreglo
    int numeroElementos;
    printf("Propociona el tamanio del arreglo: ");
    scanf("%d",&numeroElementos);
    int numeros[numeroElementos];

    //Solicitamos los numeros al usuario
    for (int i = 0; i < numeroElementos; i++){
        printf("Proporciona el valor %d del arreglo: ",i+1);
        scanf("%d",&numeros[i]);
    }
    //Mostramos el arrglo
    for (int i = 0; i < numeroElementos; i++){
        printf("%d. Indice [%d] = %d\n", i+1, i, numeros[i]);
    }

}