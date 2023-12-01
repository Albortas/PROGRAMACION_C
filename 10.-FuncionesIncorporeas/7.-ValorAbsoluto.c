#include<stdio.h>
#include<stdlib.h>

int main(){
    //Valor absoluto
    int numero, numeroAbs;
    printf("Proporcione un valor numerico: ");
    scanf("%d",&numero);
    numeroAbs = abs(numero);
    printf("Valor absoluto de %d es: %d\n", numero, numeroAbs);

    return 0;
}