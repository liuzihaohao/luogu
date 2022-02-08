#include <iostream>
using namespace std;
int main(void){
	int k;
	cin>>k;
	int day=1;
	int sday=1;
	int count=0;
	int scount=1;
	while(true){
//		cout<<scount<<endl<<sday<<endl<<day<<endl;
//	cout<<"day="<<day<<endl;
		count+=scount;
		if(day==k){
			cout<<count;
			break;
		}
		if(sday>=scount){
			sday=1;
			scount++;
			day++;
			continue;
		}
		sday++;
		day++;
	}
	return 0;
}
