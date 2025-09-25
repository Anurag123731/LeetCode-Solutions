class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        stack<int>st;
       ListNode*temp=head;
       vector<int>v;
       while(temp){
        v.push_back(temp->val);
        temp=temp->next;
       }
       int n=v.size();
       vector<int>ans(n);
       ans[n-1]=0;
       st.push(v[n-1]);
       for(int i=n-2;i>=0;i--){
        while(st.size()>0 && st.top()<=v[i]) st.pop();
        if(st.size()==0) ans[i]=0;
        else ans[i]=st.top();
        st.push(v[i]);
       }
       return ans;
       

    }

};
