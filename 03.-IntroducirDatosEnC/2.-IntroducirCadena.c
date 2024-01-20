#include <stdio.h>

int main(){
    //1. Definir Variable
    int tamanio_cadena = 40;
    char nombre[tamanio_cadena];
    //2. Indicar al usuario que proporcione el valor
    printf("Proporciona tu nombre: ");
    //3. Leer la informacion
    //scanf("%[^'\n']s", nombre);
    fgets(nombre, tamanio_cadena, stdin);
    //gets(nombre); //No deberia de usarse

    //4. Imprimir el valor
    printf("El nombre es: %s\n",nombre);

    return 0;
}