#include <stdio.h>
#include <math.h>

int main(){
    //Operadores Aritmeticos
    int a, b, c, f;
    int e;
    float d;
    //Suma +
    a = 3 + 4;
    printf("Suma: %d\n",a);
    //Resta -
    b = 6 - 2;
    printf("Resta: %d\n",b);
    //Multiplicacion *
    c = a * 2;
    printf("Multiplicacion: %d\n", c);
    //Division /
    d = b / 2;
    printf("Division: %.2f\n",d);
    //Modulo
    f = 9 % 2;
    printf("Modulo: %d\n",f);
    //Modulo
    e = pow(a,2);
    printf("Potencia: %d\n",e);

    //printf("Valor a: %d\n", a);

    return 0;
}