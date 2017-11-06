#include <stdio.h>
#define MAX 101

void ascending(int [], int [], int);
void descending(int [],int [], int);
int t1,t2,b1,b2,count;

int main(void) {
	int t,n,temp[MAX],s1[MAX],s2[MAX],i,j=0,k;
	int d,e;
	scanf("%d",&t);
	
	while(t>0) {
		t1=-1;
		t2=-1;
		b1=-1;
		b2=-1;
		count=0;
		scanf("%d",&n);
		for(i=0;i<n;i++) {
			scanf("%d",&temp[i]);
		}
		ascending(temp,s1,n);
		descending(temp,s2,n);
		for(i=0;i<n;i++) {
			if(s1[t1] >= 50) {
				t1--;
				b2++;
				count++;
			}
			else if(s1[t1]<50) {
						
				if((50%s1[t1])==0) {
					e=(50/s1[t1]);
					e--;
				}
				else {
					e=(50/s1[t1]);
				}
				t1--;
				b2++;
				count++;
				for(k=0;k<e;k++) {
					t2--;
					b1++; 
				}
			}
			if((t1==b1) && (t2==b2)) {
				if(s1[t1]==s2[t2]) {
					if(s1[t1]>50)
						count++;
					break;
				}
			}
			if(t1<b1 && t2<b2) {
				break;
			}
			
		}
		j++;
		printf("\nCase #%d: %d",j,count);
		t--;
	}
	return 0;
}

void ascending(int t[MAX],int s[MAX],int n) {
	int i,j,temp;
	
	for(i=0;i<n;i++) {              
        for(j=1;j<(n-i);j++) {
        	if(t[j-1] > t[j]) {      // bubblesort 
              temp=t[j-1];
              t[j-1]=t[j];
              t[j]=temp;
    		}
        }
    }
    if(b1==-1 && t1==-1) 
    	b1=0;
    for(i=0;i<n;i++) 
    	s[++t1]=t[i];
}

void descending(int t[MAX],int s[MAX],int n) {
	int i,j,temp;
	
	for(i=0;i<n;i++) {              
        for(j=1;j<(n-i);j++) {
        	if(t[j-1] < t[j]) {      // bubblesort 
              temp=t[j-1];
              t[j-1]=t[j];
              t[j]=temp;
    		}
        }
    }
    if(b2==-1 && t2==-1) 
    	b2=0;
    for(i=0;i<n;i++)
    	s[++t2]=t[i];
}