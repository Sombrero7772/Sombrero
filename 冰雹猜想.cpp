#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int a[100];
	int b=1;
	cin>>n;
	a[0]=n;
	
	if(n==2){
		cout<<1<<" "<<2;
		return 0;
	}else{
		while(n!=1){
			if(n%2==0){
				n/=2;
			}else{
				n=n*3+1;
			}
			a[b++]=n;		
		}
	}
	
	for(int i=b-1;i>=0;i--){
		cout<<a[i]<<" ";
	}
	
	return 0;
	
	
}