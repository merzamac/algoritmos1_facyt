/*
ocurrencias de un elemento dentro de un vector
*/

#include<stdio.h>
int ocurrencias(int vec[],int n,int k){
	int res;
	
	if(n >= 0)
	{
		if(vec[n]==k)
		{
			res=1+ocurrencias(vec,n-1,k);
		}else
    {
			res=ocurrencias(vec,n-1,k);
		}
	}
	else
  {
    res = 0;
  }
   return res;
}
int main()
{
	int n=10,res;
	int vec[]={4,3,4,8,4,6,4,7,8,4},k=4;
	res=ocurrencias(vec,n-1,k);
	printf("ocurrencias de k=%i es %i",k,res);
	return 0;
}