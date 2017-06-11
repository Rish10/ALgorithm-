#include <bits/stdc++.h>
using namespace std;
int main(){
	string s,s1;
	cin>>s>>s1;
	int l=s.length();
	int l1=s1.length();
	int arr[l+1][l1+1];
	for(int i=0;i<=l;i++)
		arr[0][i]=0;
	for(int i=0;i<=l1;i++)
		arr[i][0]=0;
	int max=0;
	for(int i=0;i<l;i++){
		for(int j=0;j<l1;j++){
			if(s[i]==s1[j])
				arr[i+1][j+1]=1+arr[i][j];
			else
				arr[i+1][j+1]=0;
			if(arr[i+1][j+1]>max){
				max=arr[i+1][j+1];
			}
		}
	}
	cout<<max<<endl;
}