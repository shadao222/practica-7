/*Buendia Juarez Noel Shadao
Practica #7
Programa #6
elegir opciones de menu*/

#include <stdio.h>
int main(){
    int op;
    printf("\tMenu\n\n");
    printf("Elegir la opcion deseada:\n");
    printf("1) Ingresar\n");
    printf("2) Registrarse\n");
    printf("3) Salir\n");
    scanf("%d", &op);
    switch(op){
        case 1:
            printf("Se selecciono ´Ingresar´.\n");
            break;          
        case 2:
            printf("Se selecciono ´Registrarse´.\n");
            break;
        case 3:
            printf("Se selecciono ´Salir´.\n");
            break;
        default:
            printf("Se selecciono ´Opcion no valida´.\n");
            break;
    }
    return 0;
}
