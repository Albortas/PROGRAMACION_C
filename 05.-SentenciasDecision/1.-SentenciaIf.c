#include<stdio.h>

int main(){
    // Sentencia if - else
    //Verificar si un numero es positivo
    printf("Proporciona un numero: ");
    int miNumero;
    scanf("%d",&miNumero);
    
    //Se omiten las llaves cuando la sentencia tiene una sola linea de codigo
    if (miNumero > 0)
        printf("Valor positivo: %d\n", miNumero);
    else if (miNumero < 0)
        printf("Valor Negativo: %d\n", miNumero);
    else 
        printf("Valor Cero: %d\n", miNumero);
    

    return 0;
}