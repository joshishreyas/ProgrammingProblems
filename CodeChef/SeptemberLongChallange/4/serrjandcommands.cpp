//template Asprazz 
#define DEBUG 1

#include <algorithm>
#include <functional>
#include <numeric>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <complex>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cassert>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <sstream>
using namespace std;

#define LL long long
#define LD long double
#define PR pair<int,int>

#define Fox(i,n) for (i=0; i<n; i++)
#define Fox1(i,n) for (i=1; i<=n; i++)
#define FoxI(i,a,b) for (i=a; i<=b; i++)
#define FoxR(i,n) for (i=(n)-1; i>=0; i--)
#define FoxR1(i,n) for (i=n; i>0; i--)
#define FoxRI(i,a,b) for (i=b; i>=a; i--)
#define Foxen(i,s) for (i=s.begin(); i!=s.end(); i++)
#define Min(a,b) a=min(a,b)
#define Max(a,b) a=max(a,b)
#define Sz(s) int((s).size())
#define All(s) (s).begin(),(s).end()
#define Fill(s,v) memset(s,v,sizeof(s))
#define pb push_back
#define mp make_pair
#define x first
#define y second

template<typename T> T Abs(T x) { return(x<0 ? -x : x); }
template<typename T> T Sqr(T x) { return(x*x); }
string plural(string s) { return(Sz(s) && s[Sz(s)-1]=='x' ? s+"en" : s+"s"); }

const int INF = (int)1e9;
const LD EPS = 1e-9;
const LD PI = acos(-1.0);

#if DEBUG
#define GETCHAR getchar
#else
#define GETCHAR getchar_unlocked
#endif

//End Asprazz Template

void initialise(int *array,int n) {

	for(int i=0;i<n;i++) {
		array[i]=0;
	}
}
void printArray(int *array,int n) {
	for(int i=1;i<=n;i++) {
		cout<<array[i]<<" ";

	}
	cout<<endl;
}
int type[1000],lefter[1000],righter[10000];

void incrementArray(int *arrayNumbers,int n,int m,int pointer) {
	int l = lefter[pointer];
	int r = righter[pointer];
	for(int i=l;i<=r;i++) {
		arrayNumbers[i]++;
	}
}
void performTasks(int *arrayNumbers,int n,int m,int pointer) {

	int l = lefter[pointer];
	int r = righter[pointer];
	for( int i=l;i<=r;i++) {
		if(type[i]==1) {
//			printArray(arrayNumbers,n);	

			incrementArray(arrayNumbers,n,m,i);
		}
		if(type[i]==2) {
//			printArray(arrayNumbers,n);	
			performTasks(arrayNumbers,n,m,i);
		}
	}

}



int main() {

	int t;
	cin>>t;

	while(t--) {
		
		int n,m;
		cin>>n>>m;
		int arrayNumbers[n+1]={0};

		for(int i=1;i<m+1;i++) {
			cin>>type[i]>>lefter[i]>>righter[i];	
			if(type[i]==1) {
				incrementArray(arrayNumbers,n,m,i);
			}

			if(type[i]==2) {
				performTasks(arrayNumbers,n,m,i);

			}
//			performTasks(arrayNumbers,n,m,i);
		}
		
		printArray(arrayNumbers,n);
	
	}

	return 0;
}