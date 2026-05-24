#include<bits/stdc++.h>
using namespace std;

struct student{
	string name;
	int age;
	double scores; 
};



int main(){
	int n;
	student s[100];
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>s[i].name;
		cin>>s[i].age;
		cin>>s[i].scores;
		
		s[i].age=s[i].age+1;
		s[i].scores*=1.2;
		if(s[i].scores>600){
			s[i].scores=600;
		}
	}
	
	for(int i=0;i<n;i++){
		cout<<s[i].name<<" "<<s[i].age<<" "<<s[i].scores<<endl;
	}
	return 0;
}