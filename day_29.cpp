Q1.
  sol:
class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        Node* slow=head;
        Node* fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow)
            {
                int count=1;
                fast=fast->next;
                while(fast!=slow){ fast=fast->next;
                   count++;
                }
                return count;
            }
        }
        return 0;
    }
};
Q2.
  sol:
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (head == NULL || head->next == NULL) return true;
        ListNode* fast = head;
        ListNode* slow = head;
        while (fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* newNode = reverseList(slow->next);
        ListNode* first = head;
        ListNode* second = newNode;

        while (second != NULL) {
            if (first->val != second->val) {
                reverseList(newNode);
                return false;
            }
            first = first->next;
            second = second->next;
        }
        reverseList(newNode);
        return true;
    }
    ListNode* reverseList(ListNode* newHead) {
        ListNode* prev = NULL;
        ListNode* nextp;
        ListNode* curr = newHead;

        while (curr != NULL) {
            nextp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextp;
        }
        return prev;
    }
};
