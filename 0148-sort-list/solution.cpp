
class Solution {
public:
    ListNode* merge(ListNode* a, ListNode* b) {
        if(a==NULL && b==NULL) return NULL;
        ListNode* c=new ListNode(-1);
        ListNode* temp=c;
        while(a!=NULL && b!=NULL){
            if(a->val<=b->val){
                temp->next=a;
                temp=temp->next;
                a=a->next;
            }
            else{
                temp->next=b;
                temp=temp->next;
                b=b->next;
            }
        }
        if(a==NULL) temp->next=b;
        if(b==NULL) temp->next=a;
        return c->next;
    }
    ListNode* sortList(ListNode* head) {
    if(head==NULL|| head->next==NULL) return head;
      ListNode* slow=head;  
      ListNode* fast=head;
      while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
      }  
      ListNode* a=head;
      ListNode* b=slow->next;
      slow->next=NULL;
      a=sortList(a);
      b=sortList(b);
      ListNode* c=merge(a,b);
      return c;
    }
};
