#include <iostream>
#include <cstring>
using namespace std;
int main(void){
	int n;
	cin>>n;
	int a[n];
//	for(int i=0;i<n;i++){
//		a[i]=0;
//	}
	memset(a,0,sizeof(int)*n);
	cout<<n<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i!=j){
				a[j]=!a[j];
			}
			cout<<a[j];
		}
		cout<<endl;
	}
	return 0;
} 
