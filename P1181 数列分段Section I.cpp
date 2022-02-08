#include <iostream>
using namespace std;
int main(void){
	int n,m;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int b=0;//½áÊøÏÂ±ê
	int count=0; 
	while(b<=n-1){
		int temp=0;
		while(temp<=m){
			temp+=a[b];
			b++;
		}
		b--;
		temp-=a[b];
		count++;
	}
	cout<<count;
	return 0;
}
