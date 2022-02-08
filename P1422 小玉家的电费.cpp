#include <iostream>
#include <cstdio>
using namespace std;
int main(void){
    int n;
    cin>>n;
    double m=0;
    if(n<=150){ 
        m=n*0.4463;
    }else if(n<=400){
        m+=150*0.4463+(n-150)*0.4663;
    }else{
        m+=150*0.4463+(400-150)*0.4663+(n-400)*0.5663;
    }
	printf("%.1lf",m);
}
