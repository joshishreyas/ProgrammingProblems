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


class Seat {
public:
		int seat_number;
		int seat_type;
		int coach_type;
		void setter(int a,int b,int c) {
			seat_number=a;
			seat_type=b;
			coach_type=c;
		}
		void printer() {
			if(seat_type==1)
				if(coach_type==1)
					cout<<seat_number<<" WS LC"<<endl;
				else 
					cout<<seat_number<<" WS RC"<<endl;
		}

};

int main() {
	int t;
	int n;
	int i;
	int counter;
	cin>>t;
	Seat s[2];
	while(t--) {
		cin>>n;
		int seat_available[n];
		
		for(i=0;i<n;i++)
			scanf("%d",seat_available[i]);
		//sort(seat_available,seat_available+n);

		counter=0;

		for(i=0;i<n;i++) {

			if((seat_available[i]%4)==0 || (seat_available[i]%4)==1) {
				if((seat_available[i]/4)%2==0) 
					s[counter++].setter(seat_available[i],1,1);
				else if((seat_available[i]/4)%2==1) 
					s[counter++].setter(seat_available[i],1,2);
				if(counter==2)
					break;
			}
		}	
		if(i!=n) {
		s[0].printer();
		s[1].printer();
		}
		else if(i==n) {
			cout<<"NO WINDOW SEAT"<<endl;
		}


	}
	return 0;
}