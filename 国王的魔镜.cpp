#include<bits/stdc++.h>
using namespace std;

char str[100000];

void calculate(int len){
	int mid=len/2;
	
	if(len%2==1){
		cout<<len;
		return;
	}
	else{
		for(int i=0,j=len-1;i<=len/2-1,j>=len/2;i++,j--){
			if(str[i]!=str[j]){
				cout<<len;
				return;
			}
		}
	}
	calculate(mid);
}
int main(){
	
	cin>>str;//ABBAABBA
	int k=strlen(str);
	calculate(k);
	return 0;
}