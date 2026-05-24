#include<bits/stdc++.h>
using namespace std;

int m[20][20];
int a,b,c,d;
int cnt=0;

void move(int e,int f){
	if(m[e][f]==2){
		cnt++;
	}else if(m[e][f+1]==0 && (f+1)<=20){
		move(e,f+1);
	}                   
	else if(m[e+1][f]==0 && (e+1)<=20){
		move(e+1,f);
	}          
}

int main(){
	
	cin>>a>>b>>c>>d;	
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