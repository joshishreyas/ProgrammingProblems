#include <stdio.h>
#include <stdlib.h>

typedef struct {	
	int x;
	int y;
	int dist;
}BLOCK;
typedef struct queue {

	int f;
	int r;
	BLOCK data[65];
}queue;





int checkBlock(int x,int y) {
	if(x>=0 && x<8 && y>=0 && y<8 )
		return 1;
	else
		return 0;
}
void copyStruct(BLOCK a,BLOCK b) {
	a.x=b.x;
	a.y=b.y;
	a.dist=b.dist;
}
int visitedBlock[9][9]={0};

int row[] = { 2, 2, -2, -2, 1, 1, -1, -1 };
int col[] = { -1, 1, 1, -1, 2, -2, 2, -2 };

void initializeQ(queue *q) {
	q->f=-1;
	q->r=-1;
}
void enque(queue *q,BLOCK b) {
	q->r=q->r+1;
	copyStruct(q->data[q->r],b);
}
int emptyQ(queue *q) {
	if(q->f==q->r) {
		return 1;
	}
	else 
		return 0;
}
BLOCK deque(queue *q) {
	q->f=q->f+1;
}

int minimumMoves(BLOCK,BLOCK);

int main () {

	int x,y,xd,yd;
	int m;
	BLOCK source,destination;

	scanf("%d%d",&x,&y);
	scanf("%d%d",&xd,&yd);

	source.x=x;
	source.y=y;
	source.dist=0;

	destination.x=xd;
	destination.y=yd;
	destination.dist=0;


	m=minimumMoves(source,destination);
	printf("Minimum moves are %d ",m);

	return 0;
}

int minimumMoves(BLOCK src,BLOCK dest) {
	queue q;
	initializeQ(&q);
	BLOCK temp,another;
	int x1,y1,i;
	
	enque(&q,src);
	while(!emptyQ(&q)){

		temp=deque(&q);
		if(temp.x==dest.x && temp.y==dest.y) 
			return temp.dist;
			
		if(visitedBlock[temp.x][temp.y]==0) {
			visitedBlock[temp.x][temp.y]=1;
            for (i = 0; i < 8; ++i) {
                x1 = temp.x + row[i];
                y1 = temp.y + col[i];
 
                if (checkBlock(x1, y1)) {
                	another.x=x1;
                	another.y=y1;
                	another.dist=temp.dist+1;
                    enque(&q,another);
                }
            }
		}
	}
}

