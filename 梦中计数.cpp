#include<bits/stdc++.h>
using namespace std;
int main(){
	int M,N;
	int a[10]={0};
	cin>>M>>N;
	
	for(int i=M;i<=N;i++){
		int temp=i;
		while(temp){
			a[temp%10]++;
			temp/=10;
		}
	}
	
	for(int i=0;i<=9;i++){
		cout<<a[i]<<" ";
	}
}