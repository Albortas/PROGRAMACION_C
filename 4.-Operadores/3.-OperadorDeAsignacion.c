#include<stdio.h>

int main(){
    //Operadores de Asignacion
    //Operador = para asignar un valor
    int miNumero = 10;
    printf("Valor mi numero: %d\n", miNumero);
    miNumero = 20;
    printf("Valor mi numero: %d\n", miNumero);
    //Operador +=
    miNumero += 5; //miNumero = miNumero + 5
    printf("Valor mi numero: %d\n", miNumero);
    //Operador -=
    miNumero -= 3;
    printf("Valor mi numero: %d\n", miNumero);
    //Operador *=
    miNumero *= 2;
    printf("Valor mi numero: %d\n", miNumero);
    //Operador /=
    miNumero /= 7;
    printf("Valor mi numero: %d\n", miNumero);
    //Operador %=
    miNumero %= 2;
    printf("Valor residuo: %d\n", miNumero);

    return 0;
}