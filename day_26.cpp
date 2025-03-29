Q1.
  sol:
class Solution {
  public:
    Node *addNode(Node *head, int pos, int data) {
         Node * temp = head;
          int cnt = -1;
          while(temp){
              cnt++;
              if(cnt==pos){
                  break;
              }
              temp = temp->next;
          }
          if(temp->next==NULL) {
              Node * nn =new Node(data);
              temp->next = nn;
              nn->prev = temp;
              return head;
          }
          Node* front = temp->next;
          Node* nn = new Node(data);
          temp->next = nn;
          front->prev = nn;
          nn->prev = temp;
          nn->next = front;
          return head;
    }
};
Q2.
  sol:
class Solution {
  public:
    // Function to count nodes of a linked list.
    bool searchKey(int n, Node* head, int key) {
        if(head==NULL) return false;
        Node* temp=head;
        while(temp!=NULL)
        {
            if(temp->data==key) return true;
            temp=temp->next;
        }
        return false;
    }
};
