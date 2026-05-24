#include<bits/stdc++.h>
using namespace std;




class Student{
	//属性，成员变量
	int id=0;
	string name="-";
	int age=-2;
	int score1=-1,score2=-1,score3=-1;
	
	public:
		//构造函数
		Student(int id,string name,int age){
			this->id=id;
			this->name=name;
			this->age=age;
		}
		Student(){
			
		}
		//get funciton
		int getId(){
			return id;
		}
		string getName(){
			return name;
		}
		int getAge(){
			return age;
		}
		int getScore1(){
			return score1;
		}
		int getScore2(){
			return score2;
		}
		int getScore3(){
			return score3;
		}
		
		//set function
		void setId(int id){
			this->id=id;
		}
		void setName(string name){
			this->name=name;
		}
		void setAge(int age){
			this->age=age;
		}
		void setScore1(int score1){
			this->score1=score1;
		}
		void setScore2(int score2){
			this->score2=score2;
		}
		void setScore3(int score3){
			this->score3=score3;
		}
};

vector<Student> students;

void showStudent(int a,int b){
	for(int i=a;i<b;i++){
		cout<<left<<setw(5)<<"id:"<<setw(5)<<students[i].getId()<<setw(7)<<
		"name:"<<setw(10)<<students[i].getName()<<setw(6)<<
		"age:"<<setw(5)<<students[i].getAge()<<setw(7)<<
		"score1:"<<setw(5)<<students[i].getScore1()
		<<setw(7)<<"score2:"<<setw(5)<<students[i].getScore2()
		<<setw(7)<<"score3:"<<setw(5)<<students[i].getScore3()<<endl;
	}
}

//查找学生的功能函数
int findStudent(int id){
	for(int i=0;i<students.size();i++){
		if(students[i].getId()==id){
			return i;
		}
	}
	return -1;
}







void output(){
	fstream outFile("students.txt");
		cout<<students.size()<<endl;
		for(int i=0;i<students.size();i++){
			outFile<<students[i].getId()<<" "
			<<students[i].getName()<<" "
			<<students[i].getAge()<<" "
			<<students[i].getScore1()<<" "
			<<students[i].getScore2()<<" "
			<<students[i].getScore3();
			if(i!=students.size()-1){
				outFile<<endl;
			}
			showStudent(i,i+1);
		}
		outFile.close();
}

	
void input(){
	fstream inFile("students.txt");
	students.clear();
	Student s;
	while(!inFile.eof()){
		int id,age,score1,score2,score3;
		string name;
		
		inFile>>id>>name>>age>>score1>>score2>>score3;
		s.setId(id);
		s.setName(name);
		s.setAge(age);
		s.setScore1(score1);
		s.setScore2(score2);
		s.setScore3(score3);
		students.push_back(s);
	
	}
		
		inFile.close();
}
	



void addStudent(){
	int id;
	string name;
	int age;
Ainid:		cout<<"Please enter the Id_number :"<<endl;
			cin>>id;
			int f=findStudent(id);
			if(f==-1){
Ainname:		cout<<"Please enter the name:"<<endl;
				cin>>name;
				for(int i=0;i<name.length();i++){
					cout<<name[i]<<" "<<name[i]-0<<' '<<sizeof(name)<<endl;
					if(!((name[i]>='A' && name[i]<='Z') || (name[i]>='a' && name[i]<='z'))){
						cout<<"The name is err;"<<endl;
						goto Ainname;
					}
				}
				
Ainage:			cout<<"Please enter the age:"<<endl;
				cin>>age;
				if(!(age>18 &&age<25)){
					cout<<"The age is err;"<<endl;
					goto Ainage;
				}
			}else{
Ainchoice:		cout<<"Enter the id again and enter 1 or 2:"<<endl;
				int k;
				cin>>k;
				if(k==1) goto Ainid;
				else if(k==2) return ;
				else goto Ainchoice;
			}
			cout<<"Add successfully:"<<endl;
			students.push_back(Student (id,name,age));
			output();
}

void deleteStudent(){
		int id;
Dinid:	cout<<"Enter the number need to be deleted:"<<endl;
		cin>>id;
		int f=findStudent(id);
		if(f!=-1){
			students.erase(students.begin()+f);		
			output();
			cout<<"Delete successfully:"<<endl;
		}
		else{
Dinchoice:	cout<<"Enter the id again and enter 1 or 2:"<<endl;
			int p;
			cin>>p;
			if(p==1) goto Dinid;
			else if(p==2) return ;
			else goto Dinchoice;
		}	
}

void find_Student(){
		int id;
Finid:		cout<<"Enter the number need to be found"<<endl;
			cin>>id;
			int f=findStudent(id);
			if(f!=-1){
				cout<<"Find successfully:"<<endl;
				showStudent(f,f+1);
			}
			else{
finchoice:			cout<<"Enter the id again and enter 1 or 2:"<<endl;
				int q;
				cin>>q;
				if(q==1) goto Finid;
				else if(q==2) return ;
				else goto finchoice;
			}

}



void modifyStudent(){
	string name;
	int id;
	int age;
	
	
modi:	cout<<"Enter the number need to be modified"<<endl;
		cin>>id;
		int f=findStudent(id);
		if(f!=-1){
			showStudent(f,f+1);
			cout<<"Enter the name:"<<endl;
			cin>>name;
			cout<<"Enter the age:"<<endl;
			cin>>age;
		}
		else{
mod:		cout<<"Wrong number and enter 1 or 2: "<<endl;
			int j;
			cin>>j;
			if(j==1)
				goto modi;
			else if(j==2) 
				return;
			else{
				cout<<"Enter again"<<endl;
				goto mod;
			} 
		}
		cout<<"Modify successfully"<<endl;
	
		students[f].setName(name);
		students[f].setAge(age);
		output();
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
		
		//ADD
		if(choice==1){		
			addStudent();
			
			//Delet
		}else if(choice==2){
			deleteStudent();
			
			//Find
		}else if(choice==3){
			find_Student();
			//Modify
		}else if(choice==4){
			modifyStudent();
		//Showall
		}else if(choice==5){
			showStudent(0,students.size());
			cout<<"Show successfully"<<endl;
		//Exit
		}else if(choice==0){
			return 0;
		}else{
			cout<<"Please enter again"<<endl;
		}
	}
}



