#include <iostream>
using namespace std;
int main(void){
	int n,k;
	cin>>n>>k;
	int yd=0;
	int count=0;
	while(n!=0){
		yd+=n;//����
		count+=n;
		n=0;
		n=(int)yd/k;//���̵ٻ��µ��� 
		yd=yd%k;//�������µ��̵�
	}
	cout<<count;
	return 0;
}
