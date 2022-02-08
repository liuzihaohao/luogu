#include <iostream>
using namespace std;
int main(void){
	int n,k;
	cin>>n>>k;
	int yd=0;
	int count=0;
	while(n!=0){
		yd+=n;//吸烟
		count+=n;
		n=0;
		n=(int)yd/k;//用烟蒂换新的烟 
		yd=yd%k;//计算余下的烟蒂
	}
	cout<<count;
	return 0;
}
