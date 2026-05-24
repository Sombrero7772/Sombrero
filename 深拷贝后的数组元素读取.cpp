#include<bits/stdc++.h>
using namespace std;

class String{
	char* m_data;
	
	public:
		String(const char* str=nullptr) {
			int len=(str==nullptr) ? 0 : strlen(str); 
			m_data=new char[len+1];
			if(str==nullptr) {
				m_data[0]='\0';
			}else{
				strcpy(m_data,str);
			}
		}
		
		String(const String& s){
			int len=strlen(s.m_data);
			
			m_data=new char[len+1];
			strcpy(m_data,s.m_data);
		}
		
		~String(){
			delete[] m_data;
		}
		
		friend ostream& operator<<(ostream& os,const String& s){
			os<<s.m_data;
			return os;
		}
		
		friend istream& operator>>(istream& is,String& s){
			char buffer[1000];
			is>>buffer;
			int leng=strlen(buffer);
			delete[] s.m_data;
			
			s.m_data=new char[leng+1];
			strcpy(s.m_data,buffer);
			return is;
		}
		
		String& operator=(const String& s){
			if(this==&s){
				return *this;
			}
			
			delete[] m_data;
			
			int length=strlen(s.m_data);
			m_data=new char[length+1];
			strcpy(m_data,s.m_data);
			return *this;
		}
		
		char& operator[](int index){
			return m_data[index];
		}
		
		const char& operator[](int index)const{
			return m_data[index];
		}
		
		int length() const{
			return strlen(m_data);
		}
};


int main(){
	String str1="Neymar";
	String const str2="Yanlin";
	
	int index1;
	cout<<"Enter the value of index1"<<endl;
	cin>>index1;
	
	if(index1<str1.length()){
		str1[index1]='j';
		cout<<"The modificated array is: "<<str1<<endl;
	}else{
		cout<<"Enter index1 again."<<endl;
		return 1;
	}
	
	int index2;
	cout<<"Enter the value of index2"<<endl;
	cin>>index2;
	
	if(index2<str2.length()){
		cout<<"The character in str2["<<index2<<"] is: "<<str2[index2]<<endl;
	}else{
		cout<<"Enter index2 again."<<endl;
		return 1;
	}
	
	return 0;
}