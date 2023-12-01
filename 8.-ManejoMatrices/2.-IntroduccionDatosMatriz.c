#include<stdio.h>

int main(){
    int renglones, columnas, contador = 1;
    printf("Proporciona el numero de renglones: ");
    scanf("%d", &renglones);
    printf("Proporciona el numero de columnas: ");
    scanf("%d", &columnas);

    //Definimos la matriz
    int matriz[renglones][columnas];

    for (int i = 0; i < renglones; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("Dato %d: ",contador++);
            scanf("%d",&matriz[i][j]);
        }
        printf("\n");       
    }

    //Mostramos por consola los valores de la matriz
    contador = 1;
    printf("La matriz: \n");
    for (int i = 0; i < renglones; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("%d. [%d][%d] = %d\t", contador++, i, j, matriz[i][j]);
        }
        printf("\n");
    }
    
}