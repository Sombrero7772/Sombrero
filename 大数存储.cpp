#include<bits/stdc++.h>
using namespace std;

class bigMath{
	public:
	int *q,index=0;
	
	
	int b[10000]={0};
	void input(string str){
		for(int i=0;i<str.length();i++){
			b[str.length()-i-1]=str[i]-'0';
		}
		index=str.length()-1;
	}
	
	void add(int m){
		for(int i=0;m>0;i++){
			int n=m%10;
			b[i]+=n;
			m/=10;
			if(i>index){
				index=i;
			}
		}
		for(int i=0;i<=index;i++){
			if(b[i]>=10){
				b[i+1]+=b[i]/10;
				b[i]=b[i]%10;
				if(i==index)index=i+1;	
			}
		}
	}

	void subtract(int alength,int *a){
		if(sizeof(b)/sizeof(b[0])>alength){
		 	for(int i=alength-1;i>=0;i--){
				if(b[i]<*(a+i)){
					b[i+1]-=1;
					b[i]+=10;
				}
				if(i==index && b[i]==*(a+i)){
					index=index-1;
				}
				b[i]-=* (a+i);
			}
		}else{
			for(int i=sizeof(b)/sizeof(b[0]);i>=0;i--){
				if(b[i]<*(a+i)){
					b[i+1]-=1;
					b[i]+=10;
				}
				if(i==index && b[i]==*(a+i)){
					index=index-1;
				}
				b[i]-=* (a+i);
			}
		}
			
	}

	void save(int a){
		for(int i=0;a;i++){
			b[i]=a%10;
			a/=10;
			index=i;
		}
	}
		
	void output(){
		for(int i=index;i>=0;i--){
			cout<<b[i]<<" ";
		}cout<<endl;
	}
			
};


int main(){
  bigMath price;
  bigMath bigm;
  int act=1;
  cout<<"enter a number";
  string str;
  cin>>str;
  price.input(str);
  while(act){
  	cout<<"enter a number:"<<endl<<"1:add"<<endl<<"2:subtract"<<endl<<"0:out"<<endl;
  	cin>>act;
  	int m;
  	switch(act){
  		case 1:
  			cout<<"enter the added number:"<<endl;
  			cin>>m;
  			price.add(m);
  			price.output();
  			break;
  		case 2:
  			cout<<" enter the subtracted number:"<<endl;
  			cin>>m;
  			bigm.save(m);
  			price.subtract(bigm.index+1,bigm.b);
  			price.output();
  			break;
  		case 0:
  			cout<<"bye"<<endl;
  		}
  	}
}