#include<bits/stdc++.h>
using namespace std;

ListNode* reverseList(ListNode* head) {
	ListNode* temp=head;
	ListNode* prev=NULL;
	while(temp!=NULL){
		ListNode* next_node=temp->next;
		temp->next=prev;
		prev=temp;
		temp=next_node;
	}
	return prev;
}
int main(){
}