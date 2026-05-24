#include<bits/stdc++.h>
using namespace std;

int main(){
	int a=0;
	int b=0;
	int c;
	
	for(int i=1;i<=12;i++){
		cin>>c;
		if(a+300-c<0){
			cout<<"-"<<i;
			return 0;
		}else{
			a=a+300-c;
			
			b+=a-a%100;
			a=a%100;
		}
	}
	
	b=a+1.2*b;
	cout<<b;
	
}
