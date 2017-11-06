#include <stdio.h>
#include <math.h>
#define pi 3.14159

int main(void) {
	// your code goes here
	int t,i=1;
	float p,x,y,d;
	int c=0;
	float angle,m,real;
	scanf("%d",&t);
	while(t>0) {
		scanf("%f",&p);
		scanf("%f",&x);
		scanf("%f",&y);
		m=((y-50)/(x-50));
		angle=(2*pi*p)/100;
		d=sqrt(((x-50)*(x-50)+(y-50)*(y-50)));
		if(d>50) {
			c=0;
		}	
		else {
			
			if((50<=x && x<=100) && (50<=y && y<=100)) {
				real=atan(m);
				if(real<=angle)
					c=1;
			}
			else if((0<x && x<50) && (50<y && y<100) ) {
				real=(pi/2)+atan(m);
				if(real<=angle)
					c=1;
			}
			else if((0<=x && x<=50) && (0<=y && y<=50) ) {
				real=(pi/2)+(pi/2)+atan(m);
				if(real<=angle)
					c=1;
			}
			else if((50<x && x<100) && (0<y && y<50) ) {
				real=(pi/2)+(pi/2)+(pi/2)+atan(m);
				if(real<=angle)
					c=1;
			}
			else if((x==50)&& (y==100)) {
				if(angle>=(pi/4))
					c=1;
			}
			else if ((x==0)&& (y==50)) {
				if(angle>=(3*pi/4))
					c=1;
			}
		}
		if(c==1)
			printf("Case #%d: black\n",i);
		else
			printf("Case #%d: white\n",i);
		i++;
		t--;
	
	}
	scanf("%d",&t);
	return 0;
}
