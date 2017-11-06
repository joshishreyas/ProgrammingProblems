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




char name_matrix[25][25];
int row_max;
int col_max;


void print_matrix() {

	for(int i=0;i<row_max;i++){
		for(int j=0;j<col_max;j++)
			cout<<name_matrix[i][j]<<" ";
		cout<<endl;
	}
}
void fill_with_zero() {
	for(int i=0;i<row_max;i++)
		for(int j=0;j<col_max;j++){
			name_matrix[i][j]='0';
		}
}


void fill_char(int i_pos,int j_pos,char name[25],int k_indi) {
	name_matrix[i_pos][j_pos]=name[k_indi];
		k_indi++;
	if(name_matrix[i_pos][j_pos+1]=='0' && j_pos+1<col_max) {
		
		//cout<<k_indi<<endl;
		//print_matrix();
		fill_char(i_pos,j_pos+1,name,k_indi);
	}
	if(name_matrix[i_pos+1][j_pos]=='0' && i_pos+1<row_max) {
		//name_matrix[i_pos+1][j_pos]=name[k_indi];
		//k_indi++;
		//cout<<k_indi;
		//print_matrix();
		fill_char(i_pos+1,j_pos,name,k_indi);
	}
}


int main() {
	int t;
	cin>>t;
	while(t--) {
		//freopen("input.txt","r",stdin);
		//freopen("output.txt","w",stdout);
		cin>>row_max>>col_max;
		char name[25];
		cin>>name;
		fill_with_zero();
		//name_matrix[0][0]=name[0];
		fill_char(0,0,name,0);
		print_matrix();
	}
	return 0;
}