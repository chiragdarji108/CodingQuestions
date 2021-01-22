#include<bits/stdc++.h>
using namespace std;

//remove duplicate from sorted linked list.
class Node{
	int data;
	Node* next;
	Node(int data){
		this->data=data;
		this->next=NULL;
	}
};

Node* removeDup(Node* head){
	Node* temp=head;
	while(temp->next!=NULL){
		if(temp->data==temp->next->data){
			Node* nextnode=temp->next->next;
			delete(temp->next);
			temp->next=nextnode;
		}
		else{
			temp=temp->next;
		}
	}
	return head;
}
int main(){
	
}