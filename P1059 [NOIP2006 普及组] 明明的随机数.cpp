#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
int main(){
	int m;
	cin>>m;
    int i;
    int a[m];
	for(int i=0;i<m;i++){
		cin>>a[i];
	}
	sort(a,a+m,less<int>());
    int n = unique(a,a+m)-a;
    cout<<n<<endl;
    for(i=0;i<n;i++){
        cout<<a[i];
        if(i!=n-1){
        	cout<<" ";
		}
	}
	return 0;
}
