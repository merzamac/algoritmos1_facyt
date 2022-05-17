/*
factorial de un numero
*/
#include<stdio.h>


int factorial_recursivo(int n){
    int resultado;

    if(n == 0 || n == 1){
        resultado = 1;
    }else{
        resultado =  n*factorial_recursivo(n-1);
    }
    return resultado;
}

int main(){
    int factorial;

    factorial = factorial_recursivo(5);
    printf("el factorial es, %i",factorial);
    return 0;
}