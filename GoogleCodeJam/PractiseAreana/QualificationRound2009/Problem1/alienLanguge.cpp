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


int main() {
	int l,d,n;
	cin>>l>>d>>n;
	char dict[d+1][l+1];
	for(int i=1;i<=d;i++) {
		for(int j=1;j<=l;j++) {
			cin>>dict[i][j];
		}
	}
	while(n--) {
		int flags[32][32]={0};
		int count=0,len=0;
		char q[100];
		cin>>q;
		len=strlen(q);
		cout<<len<<" *"<<endl;
		for(int i=0; i<len; i++) {
			if(q[i]=='(') {
				for(int j=i+1;q[j]!=')';j++) {
					flags[count][q[j]-'a'+1]=1;
					i=j;
				}

			}
			else
				flags[count][q[i]-'a'+1]=1;

		}
		for(int i=1;i<32;i++) {
			for(int j=1;j<32;j++) {
				//cout<<flags[i][j]<<" ";
			}
			//cout<<endl;
		}
		long long int ans=0;
		for(int i=1;i<=d;i++) {
			int j;
			for(j=1;j<=l;j++) {
				if(!flags[j][dict[i][j]-'a'+ 1])
					break;
			}
			if(j>l)
				ans++;
		}
		cout<<"ans = "<<ans<<endl;
	}
	return 0;
}
