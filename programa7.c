/*Buendia Juarez Noel Shadao
Practica #7
Programa #7
organizacion de datos: enumeraciones*/
#include <stdio.h>
int main(){
    enum boolean {no , yes}; //declaracion de enumeracion
    enum boolean valorBooleano; //declaracion de variable de tipo enumeracion
    valorBooleano = yes; //asignacion de valor a la variable
    printf("%d\n", valorBooleano); //se comprueba que la variable tiene el valor asignado
    enum diasSemana {lunes, martes, miercoles=5, jueves, viernes, sabado, domingo}; //declaracion de enumeracion y reasigmnacion de valores
    printf("\n%d, lunes", lunes);
    printf("\n%d, martes", martes);
    printf("\n%d, miercoles", miercoles);
    printf("\n%d, jueves", jueves);
    printf("\n%d, viernes", viernes);
    printf("\n%d, sabado", sabado);
    printf("\n%d, domingo", domingo);
    return 0;
}
