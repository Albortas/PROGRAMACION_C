#include<stdio.h>

int main(){
    int diaSemana;
    printf("Proporcione el dia de la semana:");
    scanf("%i",&diaSemana);
    
    if (diaSemana == 1){
        printf("Lunes\n");
    }else if (diaSemana == 2){
        printf("Martes\n");
    }else if (diaSemana == 3){
        printf("Miercoles\n");
    }else if (diaSemana == 4){
        printf("Jueves\n");
    }else if (diaSemana == 5){
        printf("Viernes\n");
    }else if (diaSemana == 6){
        printf("Sabado\n");
    }else if (diaSemana == 7){
        printf("Domingo\n");
    }else{
        printf("Dia de la semana no valido\n");
    }

    return 0;
}