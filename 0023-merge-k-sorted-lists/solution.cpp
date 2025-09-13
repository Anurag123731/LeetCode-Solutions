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

    ListNode* mergeKLists(vector<ListNode*>& arr) {
        if(arr.size()==0) return NULL;
        while(arr.size()>1){
          ListNode* a=arr[0];
          arr.erase(arr.begin());  
          ListNode* b=arr[0];
          arr.erase(arr.begin());
          ListNode* c = merge(a,b);
          arr.push_back(c);
          
        }
        return arr[0];
    }
};
