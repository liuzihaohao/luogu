#include <iostream>
using namespace std;
string c1,c2;
bool k[1005];
char a[27][27]={
{"abcdefghijklmnopqrstuvwxyz"}, 
{"zabcdefghijklmnopqrstuvwxy"},
{"yzabcdefghijklmnopqrstuvwx"},
{"xyzabcdefghijklmnopqrstuvw"},
{"wxyzabcdefghijklmnopqrstuv"},
{"vwxyzabcdefghijklmnopqrstu"},
{"uvwxyzabcdefghijklmnopqrst"},
{"tuvwxyzabcdefghijklmnopqrs"},
{"stuvwxyzabcdefghijklmnopqr"},
{"rstuvwxyzabcdefghijklmnopq"},
{"qrstuvwxyzabcdefghijklmnop"},
{"pqrstuvwxyzabcdefghijklmno"},
{"opqrstuvwxyzabcdefghijklmn"},
{"nopqrstuvwxyzabcdefghijklm"},
{"mnopqrstuvwxyzabcdefghijkl"},
{"lmnopqrstuvwxyzabcdefghijk"},
{"klmnopqrstuvwxyzabcdefghij"},
{"jklmnopqrstuvwxyzabcdefghi"},
{"ijklmnopqrstuvwxyzabcdefgh"},
{"hijklmnopqrstuvwxyzabcdefg"},
{"ghijklmnopqrstuvwxyzabcdef"},
{"fghijklmnopqrstuvwxyzabcde"},
{"efghijklmnopqrstuvwxyzabcd"},
{"defghijklmnopqrstuvwxyzabc"},
{"cdefghijklmnopqrstuvwxyzab"},
{"bcdefghijklmnopqrstuvwxyza"},
};//将转换式打入数组中 
int main(){
    cin>>c2>>c1;
    cout<<""
    int n1=c1.length(),n2=c2.length();
    for(int i=0;i<n1;i++)
    {
        if(c1[i]>='A' && c1[i]<='Z')
        {
            c1[i]=c1[i]-'A'+'a';
            k[i]=1;
        }
    }
    for(int i=0;i<n2;i++)
    {
        if(c2[i]>='A' && c2[i]<='Z')
        {
            c2[i]=c2[i]-'A'+'a';
        }
    }
    for(int i=0;i<n1;i++)
    {
        int s=i%n2;
        int a1=c1[i]-'a';
        int a2=c2[s]-'a';
        if(k[i]==1)
        {
        	cout<<char(a[a2][a1]-'a'+'A');
		}
		else
		{
			cout<<a[a2][a1];
		}
    }
	return 0;
}

