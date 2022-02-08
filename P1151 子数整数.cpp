#include <iostream>
#include <string>
using namespace std;
int main(void){
	int k;
	int sub1,sub2,sub3;
	int a1,a2,a3,a4,a5;
	bool b=1;
	cin>>k;
	for(int i=10000;i<=30000;i++){
		a1=i/10000;
		a2=i/1000-a1*10;
		a3=i/100-a1*100-a2*10;
		a4=i/10-a1*1000-a2*100-a3*10;
		a5=i-a1*10000-a2*1000-a3*100-a4*10;
		sub1=a1*100+a2*10+a3;
		sub2=a2*100+a3*10+a4;
		sub3=a3*100+a4*10+a5;
		if(sub1%k==0&&sub2%k==0&&sub3%k==0){
			cout<<i<<endl;
			b=0;
		}
	}
	if(b){
		cout<<"No";
	}
	return 0;
}
