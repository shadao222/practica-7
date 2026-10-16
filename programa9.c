/*Buendia Juarez Noel Shadao
Practica #9
Programa #7
calcular error matematico*/
#include <stdio.h>
int main(){
    double a, b, res;
    printf("Calcular el error matematico E = |a - b|\n\n");
    printf("Ingrese el valor de a:\n");
    scanf("%lf", &a);
    printf("Ingrese el valor de b:\n");
    scanf("%lf", &b);
    res = a < b ? b - a : a - b;
    printf("El error matematico de\n");
printf("|%lf - %lf| es%lf\n", a, b, res);
    return 0;
}
