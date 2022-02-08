#include <iostream>
using namespace std;

//int s(int n){
//	int a=1;
//	int b=1;
//	while(true){
//		if(a==n){
//			return b;
//		}
//		b+=1/a;
//		a++;
////		cout<<n<<endl;
//	}
//}

int main(void){
//	int k;
//	cin>>k;
//	int n=k+1;
//	while(true){
//		int a=1;
//		float b=1;
//		while(true){
//			if(a==n){
//				break;
//			}
//			b+=1/a;
//			a++;
//		}
//		if(b>k){
//			cout<<n;
//			break;
//		}
//		n++;
//	}

	double k;
	cin>>k;
	double n=0.0;
	double count=0.0;
	while(true){
//		cout<<1/n<<endl;
		if(count>k){
			cout<<n;
			break;
		}
		n++;
		count+=1/n;
	}
	return 0;
}
