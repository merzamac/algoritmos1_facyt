/*
sumar sumar dos numeros a+b
para la resta seria la misma logica
*/
#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int suma_recursiva(int a,int b){
    int resultado;

    if(b == 0){
        resultado = a;
    }else if(a == 0){
        resultado = b;
    }else{
        resultado =  1 + suma_recursiva(a,b-1);
    }
    return resultado;
}

int main(){
    int suma;

    suma = suma_recursiva(2,0);
    printf("la suma es, %i",suma);
    return 0;
}