#include<stdio.h>
#include<stdbool.h>

int main(){
    int numero;
    bool condicion;
    do
    {
        printf("\nProporcione un numero positivo :");
        scanf("%i", &numero);
        condicion = numero > 0;
    } while (!condicion);
    printf("Valor positivo proporcionado: %i\n\n", numero);    
    
}