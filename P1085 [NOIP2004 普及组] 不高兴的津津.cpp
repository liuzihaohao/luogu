#include <iostream>
using namespace std;
int main(void){
	int x=0,y=0;
	for(int i=0;i<7;i++){
		int t1,t2;
		cin>>t1>>t2;
		if(t1+t2>8){
			if(y<t1+t2){
				x=i;
				y=t1+t2;
			}
		}
	}
	cout<<++x;
	return 0;
}
