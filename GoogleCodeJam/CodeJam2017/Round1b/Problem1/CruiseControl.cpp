//template Asprazz 
//using c++

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



const LD PI = acos(-1.0);

#if DEBUG
#define GETCHAR getchar
#else
#define GETCHAR getchar_unlocked
#endif

//End Asprazz Template
double solver() {
	long int d,no_horse,i=0;
	cin>>d>>no_horse;
	long int horse[no_horse],speed[no_horse];
	double time=0,temp;
	Fox(i,no_horse) {
		cin>>horse[i]>>speed[i];
		temp=(d-horse[i])/speed[i];
		time=max(time,temp);
	}
	return d/time;

}


int main() {
	int t,c=1;
	cin>>t;
	while(t--) {
		double speed;
		cout<<"Case #"<<c++<<": ";
		speed=solver();
		cout<<fixed<<setprecision(9)<<speed<<endl;
	}
	return 0;
}