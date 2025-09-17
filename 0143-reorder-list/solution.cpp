class Solution {
public:
ListNode* reverse(ListNode*head){
    ListNode* curr=head;
    ListNode* prev=NULL;
    ListNode* Next=NULL;
    while(curr){
        Next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=Next;
    }
    return prev;
}
    void reorderList(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* b=reverse(slow->next);
        ListNode* a=head;
        slow->next=NULL;
        //merge these two a nd b
        ListNode*c=new ListNode(100);
        ListNode* tempc=c;
        ListNode* tempa=a;
        ListNode* tempb=b;
        while(tempa!=NULL && tempb!=NULL){
            tempc->next=tempa;
            tempc=tempc->next;
            tempa=tempa->next;
            tempc->next=tempb;
            tempc=tempc->next;
            tempb=tempb->next;
        }
        tempc->next=tempa;
        head=c->next;
    }
};
