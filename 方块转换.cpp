#include<bits/stdc++.h>
using namespace std;

struct picture{
	int n;
	char a[10][10];
};

picture revolve(char a[][],picture c){
	picture pi;
	for(int i=0;i<c.n;i++){
		for(int j=0;j<c.n;j++){
				pi.a[j][c.n-1-i]=c.a[i][j];
		}
	}
	return pi;
}

bool one(picture c){
	for(int i=0;i<c.n;i++){
		for(int j=0;j<c.n;j++){
				if(c.a[i][j]!=c.b[j][c.n-1-i])return false;
		}
	}
	return true;
}


bool two(picture c){
		for(int i=0;i<c.n;i++){
			for(int j=0;j<c.n;j++){
				if(c.a[i][j]!=c.b[c.n-1-i][c.n-1-j])
					return false;
			}
		}return true;
}

bool three(picture c){
	for(int i=0;i<c.n;i++){
		for(int j=0;j<c.n;j++){
			if(c.a[i][j]!=c.b[c.n-1-j][i]){
				return false;
			}

		}
	}
	return true;
}

bool four(picture c){
	
	
	for(int i=0;i<c.n;i++){
		for(int j=0;j<c.n;j++){
			if(c.a[i][j]!=c.b[i][c.n-1-j]){
				return false;
			}
			
		}
	}
	
		
	return true;
}


bool five(picture c){
	for(int i=0;i<c.n;i++){
		for(int j=0;j<c.n/2;j++){
			swap(c.a[i][j],c.a[i][c.n-1-j]);
		}
	}
	if(one(c) || two(c) || three(c)){
		return true;
	}
	return false;
}

bool six(picture c){
	for(int i=0;i<c.n;i++){
		for(int j=0;j<c.n;j++){
			if(c.a[i][j]!=c.b[i][j]){
				return false;
			}
		}
	}
	return true;
}

int main(){
	
	picture pic1,pic2,pic;
	cin>>pic.n;
	pic1.n=pic2.n=pic.n;
	for(int i=0;i<pic.n;i++){
		for(int j=0;j<pic.n;j++){
			cin>>pic1.a[i][j];
			}
	};
	for(int i=0;i<pic.n;i++){
		for(int j=0;j<pic.n;j++){
			cin>>pic2.a[i][j];
			}
	}
	int cont=8;
	while(cont){
		pic1=revolve(pic1);
		
	}
	cout<<7;
	if(one(pic)){
		cout<<1;
	}
	else if(two(pic)){
		cout<<2;
	}
	else if(three(pic)){
		cout<<3;
	}
	else if(four(pic)){
		cout<<4;
	}
	else if(five(pic)){
		cout<<5;
	}
	else if(six(pic)){
		cout<<6;
	}
	else{
		cout<<7;
	}
}