#include <bits/stdc++.h>
using namespace std; 
int main(){
	int t;
	cin>>t;
	while(t--){
	string s;
	cin>>s;
	int l=s.length();
	int arr[l][l]={0};
	for(int i=0;i<l;i++)
		arr[i][i]=1;
	for (int i = 0,j=1; j<=l-1;i++,j++){
		if(s[i]==s[j])
			arr[i][j]=2;
		else
			arr[i][j]=1;
	}
	for(int i=2;i<l;i++){
		int start,end=i;
		for(start=0;end<l;start++,end++){
			if(s[start]==s[end]){
				arr[start][end]=arr[start+1][end-1]+2;
			}
			else{
				arr[start][end]=max(arr[start+1][end],arr[start][end-1]);
			}
		}
	}
	//for (int j=0; j<=l-1;j++){
		//for(int i=0; i<l;i++){
		cout<<l-arr[0][l-1]<<endl;
		//}
		//cout<<endl;}
	}
}