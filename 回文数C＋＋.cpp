#include<bits/stdc++.h>
using namespace std;
int main(){
	int a;
	int b;
	cin>>a>>b;
	
	
	for(int i=a;i<=b;i++){
		bool flag=true;
        for(int j=2;j<=sqrt(i);j++){
        	if(i%j==0){
        		flag=false;
        		break;
			}
		}

	int temp=i;
	int c=0;
	while (temp){
		c=c*10+temp%10;
		temp/=10;
	}if(i==c&&flag){
		cout<<i<<"\n";
	}
	
	
}
}