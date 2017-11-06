#include <stdio.h>
 
int main()
{
    unsigned n, i, a= 1;
   scanf("%d",&n);
    long int A[n];
    for(i = 0; i < n ; i++)
    {
    	do
    	{
    		scanf("%li", &A[i]);
    	}		
    	while(A[i] < 1 && A[i] > 1000);
    }
 
    for(i = 0; i < n; i++)
    {
    	a = (a* A[i]) % (1000000007);
    }
    printf("%i", a);
	
}