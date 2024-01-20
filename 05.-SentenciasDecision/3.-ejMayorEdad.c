#include<stdio.h>
#define EDAD_ADULTO 18

int main(){
    int edadAdulto;
    printf("Proporciona tu edad: ");
    scanf("%d",&edadAdulto);

    (edadAdulto >= EDAD_ADULTO) ? printf("La persona con edad %d es adulto\n",edadAdulto) : printf("La persona con edad %d es menor de edad\n",edadAdulto);

    return 0;
}