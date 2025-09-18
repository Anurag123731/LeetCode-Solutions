class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>ans;
        vector<int>critical;
        ListNode* temp=head;
        int n=2;
        while(temp->next->next!=NULL){
            if(temp->next->val>temp->val && temp->next->val>temp->next->next->val || temp->next->val<temp->val && temp->next->val<temp->next->next->val){
                critical.push_back(n);
                
            }
            temp=temp->next;
            n++;
        }
        if(critical.size()<2){
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        int size=critical.size();
        int max=critical[size-1]-critical[0];
        int min=INT_MAX;
        for(int i=1;i<critical.size();i++){
            int diff=critical[i]-critical[i-1];
            if(diff<min) min=diff;
        }
        ans.push_back(min);
        ans.push_back(max);
        return ans;
    }
};
