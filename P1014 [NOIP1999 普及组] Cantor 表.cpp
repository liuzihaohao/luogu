#include<iostream>
using namespace std;

int main(void){
//	int t,n;
//	cin>>n;
//	t=1;
//	int m=1,z=1;
//	while(true){
//		if(t==n){
//			break;
//		}
//		if(z%2!=0){
//			if(z=1){
//				z++;
//			}else{
//				m++;
//				z++;
//			}
//		}else{
//			if(m==1){
//				z++;
//			}else{
//				z++;
//				m++;
//			}
//		}
//		t++;
//	}
//	cout<<z-1<<"/"<<m;//<<1-n;
	int t,n,k;
    cin>>n;
    t=1;
    while (n>t)
    {
	    n=n-t;
	    t++;
    }
//    cout<<n<<"/"<<t+1-n;
	cout<<t+1-n<<"/"<<n;
	return 0;
}

