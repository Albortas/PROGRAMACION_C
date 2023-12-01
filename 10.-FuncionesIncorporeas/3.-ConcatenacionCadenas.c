#include<stdio.h>
#include<string.h>

int main(){
    //La cadena destino debe ser lo suficientemente grande
    //para soportar el resultado
    char destino [11] = "Hola ";
    char origen [] = "Mundo";
    //Concatenamos las cadenas
    //char *strcat(char *destino, const char *origen);
    /*
    1. Tomar la cadena destino
    2. Encuentra el caracte nulo en la cadena destino
    3. Copia la cadena origen comenzando en el caracter nulo de la cadena destino
    4. Agrega el caracter nulo a la cadena destino '\0'    
    */
    strcat(destino,origen);
    printf("Concatenacion de cadenas: %s\n", destino);

    return 0;
}