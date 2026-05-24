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
};


int main(){
	String str;
	cout<<"Enter the content of str"<<endl;
	cin>>str;
	
	cout<<String(str)<<endl;
	return 0;
}