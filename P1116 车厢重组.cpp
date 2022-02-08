#include <iostream>
using namespace std;
int main(void){
	int n;
	cin>>n;
	int lc[n];
	for(int i=0;i<n;i++){
		cin>>lc[i];
	}
//	int b=n;
	bool a=false;
	int count=0;
	do{
		a=false;
		for(int i=0;i<n-1;i++){
			if(lc[i]>lc[i+1]){
				int temp;
				temp=lc[i];
				lc[i]=lc[i+1];
				lc[i+1]=temp;
				a=true;
				count++;
			}
//			b--;
		}
	}while(a);
	cout<<count;
	return 0;
} 
