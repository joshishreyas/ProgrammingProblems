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
double pi=3.1415926535897954545454545454545;
//End Asprazz Template

void swapper (long int *xa,long int *ya) {
	long int temp;
	temp=*xa;
	*xa=*ya;
	*ya=temp;
}

	int main(){
		
		int t;int c=1;
		long int n,k;
		cin>>t;
	
		while(t--) {
			cin>>n>>k;
			double surfaceArea=0;
			long int data[n][n];
			
			for(long int i=0;i<n;i++) {
				cin>>data[i][0]>>data[i][1];
			}
			for(int i=0;i<=n-1;i++) {
				for (int j=i;j<=n-1;j++) {
					
					if(data[i][0]<= data[j][0]) {
						swapper(&data[i][0],&data[j][0]);
						swapper(&data[i][1],&data[j][1]);
					}


				}
			}
			for(int i=0,j=0;j<k;i++) {
			
				if(1) {
					
					if(j==(k-1)) {
						surfaceArea=surfaceArea + (2*data[i][0]*data[i][1]*PI )+ (pow(data[i][0],2)*PI);
						cout<<"***** "<<data[i][0]<<" "<<data[i][1]<<endl;
						break;
					}
					else {
						surfaceArea = surfaceArea + (2*data[i][0]*data[i][1]*PI) + ((data[i][0]+data[i+1][0])*(abs(data[i][0]-data[i+1][0]))*PI);
						cout<<"***** "<<data[i][0]<<" "<<data[i][1]<<endl;
						j++;
					}
				}
			}

			cout<<fixed<<setprecision(9)<<"Case #"<<c++<<": "<<surfaceArea<<endl;			
		}
		return 0;
	}