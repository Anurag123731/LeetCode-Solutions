class Solution {
public:
    Node* copyRandomList(Node* head) {
      Node* temp=head;
      Node* dummy=new Node(100);
      Node*tempc=dummy;
      //step 1->deep copy of the linked list with random pointer pointing NULL.
      while(temp!=NULL){
        Node* a=new Node(temp->val);
        tempc->next=a;
        tempc=tempc->next;
        temp=temp->next;
      }
      Node* duplicate=dummy->next;
      //step 2->alernate connections.
      Node* a=head;
      Node* b=duplicate;
      dummy=new Node(-1);
      Node* tempd=dummy;
      while(a){
        tempd->next=a;
        tempd=tempd->next;
        a=a->next;
        tempd->next=b;
        tempd=tempd->next;
        b=b->next;
    }
    dummy=dummy->next;//merge list ka head
    //step 3-> assigning random pointers
    Node* t1=dummy;
    while(t1){
        Node* t2=t1->next;
        if(t1->random) t2->random=t1->random->next;
        t1=t1->next->next;
    }  
    // step->4 rempving the connections
    Node* d=new Node(100);
    Node* e=new Node(100);
    Node* dt=d;
    Node* de=e;
    Node* t=dummy;
    while(t){
        dt->next=t;
        dt=dt->next;
        t=t->next;
        de->next=t;
        de=de->next;
        t=t->next;
    }
    dt->next=NULL;
    de->next=NULL;


    return e->next; 
    }
};
