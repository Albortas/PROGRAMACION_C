#include<stdio.h>
#include<stdbool.h>

int main(){
    int contador = 0, numeroRepeticiones = 5;
    while (contador < numeroRepeticiones){
        printf("\nBuenos dias...%d\n",contador);
        //Condicion a evaluar
        contador++;
        bool condicion = contador < numeroRepeticiones;
        printf("%d < %d -> %d \n", contador, numeroRepeticiones, condicion);        
    }
    printf("Ya estamos fuera del ciclo While\n");

    return 0;
}