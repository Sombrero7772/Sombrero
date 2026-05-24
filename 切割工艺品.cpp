#include<bits/stdc++.h>
using namespace std;

int main(){
    int w,x,h;
    int q;
    int a[10][10][10]={0};
    int cnt=0;
    
    cin>>w>>x>>h;
    cin>>q;
    
    for(int b=0;b<q;++b){
    	int x1,y1,z1,x2,y2,z2;
		cin>>x1>>x2>>y1>>y2>>z1>>z2;
        for(int i=x1;i<=x2;++i){
            for(int j=y1;j<=y2;++j){
                for(int k=z1;k<=z2;++k){
                    a[i][j][k]=1;
                }
            }
        }
    }

    for(int i=1;i<=w;i++){
        for(int j=1;j<=x;j++){
            for(int k=1;k<=h;k++){
                if(!a[i][j][k]){
                    cnt++;
                }
        	}
    	}
	}

    cout<<cnt;
    return 0;
}