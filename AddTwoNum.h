#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
};
Node* newnode(int data){
	Node* temp=new Node;
	temp->data=data;
	temp->next=NULL;
	return temp;
}

Node* addTwoNum(Node* first,Node* second){
	int carry=0,sum=0;
	Node* prev=NULL;
	Node* res=NULL;
	while(first!=NULL || second!=NULL){
		sum=carry+(first ? first->data : 0)+(second ? second->data : 0);
		carry=(sum>=10) ? 1 : 0;
		Node* temp=newnode(sum);
		if(res==NULL){   
			res=temp;
			prev=temp;
		}
		else{
			prev->next=temp;
		}
		prev=temp;
		if(first)
			first=first->next;
		if(second)
			second=second->next;
	}
	if(carry>0){
		prev->next=newnode(carry);
	}
	return res;
}
int main(){
	
}