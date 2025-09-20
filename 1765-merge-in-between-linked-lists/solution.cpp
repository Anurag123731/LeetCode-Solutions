class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* c=new ListNode(0);
        ListNode* tempc=c;
        ListNode* temp=list1;
        tempc->next=list1;
        for(int i=1;i<=a;i++){
            temp=temp->next;
            tempc=tempc->next;
        }
        for(int i=1;i<=b-a+1;i++){
            temp=temp->next;
        }
        tempc->next=list2;
        while(list2->next!=NULL) list2=list2->next;
        list2->next=temp;
        return list1;
        
    }
};
