#include<bits/stdc++.h>
using namespace std;

class Student{
	int id=-1;
	string name;
	int age;
	int score;
	
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

void addStudent(int id,string name,int age,int score){
	for(int i=0;i<40;i++){
		if(students[i].getId()==-1){
			students[i].setId(id);
			students[i].setName(name);
			students[i].setAge(age);
			students[i].setScore(score);
			break;
		}

	}
}

void deleteStudent(int id){
	for(int i=0;i<40;i++){
		if(students[i].getId()==id){
			students[i].setId(-1);
			students[i].setName("");
			students[i].setAge(-1);
			students[i].setScore(-1);
			break;
		}
	}
}

void findStudent(int id){
	for(int i=0;i<40;i++){
		if(students[i].getId()==id){
			cout<<students[i].getId()<<" "<<students[i].getName()<<" "<<students[i].getAge()<<" "<<students[i].getScore()<<endl;
			break;
		}
	}
}

void modifyStudent(int id,string name,int age,int score){
	for(int i=0;i<40;i++){
		if(students[i].getId()==id){
			students[i].setName(name);
			students[i].setAge(age);
			students[i].setScore(score);
			break;
		}
	}
}

void showStudent(){
	for(int i=0;i<40;i++){
		if(students[i].getId()!=-1){
			cout<<students[i].getId()<<"  "<<students[i].getName()<<"  "<<students[i].getAge()<<"  "<<students[i].getScore()<<endl;
		}
	}
}

void saveTxt(){
	fstream file("sudents.txt",ios::app){
		for(int i=0;i<40;i++){
			file<<students[i].getId()<<" "<<students[i].getName()<<" "<<students[i].getAge()<<" "<<students[i].getScore()<<endl;
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
	
	while(true){
		showMenu();
		cin>>choice;
		if(choice==1){
			cout<<"Please enter Your number :"<<endl;
			cin>>id;
			cout<<"Please enter your name:"<<endl;
			cin>>name;
			cout<<"Please enter your age:"<<endl;
			cin>>age;
			cout<<"Please enter your score:"<<endl;
			cin>>score;
			addStudent(id,name,age,score);
			cout<<"Add successfully:"<<endl;
		}else if(choice==2){
			cout<<"Enter the number need to be deleted:"<<endl;
			cin>>id;
			deleteStudent(id);
			cout<<"Delete successfully:"<<endl;
		}else if(choice==3){
			cout<<"Enter the number need to be found"<<endl;
			cin>>id;
			findStudent(id);
			cout<<"Find successfully:"<<endl;
		}else if(choice==4){
			cout<<"Enter the number need to be modified"<<endl;
			cin>>id;
			cin>>name;
			cin>>age;
			cin>>score;
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