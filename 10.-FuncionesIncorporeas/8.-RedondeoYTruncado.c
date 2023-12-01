#include<stdio.h>
#include<math.h>

int main(){
    //Redondeo de un numero
    float numero;
    int redondeo,truncado;
    printf("Proporcione un numero: ");
    scanf("%f", &numero);
    //Redondeo de un numero
    redondeo = round(numero);
    printf("Valor %.2f redondeo = %d\n", numero, redondeo);

    //Truncado 
    truncado = trunc(numero);
    printf("Valor %.2f truncado = %d\n", numero, truncado);

    return 0;
}