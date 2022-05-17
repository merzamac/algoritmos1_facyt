/*es una palabra palindromo*/
#include<stdio.h>
#include<stdbool.h>
#include<string.h>

bool espalindromo(char cadena[],int n,int in){
    bool resultado;

    if (in <= n){
        if(cadena[n]==cadena[in]){
            resultado = espalindromo(cadena,n-1,in+1);
        }else{
            resultado = false;
        }
    }
    else 
    {
        resultado = true;
    }
    return resultado;
}
int main(){
    bool resultado;
    char cadena[]="arepera"; //arepera,abba,hannah
    if(espalindromo(cadena,strlen(cadena)-1,0)){
        printf("lo es, %s ",cadena);
    }else{
        printf("no lo es, %s ",cadena);
    }

    
    return 0;
}
