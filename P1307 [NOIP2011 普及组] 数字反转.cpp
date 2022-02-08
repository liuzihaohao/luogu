#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
void reverse(char* s)
{
    int len = 0;
    char* p = s;
    while (*p != 0)
    {
        len++;
        p++;
    }
    int i = 0;
    char c;
    while (i <= len / 2 - 1)
    {
        c = *(s + i);
        *(s + i) = *(s + len - 1 - i);
        *(s + len - 1 - i) = c;
        i++;
    }
}
int main(void){
	int n;
	cin>>n;
	if(n<0){
		n=n*(-1);
		char a[10];
		sprintf(a,"%d",n);
		cout<<"-";
		reverse(a);
		cout<<atoi(a);
		return 0;
	}else if(n==0){
		cout<<n;
		return 0;
	}else{
		char a[10];
		sprintf(a,"%d",n);
		reverse(a);
		cout<<atoi(a);
	}
	return 0;
}
