#include <iostream>
using namespace std;
int main(void){
	int n;
	cin>>n;
	int bz1[2];
	int bz2[2];
	int bz3[2];
	cin>>bz1[0]>>bz1[1]>>bz2[0]>>bz2[1]>>bz3[0]>>bz3[1];
	float a[3];
	a[0]=bz1[1]*(n/bz1[0]+(n%bz1[0]>0?1:0));
	a[1]=bz2[1]*(n/bz2[0]+(n%bz1[0]>0?1:0));
	a[2]=bz3[1]*(n/bz3[0]+(n%bz1[0]>0?1:0));
	int c=a[0];	
	for(int i=0;i<3;i++){
		if(a[i]<c){
			c=a[i];
		}
	}
	cout<<c;
	return 0;
} 
