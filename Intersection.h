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

Node* intersection(Node* first,Node* second){
	Node* res=NULL;
	Node* prev=NULL;
	unordered_map<int,bool> m; // for handling duplicates..
	while(first!=NULL && second!=NULL){
	    
		if(first->data==second->data && m[first->data]==false){
		    //cout << first->data <<" ";
		    m[first->data]=true;
			Node* temp=new Node(first->data);
			if(res==NULL){
				res=temp;
			}
			else{
				prev->next=temp;
			}
			prev=temp;
		}
		if(first->data<second->data)
		    first=first->next;
		else
		    second=second->next;
	}
	return res;
}
int main(){
	
}