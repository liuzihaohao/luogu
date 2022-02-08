#include <iostream>
#include <string>
using namespace std;
int getcn(char a){
	int b=(int)a;
	return b-64;
}
int main(void){
	string a;
	string b;
	int an=1,bn=1;
	getline(cin,a);
	getline(cin,b);
	for(int i=0;i<a.length();i++){
		an=an*getcn(a.at(i));
	}
	for(int i=0;i<b.length();i++){
		bn=bn*getcn(b.at(i));
	}
//	cout<<an<<endl<<bn<<endl;
	if(an%47==bn%47){
		cout<<"GO";
	}else{
		cout<<"STAY";
	}
	return 0;
}
