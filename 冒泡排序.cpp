#include<bits/stdc++.h>
using namespace std;

int main(){
	int m,n;
	int a[20];
	int b[20];
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=i+1;
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1-i;j++){
			if(a[j]<a[j+1]){
				swap(a[j],a[j+1]);
				swap(b[j],b[j+1]);
		}
	}
}
	
	cout<<b[0]<<endl;
	cout<<a[0];
	
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(a[j]<a[x]){
				x=j;
			}
		}
		swap(a[j],a[x]);
	}
	
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
}