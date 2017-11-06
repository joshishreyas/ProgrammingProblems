#include <stdio.h>
#define MAX 101
void ascending(int [], int [], int);
void descending(int [],int [], int);

int t1=-1,t2=-1,b1=-1,b2=-1,count=0;
int main(void) {
	int t,n,temp[MAX],s1[MAX],s2[MAX],i,j=0;
	int d;
	scanf("%d",&t);
	while(t>0) {
		scanf("%d",&n);
		for(i=0;i<n;i++) {
			scanf("%d",&temp[i]);
		}
		ascending(temp,s1,n);
		descending(s1,s2,n);
		while((t1!=b1) && (t2!=b2)) {
			if(s1[t1]>=50) {
				t1--;
				b2++;
				count++;
			}
			else {
				t1--;
				b2++;
				count++;
				d=50/s1[t1];
				for(i=0;i<d;i++) {
					t2--;
					b1++;
				}
			}
			
			n--;
		}
		j++;
		printf("Case #%d: %d\n",i,count);
		t--;
	}
	return 0;
}

void ascending(int t[MAX],int s[MAX],int n) {
	int i;
	
}
void descending(int s1[MAX],int s2[MAX],int n) {
	
}