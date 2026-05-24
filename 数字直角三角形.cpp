#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int a=1;
    cin>>n;
    
    for(int i=n;i>=1;i--){
    	for(int j=0;j<i;j++){
    		if(a<10){
    			cout<<"0"<<a++;
			}else{
				cout<<a++;
			}
			
		}
		cout<<endl;
	}
    return 0;
}