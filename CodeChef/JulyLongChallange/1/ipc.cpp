//template Asprazz 
#define DEBUG 1

#include <algorithm>
#include <list>
#include <iostream>


using namespace std;

#define LL long long




//End Asprazz Template


struct train {
	LL int arrive;
	LL int lectures;
	LL int sadness;
};


int compare_trainers(struct train a,struct train b) {

	if(a.arrive < b.arrive ) {
		return true;
	}
	else if (a.arrive == b.arrive ) {
		if(a.sadness >= b.sadness ) {
			return true;
		}
		else
			return false;
	}
	else
		return false;
}
/*
void sort_list(list <train> t) {
	list <train>::iterator it,it1;
	for(it=t.begin();it!=t.end();it++) {
		for(it1=it+1;it1!=t.end();it1++) {
			if(compare_trainers(*it,*it1)) {
				&
			}
		}
	}
}*/
struct train trainer;
list<train>::iterator it,temp;
		
long long int product;
int main() {
	
	
	int t;
	LL int n,d;
	
	cin>>t;
	while(t--) {
		product=0;
		list<train> mylist;

		cin>>n>>d;

		//cin>>trainer.arrive>>trainer.lectures>>trainer.sadness;
		//mylist.push_back(trainer);
		
		for(LL int i=0;i<n;i++) {
			int flag=0;

			cin>>trainer.arrive>>trainer.lectures>>trainer.sadness;
			for(it=mylist.begin();it!=mylist.end();it++) {
				if(compare_trainers(trainer,*it)) {
					mylist.insert(it,trainer);
					flag=1;
					break;
				}	
			}
			if(flag==0) 
				mylist.push_back(trainer);
		}
		


		for(int i=1;i<=d;i++) {
			
			if((*it).arrive==i ) { 
				(*it).arrive++;
				(*it).lectures--;
				temp=mylist.begin();
				temp++;
				while((*temp).arrive==i){
					(*temp).arrive++;
					temp++;
				}
				
				if((*it).lectures==0) 
					mylist.erase(it);
				mylist.sort(compare_trainers);
			}
		}

		for(it=mylist.begin();it!=mylist.end();it++) {
			//cout<<(*it).arrive<<" "<<(*it).lectures<<" "<<(*it).sadness<<" "<<endl;
			product+=(*it).lectures*(*it).sadness;
		}
		cout<<product<<endl;
		
	}
	return 0;	
}

