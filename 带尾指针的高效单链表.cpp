#include<bits/stdc++.h>
using namespace std;


class singleLinkedList{
	struct Node{
		int data;
		Node* next;
		Node(int val): data(val),next(nullptr){};
	};
	
	Node* tail;
	Node* head;
	
	void displayHelper(Node* p){
		if(p==nullptr){
			return;
		}
		
		cout<<p->data<<endl;
		displayHelper(p->next);
	}
	
	public:
		singleLinkedList(){
			head=nullptr;
			tail=nullptr;
		}
	
	void append(int value){
		Node* newNode=new Node(value);
		
		if(head==nullptr){
			head=newNode;
			tail=newNode;
		}else{
			tail->next=newNode;
			tail=newNode;
		}
	}
	
	void display(){
		displayHelper(head);
	}
};

int main(){
	singleLinkedList list;
	
	list.append(10);
	list.append(20);
	list.append(300);
	
	cout<<"The value of the list:"<<endl;
	list.display();
	
	return 0;
}
