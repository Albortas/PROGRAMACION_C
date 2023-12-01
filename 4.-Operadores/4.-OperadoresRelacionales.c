#include<stdio.h>
#include<stdbool.h>

int main(){
    //Operadores Relacionales (Comparacion)
    int a = 5;
    int b = 6;
    printf("Valor a: %d\n",a);
    printf("Valor b: %d\n",b);
    //Operador igualdad
    bool c = a == b;
    printf("a igual que b? %d\n",c);
    //Operador distinto
    c = a != b;
    printf("a distinto que b? %d\n",c);
    //Operador Mayor que
    c = a > b;
    printf("a mayor que b? %d\n",c);
    //Operador Mayor o igual que
    c = a >= b;
    printf("a mayor o igual que b? %d\n",c);
    //Operador Menor que
    c = a < b;
    printf("a menor que b? %d\n",c);
    //Operador Menor o igual que
    c = a <= b;
    printf("a menor o igual que b? %d\n",c);

    return 0;
}