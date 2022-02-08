#include <iostream>
#include <string>
using namespace std;
int main(void){
	int n;
	string temp;
	cin>>n>>temp;
	for(int i=0;i<temp.length();i++){
		if(temp[i]+n>'z'){
			cout<<(char)(temp[i]+n-26);
		}else{
			cout<<(char)(temp[i]+n);
		}
	}
	return 0;
} 
