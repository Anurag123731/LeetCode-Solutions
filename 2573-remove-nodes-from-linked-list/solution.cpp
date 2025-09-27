class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        stack<int>st;
        while(head){
            st.push(head->val);
            head=head->next;
        }
        ListNode* tail=new ListNode (st.top());
        st.pop();
        while(st.size()>0){
            if(st.top()<tail->val)st.pop();
            else{
                ListNode* node=new ListNode (st.top());
                st.pop();
                node->next=tail;
                tail=node;
            }
        }
        return tail;
    }
};
