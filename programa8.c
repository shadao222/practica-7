/*Buendia Juarez Noel Shadao
Practica #8
Programa #7
elegir de un menu a partir del entero ingresado*/
#include <stdio.h>
int main(){
    enum diasSemana{lunes, martes, miercoles, jueves, viernes, sabado, domingo};
    int op;
    printf("Ingrese un dia de la semana:\n");
    printf("1) lunes\n"
           "2) martes\n"
           "3) miercoles\n"
           "4) jueves\n"
           "5) viernes\n"
           "6) sabado\n"
           "7) domingo\n");
    scanf("%d", &op);
    switch(op){
        case lunes:
        case martes:
            printf("inicio de semana.\n");
            break;
        case miercoles:
            printf("mitad de semana.\n");
            break;
        case jueves:
            printf("casi fin de semana.\n");
            break;
        case viernes:
        case sabado:
            printf("fin de semana.\n");
            break;
        case domingo:
            printf("dia de descanso.\n");
            break;
    }
return 0x0;
}
