class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*>ans;
        int n=0;
        ListNode*temp=head;
        while(temp!=NULL){
            n++;
            temp=temp->next;
        }
        int split=n/k;
        int rem=n%k;
        temp=head;
        while(temp!=NULL){
            ListNode* c=new ListNode(100);
            ListNode* tempc=c;
            int s=split;
            if(rem>0) s++;
            rem--;
            for(int i=1;i<=s;i++){
                tempc->next=temp;
                temp=temp->next;
                tempc=tempc->next;
            }
            tempc->next=NULL;
            c=c->next;
            ans.push_back(c);
        }
        if(ans.size()<k){
            while(ans.size()!=k) ans.push_back(NULL);
        }
        return ans;
    }
};
