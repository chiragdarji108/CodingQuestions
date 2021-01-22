#include<iostream>
using namespace std;

//1.store node address in hashmap.
//2. set flag in visted node.
//3.floyd fast & slow pointer method.


bool hasCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(slow && fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                return true;
            }
        }
        return false;
}