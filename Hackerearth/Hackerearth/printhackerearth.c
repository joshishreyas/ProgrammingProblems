#include<stdio.h>

int main() {
	
	long long int n,count=0;
	long long int i=0;
	long long int k[7]={0};
	printf("Enter th total number of characters in the string:");
	scanf("%lld",&n);
	char string[n];
	scanf("%s",string);
	
	while(string[i]!='\0') {
		if(string[i]=='h') 
			k[0]++;
		else if(string[i]=='a') 
			k[1]++;
		else if(string[i]=='c') 
			k[2]++;
		else if(string[i]=='k') 
			k[3]++;
		else if(string[i]=='e') 
			k[4]++;
		else if(string[i]=='r') 
			k[5]++;
		else if(string[i]=='t') 
			k[6]++;
		
		i++;		
	}
	while( k[0]>=2 && k[1]>=2 && k[2]>=1 && k[3]>=1 && k[4]>=2 && k[5]>=2 && k[6]>=1 ) {
		k[0]-=2;
		k[1]-=2;
		k[2]-=1;
		k[3]-=1;
		k[4]-=2;
		k[5]-=2;
		k[6]-=1;
		count++;
	}
	printf("%lld",count);
	return 0;
}