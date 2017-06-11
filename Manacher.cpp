#include <bits/stdc++.h>
using namespace std; 
int main(){
	string s;
	cin>>s;
	int N=s.length();
	N=2*N+1;
	int L[N];
	memset(L,0,sizeof(L));
	int C=0,R=0,i,iMirror,maxLPSlength=0,position=0;
	for(i=1;i<N-1;i++){
		iMirror=2*C-i;
		if(i<R)	
			L[i]=min(R-i,L[iMirror]);
		while(s[(i+(1+L[i]))/2]==s[(i-(1+L[i]))/2] || ((i+L[i]+1)%2==0))
			L[i]++;
		if(i+L[i]>R){
			C=i;
			R=i+L[i];
		}
		if(L[i]>maxLPSlength){
			maxLPSlength=L[i];
			position=i;
			cout<<position<<" ";
		}
	}
	int start=(position - maxLPSlength)/2;
	int end=start+maxLPSlength-1;
	cout<<maxLPSlength<<endl;
	for(i=start; i<=end; i++)
        printf("%c",s[i]);
}