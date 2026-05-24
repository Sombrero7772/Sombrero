#include<bits/stdc++.h>
using namespace std;
int main(){
	
	
	int l,m,u,v;
	int count=0;
	cin>>l>>m;
	int a[l+1]={0};
	
	for(int i=0;i<m;i++){
		cin>>u>>v;
		for(int j=u;j<=v;j++){
			a[j]=1;
		}
	}
	
	for(int i=0;i<l;i++){
		
		if(a[i]==1){
			count++;
		}
	}
	count=l+1-count;
	cout<<count;
}