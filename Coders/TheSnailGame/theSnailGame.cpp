#include <iostream>

using namespace std;


int main() {
	int n,finalDistance,max,winner;

	cin>>n;

	long int snails[n+1];
	long int slips[n+1];
	
	for(int i=1;i<=n;i++) {
		cin>>snails[i];
	}
	for(int i=1;i<=n;i++) {
		cin>>slips[i];
	}
	cin>>finalDistance;
	max=0;
	winner=1;
	for(int i=1;i<=n;i++) {
		snails[i]-=slips[i];
		if(snails[i] >= max) {
			max=snails[i];
			winner=i;

		}
	}

	cout<<winner<<endl;
	cout<<slips[winner]<<" "<<snails[winner]<<" ";
	return 0;
}