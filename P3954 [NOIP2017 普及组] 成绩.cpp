#include <iostream>
using namespace std;
int main(void){
	float a,b,c;
	cin>>a>>b>>c;
	a=a/100*20;
	b=b/100*30;
	c=c/100*50;
	cout<<(int)(a+b+c);
	return 0;
}
