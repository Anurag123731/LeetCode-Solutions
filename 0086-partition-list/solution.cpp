 class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL) return NULL;
        ListNode* low=new ListNode(100);
        ListNode* high=new ListNode(100);
        ListNode*tlow=low;
        ListNode*thigh=high;
        ListNode*temp=head;
        while(temp!=NULL){
            if(temp->val<x){
                tlow->next=temp;
                temp=temp->next;
                tlow=tlow->next;
            }
            else{
                thigh->next=temp;
                temp=temp->next;
                thigh=thigh->next;
            }
        }
    tlow->next=high->next;
    thigh->next=NULL;
    return low->next;

    }
};
