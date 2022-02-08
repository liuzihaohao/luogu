#include <iostream>
using namespace std;
int main(void){
	int m=0;
	int mm=0;
	for(int i=0;i<12;i++){
		m+=300;
		int ys;
		cin>>ys;
		if(m-ys<0){
			cout<<(i+1)*(-1);
			return 0;
		}
		mm+=(m-ys)/100*100;
		m=(m-ys)%100;
//		cout<<i<<" "<<mm<<" "<<m<<endl;
	}
	cout<<m+mm*1.2;
	return 0;
}
