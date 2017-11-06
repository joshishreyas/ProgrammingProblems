#include <iostream>
#include <stdlib.h>


using namespace std;


int main() {

	cout<<"1000"<<endl;

	for(int i=1;i<=1000;i++) {
		cout<<rand()%400<<" ";
	}
	cout<<endl;
	for(int i=1;i<=1000;i++) {
		if(i%5==0) {
			cout<<rand()%30<<" ";
		}
		else
			cout<<rand()%100<<" ";
	}
	cout<<endl;
	cout<<"550055"<<endl;

	return 0;
}