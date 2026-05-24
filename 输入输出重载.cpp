#include<bits/stdc++.h>
using namespace std;

class String{
	char* m_data;
	
	public:
		String(const char* str=nullptr){
			int len=(str==nullptr) ?0 : strlen(str);//读取传入字符串的长度
			m_data=new char[len+1];//申请一块长度为len+1的动态内存空间并传地址 
			//new申请出来的是匿名空间
			if(str==nullptr){
				m_data[0]='\0';
			}else{
				strcpy(m_data,str);
			}
		} 
		
		~String(){
			delete[] m_data;//动态对象时要有大括号
		}
		
		friend ostream& operator<<(ostream& os,const String& str){
			os<<str.m_data;
			return os;
		}
		
		friend istream& operator>>(istream& is,String& str){
			char buffer[1000];
			is>>buffer;
			int leng=strlen(buffer);
			
			delete[] str.m_data;
			
			str.m_data=new char[leng+1];
			strcpy(str.m_data,buffer);
			return is;
		}
		
		
};

int main(){
	String s1;
	cout<<"Content of s1:["<<s1<<"]"<<endl;
	
	String s2="Hellooo";
	cout<<s2<<endl;
	
	cout<<"Enter some words"<<endl;
	cin>>s1;
	cout<<s1<<endl;
	
	return 0;
}