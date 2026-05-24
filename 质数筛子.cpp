#include<bits/stdc++.h>
using namespace std;

void zs(int a){
	bool flag=true;
		for(int j=2;j<=sqrt(a);j++){
			if(a%j==0){
				flag=false;
				break;
			}
		}if(flag)
			cout<<a<<" ";
}

int main(){
	int n;
	int a[100];
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>a[i];
		zs(a[i]);
	}
	return 0;
	
}

