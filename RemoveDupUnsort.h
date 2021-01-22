#include<bits/stdc++.h>
using namespace std;

//remove duplicate from unsorted linked list.

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
	Node* prev=NULL;
	unordered_map<int,bool> m;
	while(temp!=NULL){
		if(m[temp->data]==true){
			Node* newnode=temp->next;
			delete(temp);
			prev->next=newnode;
			temp=newnode; //be carefull here
		}
		else{
			m[temp->data]=true;
			prev=temp;
			temp=temp->next;
		}
	}
	return head;
}
int main(){
	
}