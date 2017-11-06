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


int main( ) {
	int t;
	cin>>t;
	while(t--) {
		long long int totalSum=0;
		long long int n,d,diff,factor;
		cin>>n>>d;
		long long int a[n],counter=0;

		for(long long int i=0;i<n;i++) {
			cin>>a[i];
			totalSum+=a[i];

			if(i>=d) {
				if(a[i]==a[i-d]) 
					continue;
				else if(a[i] > a[i-d]) {
					diff=a[i]-a[i-d];
					factor=diff/2;
					a[i]-=factor;
					a[i-d]+=factor;
					counter+=factor;
				}
				else if( a[i] < a[i-d]) {
					diff=a[i-d]-a[i];
					factor=diff/2;
					a[i]+=factor;
					a[i-d]-=factor;
					
					counter+=factor;
				}
			}

		}
		if(totalSum%n==0) {
			long long int i=0,temp=a[0];
			for(i=0;i<n;i++) {
				if(DEBUG) {
					cout<<" "<<a[i]<<" ";
				}

				if(a[i]!=temp) {	
					//break;
				}
			}
			cout<<endl;
			if(i!=n) {
				cout<<"-1"<<endl;
			}
			else
				cout<<counter<<endl;
		}
		else {
			cout<<"-1"<<endl;
		}
		









	}
	return 0;
}