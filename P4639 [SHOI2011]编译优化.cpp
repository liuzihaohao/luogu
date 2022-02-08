#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
const int M=1e5+5;
int tim=1,P,ID,OUT,GOTO;
char s[15]; long long VAL,X[M],Y[M];
struct Matrix{ long long a[27][27];
	Matrix (){memset(a,0,sizeof a);}
	long long* operator [](int x){return a[x];}
	Matrix operator *(Matrix b){
		static Matrix tmp;
		for(int i=1;i<=26;++i)
			for(int j=1;j<=26;++j)
				tmp[i][j]=0;
		for(int i=1;i<=26;++i)
			for(int j=1;j<=26;++j)
				for(int k=1;k<=26;++k)
					tmp[i][j]+=a[i][k]*b[k][j];
		return tmp;
	}
}A,mp[65],tmp;
int main(){
	for(int i=1;i<=26;++i) scanf("%lld",&A[1][i]);
	while(true){
		scanf("%s",s+1),++tim;
		if(s[1]=='P'){scanf("%s",s),OUT=s[0]-'A'+1;break;}
		else if(s[1]=='A'){
			scanf("%s",s),X[tim]=s[0]-'A'+1;
			scanf("%s",s),Y[tim]=s[0]-'A'+1;
			A[1][X[tim]]+=A[1][Y[tim]];
		}
		else if(s[1]=='I'){
			scanf("%s",s),ID=s[0]-'A'+1;
			scanf("%s",s),scanf("%lld",&VAL);
			scanf("%s%s",s,s),scanf("%d",&GOTO);
			for(int i=1;i<=26;++i)
				++mp[0][i][i];
			for(int i=GOTO;i<tim;++i)
				for(int j=1;j<=26;++j)
					mp[0][j][X[i]]+=mp[0][j][Y[i]];
			for(P=1;P<64;++P){
				mp[P]=mp[P-1]*mp[P-1];
				tmp=A*mp[P];
				if(tmp[1][ID]>=VAL) break;
			}
			for(int i=P;i>=0;--i){
				tmp=A*mp[i];
				if(tmp[1][ID]<VAL)
					A=tmp;
			} A=A*mp[0];
		}
	} return cout<<A[1][OUT]<<endl,0;
}
