/*Buendia Juarez Noel Shadao
Practica #7
Programa #5
elegir opciones de menu*/

#include <stdio.h>
int main(){
    char op = '\0';
    printf("\tMenú\n\n");
    printf("Elegir la opcion que deseada\n");
    printf("a) ingresar\n");
    printf("b) registrarse\n");
    printf("c) salir\n");
    scanf("%c", &op);
    switch(op){
        default:
            printf("Opcion no valida\n");
            break;
        case 'a':
            printf("se selecciono ingresar.\n");
            break;
        case 'b':
            printf("se selecciono registrarse.\n");
            break;
        case 'c':
            printf("se selecciono salir.\n");
            break;
    }
    return 0;
}
