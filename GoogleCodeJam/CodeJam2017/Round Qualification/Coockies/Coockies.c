#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

void flipnext(char s[1000],int ,int);

int main() {
	int t;
	char s[1000];
	int k,l,i;
	int count,flag;
	int c=1;

	scanf("%d",&t);
	while(t--) {

		count=0;flag=0;

		scanf("%s",s);
		scanf("%d",&k);

		l=strlen(s);
		for(i=0;i<l-1;i++) {
			if(i+k <= l) {
				if(s[i]=='-') { 
					flipnext(s,i,k);
					count++;
				}
			}
		}

		i=0;

		while(i<l) {
			if(s[i] == '-')  {
				flag=1;
				break;
			}
			i++;		
		}

		if(flag == 1) 
			printf("Case #%d: IMPOSSIBLE\n",c);
		else
			printf("Case #%d: %d\n",c,count);
		c++;
	}
	return 0;
}

void flipnext(char s[1000],int i,int k) {
		
		int j;
		int l=strlen(s);

		for(j=0;j<k;j++) {
			if(s[i+j]=='+')
				s[i+j]='-';
			else if(s[i+j]=='-') {
				s[i+j]='+';

				}

				
		}
}