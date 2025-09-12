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
    ListNode* deleteDuplicates(ListNode* head) {
    if(head==NULL||head->next==NULL) return head;
        ListNode* t=head;
        ListNode* temp=head->next;
        while(temp!=NULL){
            while(temp!=NULL && temp->val==t->val) temp=temp->next;
            t->next=temp;
            t=temp;
            if(temp!=NULL)temp=temp->next;
        }
        return head;
    }
};
