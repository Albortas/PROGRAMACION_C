#include<stdio.h>

int main(){
    //Imprimir los primeros 10 numeros de 3 en 3
    printf("Incrementos de 3 en 3: \n");
    for (int numero1 = 1; numero1 <= 10; numero1 += 3){
        printf ("%d ", numero1);
    }
    //Decremento de 3 en 3
    printf("\n\nDecrementos de 3 en 3: \n");
    for (int numero1 = 10; numero1 > 0; numero1 -= 3){
        printf("%d ", numero1);
    }
    printf("\n");
    return 0;
}