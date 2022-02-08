#include <iostream>
using namespace std;
int abs(int a){
	if(a<0){
		return -1*a;
	}
	return a;
}
int main(void){
	int n;
	cin>>n;
	int a[n];
	int temp;
	int b[n-1];
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(i!=n-1){
			b[i]=1;
		}
	}
	for(int i=0;i<n-1;i++){
		temp=abs(a[i]-a[i+1]);
		if(temp>=1&&temp<=n-1){
			b[temp-1]=0;
		}
	}
	for(int i=0;i<n-1;i++){
		if(b[i]){
			cout<<"Not jolly";
			return 0;
		}
	}
	cout<<"Jolly";
	return 0;
}
