#include <iostream>
using namespace std;
int main(void){
	int a[10];
	int b;
	for(int i=0;i<10;i++){
		cin>>a[i];
	}
	cin>>b;
	int count=0;
	for(int i=0;i<10;i++){
		if(a[i]<=30+b){
			count++;
		}
	}
	cout<<count;
}
