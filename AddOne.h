#include<bits/stdc++.h>
using namespace std;

//remove duplicate from unsorted linked list.

class Node{
	public:
		int data;
		Node* next;
};

Node *newNode(int data) 
{ 
    Node *new_node = new Node; 
    new_node->data = data; 
    new_node->next = NULL; 
    return new_node; 
} 

Node* revese(Node* head){
	Node* temp=head;
	Node* prev=NULL;
	while(temp!=NULL){
		ListNode* next_node=temp->next;
		temp->next=prev;
		prev=temp;
		temp=next_node;
	}
	return prev;
}
Node* Addone(Node* head){
	Node* revHead=reverse(head);
	Node* temp=revHead;
	Node* prev=NULL;
	int carry=1,sum;
	bool flag=true;
	while(temp!=NULL){
		sum=carry+temp->data;
		carry=(sum>=10)? 1 : 0;
		sum=sum%10;
		temp->data=sum;
		prev=temp;
		temp=temp->next;
	}
	if(carry>0){
		prev->next=newNode(carry);
	}
	return reverse(revHead);
}


//recursive approch
int addWithCarry(Node* head)
{
    // If linked list is empty, then
    // return carry
    if (head == NULL)
        return 1;
 
    // Add carry returned be next node call
    int res = head->data + addWithCarry(head->next);
 
    // Update data and return new carry
    head->data = (res) % 10;
    return (res) / 10;
}
 
// This function mainly uses addWithCarry().
Node* addOne(Node* head)
{
    // Add 1 to linked list from end to beginning
    int carry = addWithCarry(head);
 
    // If there is carry after processing all nodes,
    // then we need to add a new node to linked list
    if (carry) {
        Node* newNode = new Node;
        newNode->data = carry;
        newNode->next = head;
        return newNode; // New node becomes head now
    }
 
    return head;
}
int main(){
	
}