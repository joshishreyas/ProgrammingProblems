#include <stdio.h>
#include <conio.h>

int main()
{
    
    unsigned l,r,k;
    int i,count=0;
    scanf("%d%d%d",&l,&r,&k);
    
    for(i=l;i<=r;i++) {
        if(i%k==0)
            count++;
    }
    printf("%d",count);
    return 0;
}