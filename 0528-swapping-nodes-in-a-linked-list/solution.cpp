class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* a=head;
        ListNode* b=head;
        int n=0;
        while(temp!=NULL){
            temp=temp->next;
            n++;
        }
        int i=1;
        temp=head;
        while(temp){
            if(i==k) a=temp;
            if(i==n-k+1) b=temp;
            temp=temp->next;
            i++;
        }
        int value=b->val;
        b->val=a->val;
        a->val=value;
        return head;
    }
};
