#include <iostream>
#include <string>
using namespace std;
int main(void){
	string a;
	getline(cin,a);
	for(int i=0;i<a.length();i++){
		if(a[i]=='\\'){
			if(a[i+1]=='r'){
				if(a.length()>=i+3){
					if(a[i+2]=='\\'&&a[i+3]=='n'){
						cout<<"windows";
						break;
					}
				}
				cout<<"mac";
				break;
			}else{
				cout<<"linux";
				break;
			}
		}
	}
	return 0;
} 
