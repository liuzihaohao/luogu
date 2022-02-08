#include <iostream>
using namespace std;
int main(void){
	char ISBN[14];
	cin>>ISBN;
	//x-xxx-xxxxx-x
	int count=0;
	int a=1;
	for(int i=0;i<=11;i++){
		if(ISBN[i]!='-'){
			count+=((int)ISBN[i]-48)*a;
			a++;
//			cout<<(int)ISBN[i]-48<<endl;
		}
	}
	char sbm;
	if(count%11==10){
		if(ISBN[12]!='X'){
			ISBN[12]='X';
			cout<<ISBN;
		}else{
			cout<<"Right";
		}
	}else{
		if(ISBN[12]!=count%11+48){
			ISBN[12]=count%11+48;
//			cout<<count%11<<endl;
			cout<<ISBN;
		}else{
			cout<<"Right";
		}
	}
//	cout<<endl<<"ISBN="<<ISBN<<endl<<"count="<<count; //debug
	return 0;
}
