#include <iostream>
using namespace std;
int main(void){
	int a,b;
	cin>>a>>b;
	bool r[a+1];
	for(int i=0;i<=a;i++){
		r[i]=true;
	}
	for(int i=0;i<b;i++){
		int temp1,temp2;
		cin>>temp1>>temp2;
		for(int j=temp1;j<=temp2;j++){
			r[j]=false;
		}
	}
	int count=0;
	for(int i=0;i<=a;i++){
		if(r[i]==true){
			count++;
		}
	}
	cout<<count;
}
