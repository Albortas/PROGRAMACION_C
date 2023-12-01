#include<stdio.h>
char* itoa(int num, char *cadena){
    if (cadena == NULL){
        return NULL;
    }
    sprintf(cadena, "%d",num);
    return cadena;
    
}

int main(){
    //Convertir de numero a cadena
    int edad = 28;
    char edadTexto[5];
    //itoa -> int to Ascii
    //ftoa -> float to Ascii
    //el valor 10 es sistema numeracion decimal
    //itoa(edad, edadTexto, 10); //No se puede ejecutar
    int valor = snprintf(edadTexto,2+1,"%d",edad);
    printf("Convirtiendo a texto: %s %s\n", edadTexto, "anios");
    printf("El valor es: %d\n",valor);

    return 0;
}