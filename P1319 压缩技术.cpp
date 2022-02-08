#include <iostream>
#include <cstdio>
using namespace std;
int main(void){
	char temp;
	int a[201];
	int b=0;
	char c='\0';
	while(scanf("%c",&temp)!=EOF){
		if(c==temp){
			a[b]++;
		}else{
			b++;
			c=temp;
			a[b]++;
		}
	}
	cout<<b<<" ";
	for(int i=0;i<b;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
