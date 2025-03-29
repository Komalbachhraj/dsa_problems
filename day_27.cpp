Q1.
  sol:
class Solution {
  public:
    // Function to delete a node at given position.
    Node* deleteNode(Node* head, int x) {
        if(x==1) {
            Node* temp=head;
            head=head->next;
            head->prev=NULL;
            delete(temp);
            return head;
        }
       Node* temp=head;
       int curr=0;
       while(temp!=NULL)
       {
           curr++;
           if(curr==x-1) break;
           temp=temp->next;
       }
       if(temp==NULL) return head;
       Node* temp1=temp->next;
       if(temp1)
       {
           temp->next=temp1->next;
           if(temp1->next!=NULL)
           temp1->next->prev=temp;
           delete(temp1);
           return head;
       }
       else
       temp->next=NULL;
       delete(temp1);
       return head;
    }
};
Q2.
  sol:
class Solution {
  public:
    // Function to reverse a doubly linked list
    DLLNode* reverseDLL(DLLNode* head) {
        DLLNode* curr=head;
        if(curr==NULL|| curr->next==NULL)
        return head;
        DLLNode* temp=NULL;
        while(curr->next!=NULL)
        {
            temp=curr->next;
            curr->next=curr->prev;
            curr->prev=temp;
            curr=curr->prev;
        }
        curr->next=curr->prev;
        curr->prev=NULL;
        return curr;
    }
};
