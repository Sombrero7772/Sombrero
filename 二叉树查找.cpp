#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node* left;
	Node* right;
	
	Node(int val):data(val),left(nullptr),right(nullptr){};
};

bool search(Node* root,int target){
	
	if(root==nullptr){
		return false;
	}else if(root->data > target){
		return search(root->left,target);
	}else if(root->data < target){
		return search(root->right,target);
	}else{
		return true;
	}
	
}

Node* insert(Node* root,int val){
	if(root==nullptr){
		return new Node(val);
	}else if(root->data > val){
		root->left=insert(root->left,val);
	}else if(root->data < val){
		root->right=insert(root->right,val);
	}
	
	return root;
}

void printInOrder(Node* root){
		if(root==nullptr){
			return;
		}
		
		printInOrder(root->left);
		cout<<root->data<<endl;
		
		printInOrder(root->right);
	}
	
int main(){
	vector<int> nums={34,54,23,43};
	Node* root=nullptr;
	
	
	for(int x:nums){
		root=insert(root,x);
	}
	
	printInOrder(root);
	
	int target[]={54,43};
	
	
	
	for(int t:target){
		cout<<"Searching for the target: "<<t<<endl;
		
		if(search(root,t)){
			cout<<"Find out successfully"<<endl;
		}else{
			cout<<"Fail"<<endl;
		}
	}
	
	return 0;
}