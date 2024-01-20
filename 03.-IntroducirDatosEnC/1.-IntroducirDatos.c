#include <stdio.h>
int main(){
    //1. Declara variable
    int miNumero = 10;
    printf("Imprimir el valor de la variable: %d", miNumero);
    printf("\nImprimir la direccion de memoria: %p", &miNumero);

    //2. Solicitamos al usuario que proporcione un valor
    printf("\nProporciona un numero: \n");

    //3. Leemos la informacion y la signamos a la variable
    scanf("%d",&miNumero);

    //4. Mandamos a imprimir
    printf("El numero proporcionado es: %d",miNumero);
    printf("\nImprimir la direccion de memoria: %p\n", &miNumero);

    return 0;
}