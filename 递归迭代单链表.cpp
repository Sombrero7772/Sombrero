#include<bits/stdc++.h>
using namespace std;


struct Node{
	int data;
	Node* next;
};

void printList(Node* curr){
	if(curr==nullptr){
		return;
	}
	
	cout<<curr->data<<endl;
	
	printList(curr->next);
}

int main(){
	Node* head=new Node();
	head->data=10;
	head->next=nullptr;
	
	Node* p2=new Node();
	p2->data=20;
	
	Node* p3=new Node();
	p3->data=30;
	
	head->next=p2;
	p2->next=p3;
	
	printList(head);
	
	return 0;
}