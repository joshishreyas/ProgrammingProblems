//Code By Ankush Patil
#include <stdio.h>
#include <math.h>
#include <string.h>

struct spell {
	char sp[15];
	int x;
	int y;
	int z;
	int flag;
};

void getspell(struct spell s,int);
int SumOc(int,int,int);
int getno(char chars[6],int);
void calculateprobablity(struct spell s,int);
double maxi();
double pr[12];
int g;


int main()
{
	long int t;
	int c=0;
	int h,no;
	//int m,n,x;
	//int sum;
	struct spell s[12];	
	
	scanf("%ld",&t);
	while(t>0) {
		scanf("%d %d",&h,&no);
		for(g=0;g<no;g++) {
			getspell(s[g],h);	
		}
		c++;
		printf("\nCase #%d: %lf",c,maxi());
		
		t--;
	}
	scanf("%d %d",&h,&no);

	return 0;
}
void getspell(struct spell s,int health) {
	int i=0,k;
	char tempno[6];
	scanf("%s",s.sp);
	k=0;
	while(s.sp[i]!='d') {
		tempno[k]=s.sp[i];
		k++;
		i++;
	}
	s.x=getno(tempno,k);
	k=0;
	i++;
	while(s.sp[i]!='\0') {
		
		if(s.sp[i]=='+' || s.sp[i]=='-') {
			if(s.sp[i]=='+')
				s.flag=0;
			else 
				s.flag=1;
			break;
		}
		tempno[k]=s.sp[i];
		k++;
		i++;
	}
	s.y=getno(tempno,k);
	i++;
	k=0;
	while(s.sp[i]!='\0'){
		tempno[k]=s.sp[i];
		k++;
		i++;
	}
	s.z=getno(tempno,k);
	calculateprobablity(s,health);
}
void calculateprobablity(struct spell s,int health) {
	
	int sum=0;
	int i;
	if(s.flag==0)
		health-=s.z;
	else if(s.flag==1)
		health+=s.z;
	if(health>0) {
		for(i=health;i<=(s.y*s.x);i++) {
			sum+=SumOc(s.y,s.x,i);
		}
		
		pr[g]=sum/(pow(s.y,s.x));
	}
	else 
		pr[g]=1;
	
	
}
int getno(char chars[6],int k) {
	int l=0,sum=0;
	k=k-1;
	while(k>=0) {
		sum+=pow(10,l)*(chars[k]-48);
		k--;
		l++;
	}
	return sum;
}
int SumOc(int m, int n, int x){

	int table[n + 1][x + 1],j,i,k;
	memset(table, 0, sizeof(table));
	
	for (j = 1; j <= m && j <= x; j++)
		table[1][j] = 1;
		
	for (i = 2; i <= n; i++)
		for (j = 1; j <= x; j++)
			for (k = 1; k <= m && k < j; k++)
				table[i][j] += table[i-1][j-k];

	return table[n][x];
}									
double maxi() {
	double m=pr[0];
	int i;
	for(i=0;i<g;i++) {
		if(pr[i]>m)
			m=pr[i];
	}
	return m;
}