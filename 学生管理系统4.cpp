#include<bits/stdc++.h>
using namespace std;




class Student{
	int id=0;
	string name="-";
	int age=-2;
	int score=-10;
	
	public:
		Student(int id,string name,int age,int score){
			this->id=id;
			this->name=name;
			this->age=age;
			this->score=score;
		}
		Student(){
			
		}
		int getId(){
			return id;
		}
		string getName(){
			return name;
		}
		int getAge(){
			return age;
		}
		int getScore(){
			return score;
		}
		
		void setId(int id){
			this->id=id;
		}
		void setName(string name){
			this->name=name;
		}
		void setAge(int age){
			this->age=age;
		}
		void setScore(int score){
			this->score=score;
		}
		
};

Student students[40];

void output(){
	fstream outFile("students.txt",ios::out);
		for(int i=0;i<40;i++){
			if(students[i].getId()){
				outFile<<students[i].getId()<<" "<<students[i].getName()<<" "<<students[i].getAge()<<" "<<students[i].getScore()<<endl;
			}
		}
		outFile.close();
	}
	
void input(){
	fstream inFile("students.txt");
		for(int i=0;i<40;i++){
			students[i].setId(0);
			students[i].setName("");
			students[i].setAge(0);
			students[i].setScore(0);	
		}
		int id,age,score;
		string name;
		for(int i=0;i<40;i++){
		
			
			if(students[i].getId()==0){
				inFile>>id;
				inFile>>name;
				inFile>>age;
				inFile>>score;
				if(inFile.eof()){
				break;
			}
				students[i].setId(id);
				
				students[i].setName(name);
			
				students[i].setAge(age);
				
				students[i].setScore(score);
			}
			
			
			
		}
		inFile.close();
	}
	



void addStudent(int id,string name,int age,int score){
	for(int i=0;i<40;i++){
		if(!students[i].getId()){
			students[i].setId(id);
			students[i].setName(name);
			students[i].setAge(age);
			students[i].setScore(score);
			output();
			break;
		}
	}
}

void deleteStudent(int id){
	for(int i=0;i<40;i++){
		if(students[i].getId()==id){
			students[i].setId(0);
			students[i].setName("");
			students[i].setAge(0);
			students[i].setScore(0);
			output();
			break;
		}
	}
}

bool findStudent(int id){
	for(int i=0;i<40;i++){
		if(students[i].getId()==id){
			cout<<students[i].getId()<<" "<<students[i].getName()<<" "<<students[i].getAge()<<" "<<students[i].getScore()<<endl;
			return true;
		}
	}
	return false;
}

void modifyStudent(int id,string name,int age,int score){
	for(int i=0;i<40;i++){
		if(students[i].getId()==id){
			students[i].setName(name);
			students[i].setAge(age);
			students[i].setScore(score);
			output();
			break;
		}
	}
}

void showStudent(){
	for(int i=0;i<40;i++){
		if(students[i].getId()!=0){
			cout<<"this id:"<<students[i].getId()<<"  this name:"<<students[i].getName()<<"  this age:"<<students[i].getAge()<<"  this score:"<<students[i].getScore()<<endl;
		}
	}
}



void showMenu(){
	cout<<"1:Add student message:"<<endl;
	cout<<"2:Delete student message:"<<endl;
	cout<<"3:Searching for student message:"<<endl;
	cout<<"4:Modifying student message:"<<endl;
	cout<<"5:Show all students:"<<endl;
	cout<<"0:Exit:"<<endl;
}

int main(){
	int choice;
	int id;
	string name;
	int score;
	int age;
	input();
	
	while(true){
		showMenu();
		cin>>choice;
		if(choice==1){
mo:			cout<<"Please enter the number :"<<endl;
			cin>>id;
			if(!findStudent(id)){
				cout<<"Please enter the name:"<<endl;
				cin>>name;
				cout<<"Please enter the age:"<<endl;
				cin>>age;
				cout<<"Please enter the score:"<<endl;
				cin>>score;
			}else{
mi:				cout<<"Enter the id again and enter 1 or 2:"<<endl;
				int k;
				cin>>k;
				if(k==1) goto mo;
				else if(k==2) continue;
				else goto mi;
			}
			addStudent(id,name,age,score);
			cout<<"Add successfully:"<<endl;
		}else if(choice==2){
moi:		cout<<"Enter the number need to be deleted:"<<endl;
			cin>>id;
			if(findStudent(id)){
				deleteStudent(id);
				cout<<"Delete successfully:"<<endl;
			}
			else{
mii:			cout<<"Enter the id again and enter 1 or 2:"<<endl;
				int p;
				cin>>p;
				if(p==1) goto moi;
				else if(p==2) continue;
				else goto mii;
			}
		}else if(choice==3){
nii:		cout<<"Enter the number need to be found"<<endl;
			cin>>id;
			if(findStudent(id)){
				cout<<"Find successfully:"<<endl;
			}
			else{
nij:			cout<<"Enter the id again and enter 1 or 2:"<<endl;
				int q;
				cin>>q;
				if(q==1) goto nii;
				else if(q==2) continue;
				else goto nij;
			}
		}else if(choice==4){
modi:		cout<<"Enter the number need to be modified"<<endl;
			cin>>id;
			if(findStudent(id)){
				cout<<"Enter the name:"<<endl;
				cin>>name;
				cout<<"Enter the age:"<<endl;
				cin>>age;
				cout<<"Enter the score:"<<endl;
				cin>>score;
			}
			else{
mod:		cout<<"Wrong number and enter 1 or 2: "<<endl;
			int j;
			cin>>j;
			if(j==1)
			goto modi;
			else if(j==2) continue;
			else{
				cout<<"Enter again:"<<endl;
				goto mod;
			} 
		}
			modifyStudent(id,name,age,score);
			cout<<"Modify successfully:"<<endl;
		}
		else if(choice==5){
			showStudent();
			cout<<"Show successfully:"<<endl;
		}else if(choice==0){
			return 0;
		}else{
			cout<<"Please enter again:"<<endl;
		}
	}
}



