#include <stdio.h>

int main()
{
    int i=0,n;
   char s[100];
   scanf("%s",s);
   
    while(s[i]!='\0') {
        n=(int)s[i];
        if(n<91)
            n+=32;
        else
            n-=32;
        s[i]=(char)n;
        i++;
    }
	printf("%s",s);
    return 0;
}