#include<stdio.h>

int main(){
    int diaSemana;
    printf("Proporcione el dia de la semana:");
    scanf("%i",&diaSemana);
    
    switch (diaSemana){
        case 1:
            printf("Lunes\n");
            break;
        case 2:
            printf("Martes\n");
            break;
        case 3:
            printf("Miercoles\n");
            break;
        case 4:
            printf("Jueves\n");
            break;
        case 5:
            printf("Viernes\n");
            break;
        case 6:
            printf("Sabado\n");
            break;
        case 7:
            printf("Domingo\n");
            break;    
        default:
            printf("Valor dia erroneo: %d\n",diaSemana);
            //break;
    }

    return 0;
}