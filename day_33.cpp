Q1.
  sol:
class Solution {
public:
    void insertCopyInBetween(Node*head)
    {
        Node* temp=head;
        while(temp!=NULL)
        {
            Node* nextNode=temp->next;
            Node* copy=new Node(temp->val);
            temp->next=copy;
            copy->next=nextNode;
            temp=nextNode;
        }
    }
    void connectRandomPointers(Node* head)
    {
        Node* temp=head;
        while(temp!=NULL)
        {
            Node*copy=temp->next;
            if(temp->random) copy->random=temp->random->next;
            else temp->random=nullptr;
            temp=temp->next->next;
        }
    }
    Node* getDeepCopyList(Node* head)
    {
        Node* temp=head;
        Node* dummyNode=new Node(-1);
        Node* res=dummyNode;
        while(temp!=NULL)
        {
            res->next=temp->next;
            res=res->next;
            temp->next=temp->next->next;
            temp=temp->next;
        }
        return dummyNode->next;
    }
    Node* copyRandomList(Node* head) {
        insertCopyInBetween(head);
        connectRandomPointers(head);
        return getDeepCopyList(head);
    }
};
Q2.
  sol:
class Solution {
private:
    long long power(long long x, long long n){
        if(n == 0) return 1;
        long long ans = power(x, n/2);
        ans *= ans;
        ans %= mod;
        if(n%2==1){
            ans *= x;
            ans %= mod;
        }
        return ans;
    }
public:
    int countGoodNumbers(long long n) {
        long long numberOfOddPlaces = n/2;
        long long numberOfEvenPlaces = n/2 + n%2;
        return (power(5, numberOfEvenPlaces) * power(4, numberOfOddPlaces))%mod;
    }
};
