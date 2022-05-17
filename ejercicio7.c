
/*
encontrar el menor elemento dentro de un vector
*/
#include <stdio.h>
int menor(int vec[],int n,int m){
	int res;
	
	if(n >= 0)
	{
		if(vec[n]<=m)
		{
			m=vec[n];
		}
		
			res = menor(vec,n-1,m);
	}
	else
  {
    res = m;
  }
   return res;
}
int main()
{
	int n=8;
	int elem[]={4,3,4,1,4,6,4,7};
	
	printf("el menor elemento es %i",menor(elem,n-1,99));
	return 0;
}