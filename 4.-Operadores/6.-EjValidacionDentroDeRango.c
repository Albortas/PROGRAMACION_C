#include<stdio.h>
#include<stdbool.h>

int main(){
    //Definicion de variables
    int minimo = 0, maximo = 5;
    int dato;
    bool dentroRango;
    //Solicitamos un valor entre 0 y 5
    printf("Proporciona un valor entre 0 y 5:\n");
    scanf("%d", &dato);
    //Verificar si esta dentro del rango
    dentroRango = dato <= maximo && dato >= minimo;
    printf("Valor dentro del rango: %d\n",dentroRango);

    return 0;
}