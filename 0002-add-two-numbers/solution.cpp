/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* a=l1;
        ListNode* b=l2;
        int carry=0;
        ListNode* dummy=new ListNode(-1);
        ListNode* temp=dummy;
        while(a || b){
            int sum=carry;
            if(a) sum+=a->val;
            if(b) sum+=b->val;
            ListNode* c=new ListNode(sum%10);
            carry=sum/10;
            temp->next=c;
            temp=temp->next;
            if(a) a=a->next;
            if(b) b=b->next;
        }
        if(carry){
            ListNode*c=new ListNode(carry);
            temp->next=c;
            c->next=NULL;
        }
        return dummy->next;
    }
};
