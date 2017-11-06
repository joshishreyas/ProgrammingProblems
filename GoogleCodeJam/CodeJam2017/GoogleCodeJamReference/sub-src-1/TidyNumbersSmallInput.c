//TidyNumbers by asprazz for small inputs
//t<=100 n<=1000

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

//int calcno(char s[4]);
void lowestpossible(char s[4],int i);
void checkstring(char s[4]);

int main() {
	
	//Variables declarations 
	int t,c=1;
	char s[4];
	int no;
	int l,i;
	int flag;

	scanf("%d",&t);
	//testcase
	while(t--) {
		i=0;
		scanf("%s",s);
		//no=calcno(s); unomment to parse int from string
		if(s[0]!='0' && s[1]!='\0') {
			checkstring(s);
			//if(flag==0) 
			if(s[0]=='0') {
				s[0]='9';
				s[(strlen(s)-1)]='\0';

			}
		}
		printf("case #%d: %s\n",c,s);
		c++;
	}
	printf("\n");
	return 0;

}
void lowestpossible(char s[4],int i) {

	int l=strlen(s);
	s[i]-=1;
	i++;
	while(i<l) {
		s[i]='9';
		i++;
	}

}
void checkstring(char s[4]) {
	
		int l;
		int i=0;
		int flag=0;
		l=strlen(s);
		while(i<l-1) {
			//for printing the string 
			//printf("%c",s[i]);
			if(s[i]!=s[i+1]) {
				flag=1;
				if( (s[i]-48) > (s[i+1]-48)) {
					lowestpossible(s,i);
					checkstring(s);	
				}
			}	
			i++;
		}
}

/*int calcno(char s[4]) {
	int sum=0;
	int i=0;
	int l=strlen(s);
	while(l--) {
		sum+=pow(10,i)*s[l];
		i++;
	}
	return sum;
}*/