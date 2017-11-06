#include <stdio.h>

int main()
{
    int n,j,i,count,flag;
    char a[100],b[100];
    
    scanf("%d",&n);
    scanf("%s",a);
    scanf("%s",b);
    
    while(a[i]!='\0') {
        flag=0;
        for(j=0;j<n;j++) {
            if(a[i]==b[j]) {
                break;
            }
            flag=1;
        }
        if(flag==1) {
            printf("NO");
            break;
        }
            
        i++;
    }
    return 0;
}
