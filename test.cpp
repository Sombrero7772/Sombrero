#include<bits/stdc++.h>
using namespace std;


void input(){
	fstream inFile("students.txt");
	int i=0;
		while(!inFile.eof()){
			int id,age,score;
			string name;
			inFile>>id>>age>>name>>score;
			cout<<id<<" "<<age<<" "<<name<<" "<<score<<endl;
			cout<<inFile.eof()<<endl;
	

		}
		
		inFile.close();
}
	













int main(){
input();
}



