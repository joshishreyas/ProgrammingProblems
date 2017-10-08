//code writter by Ankush Patil

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


int main( ) {
	int t;
	cin>>t;
	while(t--) {

		int counter=0;
		char a11[300],a12[300],a13[300],a14[300],b11[300],b12[300],b13[300],b14[300];
		cin>>a11>>a12>>a13>>a14>>b11>>b12>>b13>>b14;

		if(strcmp(a11,b11)==0) counter++;
		if(strcmp(a11,b12)==0) counter++;
		if(strcmp(a11,b13)==0) counter++;
		if(strcmp(a11,b14)==0) counter++;
		if(strcmp(a12,b11)==0) counter++;
		if(strcmp(a12,b12)==0) counter++;
		if(strcmp(a12,b13)==0) counter++;
		if(strcmp(a12,b14)==0) counter++;
		if(strcmp(a13,b11)==0) counter++;
		if(strcmp(a13,b12)==0) counter++;
		if(strcmp(a13,b13)==0) counter++;
		if(strcmp(a13,b14)==0) counter++;
		if(strcmp(a14,b11)==0) counter++;
		if(strcmp(a14,b12)==0) counter++;
		if(strcmp(a14,b13)==0) counter++;
		if(strcmp(a14,b14)==0) counter++;
		if(counter>1) {
			cout<<"similar"<<endl;
		}
		else
			cout<<"Dissimilar"<<endl;

	}


	return 0;

}