#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
};

int getNthFromLast(Node* head,int n){
	Node* ref=head;
	Node* main=head;
	while(ref!=NULL && n>0){
		ref=ref->next;
		n--;
	}
	if(n>0)
	    return -1;
	while(ref!=NULL){
		main=main->next;
		ref=ref->next;
	}
	return main->data;
}
int main(){

}