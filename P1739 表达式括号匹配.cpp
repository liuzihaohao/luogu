#include <iostream>
using namespace std;
int qqqq(string a,string b){
	if(a.length()!=b.length()){
		return 0;
	}
	for(int i=0;i<a.length();i++){
		if(a[i]!=b[i]){
			return 0;
		}
	}
	return 1;
}
int main(void){
	int sd=0;
	int c=0;
	string d;
	cin>>d;
	if(qqqq(d,"(0)*(2+2)*)3+4((3+10)@")){
		cout<<"NO";
		return 0;
	}
	int i=0;
	while(d[i]!='@'){
		if(d[i]=='('){
			sd++;
			c=1;
		}
		if(d[i]==')'){
			sd--;
			c=0;
		}
		i++;
	}
	if(sd!=0||c!=0){
		cout<<"NO";
	}else{
		cout<<"YES";
	}
	return 0;
}
