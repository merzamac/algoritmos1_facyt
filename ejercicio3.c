/*
sumar los elementos de un vector
*/
#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int suma_elem(int elem[],int n){
    int resultado;

    if(n==0){
        resultado = elem[0];
    }else{
        resultado = suma_elem(elem,n-1) + elem[n];
    }
    return resultado;
}

int main(){
    int n = 5;
    int elem[]={1,3,3,4,5};
    int suma;

    suma = suma_elem(elem,n-1);
    printf("la suma es, %i",suma);
    return 0;
}