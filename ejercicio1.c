/*convertir un numero de decimal a binario
fileBasenameNoExtension
"${fileDirname}/${fileBasenameNoExtension}/*.out"
*/
#include<stdio.h>

int abinario(int num){
    int resultado;

    if (num < 2)
    {
        resultado = num;
    }
    else
    {
        resultado = num%2 + (10*abinario(num/2));
    }
    return resultado;
}
int main(){
    printf("%i",abinario(7));
    return 0;
}