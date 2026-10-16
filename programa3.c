/*Buendia Juarez Noel Shadao
Practica #7
Programa #3
validacion par o impar*/

#include <stdio.h>
int main(){
    int num;
    printf("ingrese un numero:\n");
    scanf("%d", &num);
    if(num%2==0){
        printf("el numero %d es par\n", num);
    }
    else{
        printf("el numero %d es impar\n", num);
    }
    return 0;   
}
