/*
Potencia de un número(a^b)
*/
#include <stdio.h>

int potencia(int a,int b){
	  int res;
	  if(a==0){
	  	res=0;
	  }else if(b==0){
	  	res = 1;
	  }else{
	  	res = potencia(a,b-1) * a;
	  }
	  return res;
	}
int main()
{
	int resultado;
	resultado = potencia(6,2);
	printf("%i", resultado);
	return 0;
}
 
