#include <stdio.h>

int main(){
    int a,b,c;
    //Operadores de Incremento: Pre-incremento Y Post - incremento
    a = 0;
    // Post-incremento
    a++;//Se incrementa la proxima vez que utilicemos esta variable
    printf("Nuevo valor de a: %d\n", a);
    //Pre-incremento
    ++a;//La proxima vez que usemos esta variable ya esta incrementada
    printf("Nuevo valor de a: %d\n",a);

    a = 5;
    b = 2;
    c = ++a * b++;
    printf("Valor a: %d\n",a);//No tenia pendiente ningun incremento
    printf("Valor b: %d\n",b);//Si tenia pendiente un incremento
    printf("Valor c: %d\n",c);

    //Operadores de Decremento: Pre-decremento Y Post - decremento
    a = 5;
    b = 2;
    c = --a * b--;
    printf("Valor a: %d\n",a);//No tenia pendiente ningun decremento
    printf("Valor b: %d\n",b);//Si tenia pendiente un decremento
    printf("Valor c: %d\n",c);

    return 0;
}