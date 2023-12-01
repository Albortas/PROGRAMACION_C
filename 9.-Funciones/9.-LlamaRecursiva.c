#include<stdio.h>

//Declararmos la funcion (firma de la funcion)
void funcionRecursiva(int numero);

int main(){
    int valor = 5;
    funcionRecursiva(valor);
    printf("\n");
    return 0;
}

//Agregamos la implementacion (cuerpo) funcion
void funcionRecursiva(int numero){
    if (numero == 1)
        printf("%d\t", numero);
    //Caso recursivo
    else{
        printf("%d\t", numero);
        funcionRecursiva(numero - 1);
        //printf("%d\t", numero);
    }
}