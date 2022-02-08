#include <iostream>
#include <string>
#include <cstdio> 
using namespace std;
int main(void){
	int l,r;
	cin>>l>>r;
	string a;
	char b[7];
	int count=0;
	for(int i=l;i<=r;i++){
		sprintf(b,"%d",i);
		a=b;
		for(int i=0;i<a.length();i++){
			if(a.at(i)=='2'){
				count++;
			}
		}
	}
	
	cout<<count;
	return 0;
}
