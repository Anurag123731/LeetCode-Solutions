class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;
        ListNode* c = new ListNode(0);
        ListNode* tc = c;
        while (temp) {
            int n = 1;
            while (temp->next&&temp->val == temp->next->val) {
                temp = temp->next;
                n++;
            }
            if (n == 1) {
                tc->next= temp;
                tc=tc->next;
                temp = temp->next;
            } else
                temp = temp->next;
        }
        tc->next = temp;
        return c->next;
    }
};
