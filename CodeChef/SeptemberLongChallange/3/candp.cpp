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
	
long long int buckets[10];

void initializeBucket() {
	for(int i=0;i<10;i++) {
		buckets[i]=0;
	}
}
int isBucketFull() {
	for(int i=0;i<10;i++) {
		if(!buckets[i])
			return 0;
	}
	return 1;
}
void printBucket() {
	for(int i=0;i<10;i++) {
		cout<<buckets[i]<<" ";
	}
	cout<<endl;
}

void printCharacters() {
	for(int i=65;i<=90;i++) {
		printf("%c",i);
	}
}
void checkCharacters() {


	int i;
	int digit1;
	int digit2;

	for(int i=65;i<=90;i++) {

		digit1=i%10;
		digit2=i/10;
		if(digit1 == digit2) {
			if(buckets[digit1] > 1 ) {
				printf("%c",i);
			}
		}
		else if( buckets[digit1] && buckets[digit2] ) {
			printf("%c",i);
		}

	}
}
int main( ) {

	int t;
	cin>>t;

	while(t--) {

		string bigNumber;

		long long int lengthOfBigNumber=0,i=0;
		int numberCounter=1;
		int parseInt,allPresent;
		initializeBucket();
		
		cin>>bigNumber;
		
		//lengthOfBigNumber=strlen(bigNumber);

		while(bigNumber[i]!='\0') {
			parseInt= bigNumber[i] - 48;

			buckets[parseInt]++;

			//cout<<parseInt;
			

			if(numberCounter > 100){

				if(isBucketFull()) {

					allPresent=1;
					break;
				}
				else {
					allPresent=0;
					numberCounter=0;
				}
			}
			numberCounter++;
			i++;			
		}
		

		if(allPresent==1) {
			printCharacters();
		}
		else {
			checkCharacters();

		}
		

		//printBucket();

		cout<<endl;
	}

	return 0;
}