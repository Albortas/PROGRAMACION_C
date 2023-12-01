#include<stdio.h>
#define RENGLONES 2
#define COLUMNAS 3

int main(){
    //const int REGLONES = 2;
    //const int COLUMNAS = 3;
    //Definimos la matriz
    //int matriz[RENGLONES][COLUMNAS] = {100,200,300,400,500,600};
    int matriz[RENGLONES][COLUMNAS] =
    {
        {100,200,300},//Primer reglon
        {400,500,600} //Segunda linea
    };
    //Llenamos la matriz manualmente
    //Llenamos el primer reglon
    /* matriz[0][0] = 100;
    matriz[0][1] = 200;
    matriz[0][2] = 300;
    matriz[1][0] = 400;
    matriz[1][1] = 500;
    matriz[1][2] = 600; */
    //Acedemos a los valores
    int contador = 1;
    for (int i = 0; i < RENGLONES; i++)
    {
        printf("Renglon (pivote): %d\n\n",i);
        for (int j = 0; j < COLUMNAS; j++)
        {
            printf("Valor %d [%d][%d] = %d\t",contador++, i, j, matriz[i][j]);
        }
        printf("\n\n");
    }
    

}