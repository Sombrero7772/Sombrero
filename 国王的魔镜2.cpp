#include<bits/stdc++.h>
using namespac std;

int main(){
	char a[10000];//ABBAABBA
	cin>>a;
	
	int len=strlen(a);
	while(len){
		bool flag=true;
		cout<<len<<endl;
		if(len%2!=0){
			break;
		}
		else{
			for(int i=0;i<len/2;++i){
				if(a[i]!=a[len-1-i]){
					cout<<a[i]<<"  "<<a[len-1-i]<<endl;
					flag=false;
				}
			}
		}if(!flag){
			break;
		}
		len/=2;
	}
	
	cout<<len<<endl;
	
}