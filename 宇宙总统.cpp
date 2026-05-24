#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int a[20];
	int b[20];
	int temp;
	int m;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	
	bool t=true;
	for(int i=0;i<n;i++){
		if(t){
			temp=i;
			if(a[i]>a[i+1]){
				swap(a[i],a[i+1]);
				bool=false;
			}
			else{
				bool=true;
			}
		}
		if(i==n-1 && t){
			temp+=1;
		}
		
	}
	
	for(int i=0;i<n;i++){
		if(a[n-1]==b[i]){
			m=i+1;
			cout<<m<<endl;
			cout<<a[n-1]<<endl;
		}
	}
	
	return 0;
	
}