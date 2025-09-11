/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int size_a=0;
        int size_b=0;
        ListNode* temp_a=headA;
        while(temp_a!=NULL){
            size_a++;
            temp_a=temp_a->next;
        }
        ListNode* temp_b=headB;
        while(temp_b!=NULL){
            size_b++;
            temp_b=temp_b->next;
        }
        temp_a=headA;
        temp_b=headB;
        if(size_a>size_b){
            for(int i=1;i<=size_a-size_b;i++){
                temp_a=temp_a->next;
            }
        }
        if(size_b>size_a){
            for(int i=1;i<=size_b-size_a;i++){
                temp_b=temp_b->next;
            }
        }
        while(temp_a!=NULL){
            if(temp_a==temp_b){
                return temp_a;
            }
            temp_a=temp_a->next;
            temp_b=temp_b->next;
        }
        return NULL;
    }
};
