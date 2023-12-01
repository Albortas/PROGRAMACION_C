#include<stdio.h>

//Definimos nuestra funcion de suma
int sumar(int a, int b){
    //Realizamos la suma
    int resultadoSuma = a + b;
    return resultadoSuma;
    //Ya no se puede qgregar mas codigo
}

int main(){
    //Solicitamos los valores de los argumentos
    int argA, argB, resultado;
    printf("Proporciona el valor del primer argumento: ");
    scanf("%d", &argA);
    printf("Proporciona el valor del segundo argumento: ");
    scanf("%d", &argB);
    resultado = sumar(argA,argB);
    printf("Resultado de la suma: %d\n",resultado);

    return 0;
}