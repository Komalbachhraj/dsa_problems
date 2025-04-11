Q1.
  sol:
class Solution {
public:
    ListNode* removeElements(ListNode* head, int data) {
        // if(head==NULL) return head;
        // ListNode*temp=head;
        // vector<int> v;
        // while(temp!=NULL)
        // {
        //     v.push_back(temp->val);
        //     temp=temp->next;
        // }
        // temp=head;
        // ListNode * temp1;
        // int i=0;
        // while(i<v.size())
        // {
        //     if(v[i]!=data){
        //       temp->val=v[i];
        //       temp1=temp;
        //       temp=temp->next;
        //     }
        //     i++;
        // }
        // if(temp==head) return NULL;
        // if(temp!=NULL) temp1->next=NULL;
        // return head;
        if(head == nullptr) return head;
        while(head != nullptr && head->val == data) head = head->next;
        ListNode* temp = head;
        while(temp != nullptr && temp->next != nullptr) {
            if(temp->next->val == data) temp->next = temp->next->next;
            else  temp = temp->next;
        }  
        return head;
    }
};
Q2.
  sol:
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyHead = new ListNode(0);
        ListNode* tail = dummyHead;
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int digit1 = (l1 != nullptr) ? l1->val : 0;
            int digit2 = (l2 != nullptr) ? l2->val : 0;

            int sum = digit1 + digit2 + carry;
            int digit = sum % 10;
            carry = sum / 10;

            ListNode* newNode = new ListNode(digit);
            tail->next = newNode;
            tail = tail->next;

            l1 = (l1 != nullptr) ? l1->next : nullptr;
            l2 = (l2 != nullptr) ? l2->next : nullptr;
        }

        ListNode* result = dummyHead->next;
        delete dummyHead;
        return result;
    }
};
