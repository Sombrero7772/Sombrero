
#include<bits/stdc++.h>
using namespace std;

int n;
char a[10][10];
char b[10][10];

void  revolve(){
	int temp[10][10];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			temp[j][n-1-i]=a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			a[i][j]=temp[i][j];
		}
	}
	
}

void overturn(){
	for(int i=0;i<n;i++){
		for(int j=0;j<n/2;j++){
			swap(a[i][j],a[i][n-1-j]);
		}
	}
}

bool judge(){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]!=b[i][j]){
				return false;
			}
		}
		return true;
	}
}

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
		
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>b[i][j];
		}
	}
	
	revolve();
	
	if(judge()){
		cout<<1;
		return 0;
	}
	
	revolve();
	
	if(judge()){
		cout<<2;
		return 0;
	}
	
	revolve();
	
	if(judge()){
		cout<<3;
		return 0;
	}
	
	revolve();
	overturn();
	if(judge()){
		cout<<4;
		return 0;
	}
	
	revolve();
	
	if(judge()){
		cout<<5;
		return 0;
	}
	
	revolve();
	
	if(judge()){
		cout<<5;
		return 0;
	}
	
	revolve();
	
	if(judge()){
		cout<<5;
		return 0;
	}
	
	revolve();
	overturn();
	if(judge()){
		cout<<6;
		return 0;
	}
	
	cout<<7;
	
}
