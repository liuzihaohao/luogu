#include <iostream>
using namespace std;
int a(int n,int b,int c){
	c=c*b;
	if(n!=b){
		b++;
		c=a(n,b,c);
	}
	return c;
}
int main(void){
	int n,b,c;
	cin>>n;
	b=1;
	c=1;
	cout<<a(n,b,c);
	return 0;
}
