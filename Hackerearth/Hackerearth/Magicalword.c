#include<stdio.h>

int isPrime(int);
int nearestPrime(char);


int main() {
	char s[1000];
	int i=0,t,n;
	printf("%d %d",t,n);
	while(t--) {
	    scanf("%s",s);
    	
    	while( s[i] != '\0' ) {
    		s[i]=(char)nearestPrime(s[i]);
    		i++;
    	}
    	printf("%s",s);
	}
	return 0;
}

int nearestPrime(char c) {
	int i,n1,n2,d1,d2;
	int n=(int)c;
	
	for(i=n;;i--){
		if(isPrime(i)==1) {
			n1=i;
			d1=n-n1;
			
			break;
		}
	}
	for(i=n;;i++) {
		if(isPrime(i) == 1) {
			n2=i;
			d2=n2-n;
			
			break;
		}
	}
	if(d1<d2) 
		return n1;
	else if (d2<d1)
		return n2;
	else 
		return n1;
	
}

int isPrime(int n) {
	int i;
	for(i=2;i<n;i++) {
		if (n%i == 0) {
			return 0;
			break;
		}
	}
	return 1;
}