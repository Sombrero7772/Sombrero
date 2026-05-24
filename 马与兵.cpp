#include<bits/stdc++.h>
using namespace std;

int m[20][20];
int a,b,c,d;
int cnt=0;

void move(int e,int f){
	
	if(m[e][f]==2){
		cnt++;
		return;//an exit
	}
	if(m[e][f+1]!=1&& (f+1)<=b){
		move(e,f+1);
	}
	if(m[e+1][f]!=1 && (e+1)<=a){
		move(e+1,f);
	}
	return;//an exit
}

int main(){
	
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	
	for(int i=0;i<a-1;i++){
		for(int j=0;j<b-1;j++){
			m[i][j]=0;
		}
	}
	m[a][b]=2;
	m[c][d]=1;
	m[c-2][d+1]=1;
	m[c-1][d+2]=1;
	m[c+1][d+2]=1;
	m[c+2][d+1]=1;
	m[c+2][d-1]=1;
	m[c+1][d-2]=1;
	m[c-1][d-2]=1;
	m[c-2][d-1]=1;
	

	move(0,0);
	cout<<cnt;
	return 0;
}