#include <iostream>
#include <cmath>
using namespace std;
int main(void){
	int n;
	cin>>n;
	for(int a=2;a<sqrt(n);a++){
//		for(int b=2;b<n;b++){
//			if(a*b==n){
////				cout<<n;
//				if(a>b){
//					cout<<a;
//				}else{
//					cout<<b;
//				}
//				return 0;
//			}
//		}
		if(n%a==0){
			cout<<n/a;
			break;
		}
	}
	return 0;
}
