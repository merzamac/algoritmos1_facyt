/*
saber si dos vectores son iguales
*/
#include <stdio.h>
#include <stdbool.h>

bool igual(int elem1[],int elem2[],int n)
{
	int res;
	
	if(n>=0)
	{
		if(elem1[n]!= elem2[n])
		{
			res = false;
		}
		else
    {
    	res = igual(elem1,elem2,n-1);
    }
  }
  else
  {
  	res = true;
  }
  
  return res;
}
 
int main()
{ 
	int n=5,m=5;
	int elem1[]={0,2,5,6,7},elem2[]={0,2,5,6,7};
	
	
	if(n==m && igual(elem1,elem2,n-1))
	{
		printf("son iguales");
	}
	else
  {
  	printf("no son iguales");
  }
	return 0;
}