#include <stdio.h>
#include <stdbool.h>

int main(){
    //Operadores Logicos
    bool a = true;// Verdadero - 1
    bool b = false;// Falso - 0
    printf("Valor a: %d\n",a);
    printf("Valor b: %d\n",b);
    //Operador Logico && (and o Y)
    //Regresar verdadero si ambos operandos son verdaderos
    bool c = a && b;
    printf("Resultado operador AND: %d\n",c);
    //Operador Logico || (or o O)
    //Regresa verdadero si cualquiera de los operando es verdadero
    c = a || b;
    printf("Resultado operador OR: %d\n",c);
    //Operador Logico ! (Not o NO)
    //Invierte el valor original, de 1 a 0, o 0 a 1
    c = !a;
    printf("Resultado operador NOT: %d\n",c);


    return 0;
}