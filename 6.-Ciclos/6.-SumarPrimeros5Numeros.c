#include<stdio.h>

int main(){
    //Sumar los primeros 5 numeros
    int sumaAcumulativa = 0, numero = 1;
    //Usamos el ciclo While
    printf("Usando el ciclo While: \n");
    while (numero <= 5){
        printf("sumaAcumulativa + numero = %d + %d\n", sumaAcumulativa, numero);
        sumaAcumulativa += numero;
        printf("Suma parcia acumula: %d\n",sumaAcumulativa);
        numero++;
    }
    //Usamos el Do While
    printf("\nUsando el ciclo Do While: \n");
    numero = 1, sumaAcumulativa = 0;
    do{
        printf("sumaAcumulativa + numero = %d + %d\n", sumaAcumulativa, numero);
        sumaAcumulativa += numero;
        printf("Suma parcia acumula: %d\n",sumaAcumulativa);
        numero++;
    } while (numero <= 5);
    //Usando el ciclo for
    sumaAcumulativa = 0;
    printf("\nUsando el ciclo For: \n");
    for(int numero = 1; numero <= 5; numero++){
        printf("sumaAcumulativa + numero = %d + %d\n", sumaAcumulativa, numero);
        sumaAcumulativa += numero;
        printf("Suma parcia acumula: %d\n",sumaAcumulativa);
    }
    return 0;
}