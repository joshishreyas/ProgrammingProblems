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
#define MAX 10000000

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

long long int companies[MAX]={1};




int main( ) {
	int t;
	cin>>t;
	while(t--) {
		long long int n,m,i;
		cin>>n>>m;
		long long int minSalary[n];
		long long int offeredSalary[m],maxInvites[m];
		char qaul[n][m];

		for(i=1;i<=n;i++) {
			cin>>minSalary[i];
		}
		for(i=1;i<=m;i++) {
			cin>>offeredSalary[i];
			cin>>maxInvites[i];
		}
		for(i=1;i<=n;i++) {
			cin>>qaul[i];	
		}
		
		long long int givenS=0;
		//you have to keep track of the qual string because it is lagging 1 behind
		for(i=1;i<=n;i++) {
			//minSalary[i] for candidate
			//company
			//offeredSalary[i] for company
			//maxInvites[i] to decrement

			//qual[i] wole boolean string for qualification for respective j+1 company for 
			//candidate i 
					
				


 	   	}     


   	return 0; }
