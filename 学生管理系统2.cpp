#include<bits/stdc++.h>
using namespace std;

class Student{
    int id;
    string name;
    int age;
    int grade;
    
    public:
    Student(int id, string name, int age, int grade){
        this->id = id;
        this->name = name;
        this->age = age;
        this->grade = grade;
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
    int getGrade(){
        return grade;
    }
    void setId(int id){
        this->id = id;
    }
        void setName(string name){
            this->name = name;
        }
        void setAge(int age){
            this->age = age;
        }
        void setGrade(int grade){
            this->grade = grade;
        }
};

class studentMannagementSystem{
    vector<Student> students;

    public:
	    void addStudent(int id, string name, int age, int grade){
	        for(auto& student : students){
	            if(student.getId() == id){
	                cout<<"This student has already existed"<<endl;
	                return;
	            }    
	        }
	        students.push_back(Student(id, name, age, grade));
	        cout<<"Student added successfully"<<endl;
	    } 

	    void deleteStudent(int id){
	        for(auto it=students.begin(); it!=students.end();++it){
	            if(it->getId() == id){
	                students.erase(it);
	                cout<<"Student deleted successfully"<<endl;
	                return;
	            }
	        }
	        cout<<"This student is not founded"<<endl;
    	}


		void findStudent(int id){
		    for(auto&student :students){
		        if(student.getId()==id){
		            cout<<"Name:"<<student.getName()<<endl;
		            cout<<"Age:"<<student.getAge()<<endl;
		            cout<<"Grade:"<<student.getGrade()<<endl;
		            return;
		        }
		    }
		}
	
		void modifyStudent(int id, string name, int age, int grade){
		    for(auto&student:students){
		        if(student.getId()==id){
		            student.setName(name);
		            student.setAge(age);
		            student.setGrade(grade);
		            return;
		        }
		    }
		}
};

void showMenu(){
    cout<<"1. Add Student"<<endl;
    cout<<"2. Delete Student"<<endl;
    cout<<"3. Find Student"<<endl;
    cout<<"4. Modify Student"<<endl;
    cout<<"5. Exit"<<endl;
}
int main(){
    studentMannagementSystem s;
    int choice;
    while(true){
        showMenu();
        cin>>choice;
         int id, age, grade;
        	string name;
        switch(choice){
            case 1:
                cout<<"Enter Student Id:"<<endl;
                cin>>id;
                cout<<"Enter Student Name:"<<endl;
                cin>>name;
                cout<<"Enter Student Age:"<<endl;
                cin>>age;
                cout<<"Enter Student Grade:"<<endl;
                cin>>grade;
                s.addStudent(id, name, age, grade);
                break;
            case 2:
				cout<<"Enter Student Id to delete:"<<endl;
                cin>>id;
                s.deleteStudent(id);
                break;
            case 3:
                cout<<"Enter Student Id to find:"<<endl;
                cin>>id;
                s.findStudent(id);
                break;
            case 4:
                cout<<"Enter Student Id to modify:"<<endl;
                cin>>id;
                cout<<"Enter Student Name:"<<endl;
                cin>>name;
                cout<<"Enter Student Age:"<<endl;
                cin>>age;
                cout<<"Enter Student Grade:"<<endl;
                cin>>grade;
                s.modifyStudent(id, name, age, grade);
                break;
            case 5:
                exit(0);
            default:
                cout<<"Invalid choice"<<endl;
        }
    }
    return 0;
}
