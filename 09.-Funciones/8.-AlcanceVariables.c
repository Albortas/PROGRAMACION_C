#include<stdio.h>

//Variables globales
int variableGlobal = 5;
int a = 10;

//Definimos metodo cambio
void cambio (int variableLocalFuncion){
    //Cambio de varible de la varialbleLocalFuncion
    variableLocalFuncion = 40;
    //Cremos una variable local (ocultar a la global)
    int a = 50, b = 60;
    //Cambiio variable global
    variableGlobal = 70;
    printf("Varible Local (funcio): %d\n", variableLocalFuncion);
    printf("Variable local a (funcion): %d\n", a);
    printf("Variable local b (funcion): %d\n", b);
}

int main(){
    //Ejercicio Alcance Variables
    int variableLocal = 20;
    //Accedemos a la variable global
    printf("Varible Global a (principal): %d\n", a);
    //Modificamos la variable global
    a = 30;
    //Llamamos la funcion de cambio
    cambio(variableLocal);
    printf("Variable local (principal): %d\n", variableLocal);
    printf("Variable global a (principal): %d\n", a);
    printf("Variable global (principal): %d\n", variableGlobal);

    return 0;
}