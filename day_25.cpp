Q1.
  sol:
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val=node->next->val;
        node->next=node->next->next;
    }
};
Q2.
  sol:
class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        if(head==NULL) {
            Node *temp=new Node(x);
            head=temp;
            return head;
        }
        Node * temp=head;
        while(temp->next!=NULL) temp=temp->next;
        temp->next=new Node(x);
        return head;
    }
};
