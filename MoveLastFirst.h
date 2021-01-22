#include<bits/stdc++.h>
using namespace std;

//make last to first in LL.

class Node{
	int data;
	Node* next;
	Node(int data){
		this->data=data;
		this->next=NULL;
	}
};

Node* makelastFirst(Node* head){
	Node* temp=head;
	Node* prev=NULL;
	while(temp->next!=NULL){
		prev=temp;
		temp=temp->next;
	}
	if(prev!=NULL){
		Node* newhead=temp;
		temp->next=head;
		head=temp;
		prev->next=NULL;
	}
	return head;
}
int main(){
	
}