#include<stdio.h>

int main(){
    // Sentencia if - else
    //Verificar si un numero es positivo
    printf("Proporciona un numero: ");
    int miNumero;
    scanf("%d",&miNumero);
    
    /* Se omiten las llaves cuando la sentencia tiene una sola linea de codigo */
    /* if (miNumero > 0){
        printf("Valor positivo: %d\n", miNumero);
    }else{
        printf("Valor Cero: %d\n", miNumero);
    }  */
    
    //Operador Ternario
    //(expresion) ? "Verdadeo" : "Falso";
    (miNumero > 0) ? printf("Valor positivo: %d\n",miNumero) : printf("Valor Cero o Negativo: %d\n",miNumero);

    return 0;
}