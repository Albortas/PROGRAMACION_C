#include <stdio.h>
#include <stdbool.h>

int main(){
    //1. Declarar las variables
    int largoCadena = 40;
    char nombreCompleto[largoCadena];
    int edad;
    float sueldo;
    bool empleadoDeConfianza;
    int empleadoConfianzaTemp;

    //2. Pedir los datos del usuario
    printf("Proporciona tu nombre: ");
    //fgets(nombreCompleto,largoCadena,stdin);
    scanf("%[^\n]s",nombreCompleto);
    printf("Proporciona tu edad: ");
    scanf("%d", &edad);
    printf("Proporciona tu sueldo (bolivianos): ");
    scanf("%f", &sueldo);
    printf("Eres un empleado de confianza (1/0): ");
    scanf("%d", &empleadoConfianzaTemp);
    empleadoDeConfianza = empleadoConfianzaTemp;

    printf("\nLa informacion proporcionada es: ");
    printf("\nNombre: %s",nombreCompleto);
    printf("\nEdad: %d", edad);
    printf("\nSueldo: Bs. %.2f",sueldo);
    printf("\nEmpleado de confianza: %d\n",empleadoDeConfianza);


    return 0;
}