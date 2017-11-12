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


#define maxNumber 800
#define bigNumber 1e9
//dynamic array

int dynamic_p[maxNumber][maxNumber]={0};
int v[maxNumber][maxNumber]={0};
int numStrings[maxNumber]={0};
int n;


//defining the dfs function
int dfs(int left,int right);
int returnMin(int a,int b);
int main( ) {
	cin>>n;

	for(int i=1;i<=n;i++) {
		cin>>numStrings[i];
	}
	cout<<dfs(1,n)<<endl;

}

int dfs(int left,int right) {
	
	if(v[left][right])
		return dynamic_p[left][right];

	
	v[left][right]=1;
	dynamic_p[left][right] = bigNumber;
	if(left>right)
			return dynamic_p[left][right]=0;
	if(left==right)
			return dynamic_p[left][right]=1;
	if(left==(right-1)) {
		if(numStrings[left]==numStrings[right])
			return dynamic_p[left][right]=1;
		else
			return dynamic_p[left][right]=2;

	}
	if(numStrings[left]==numStrings[right]) {
		dynamic_p[left][right]=dfs(left+1,right-1);
		//here comes the recursion
	}
	for(int i=left;i<=right;i++) {
		dynamic_p[left][right]=returnMin(dfs(left,i) + dfs(i+1,right), dynamic_p[left][right] );

	}
	return dynamic_p[left][right];

}	
int returnMin(int a,int b) {
	if( a < b )
		return a;
	return b;
}