Q1.
  sol:
class Solution {
public:
    // ListNode* sortList(ListNode* head) {
    //     vector<int> v;
    //     ListNode* temp=head;
    //     while(temp!=NULL)
    //     {
    //         v.push_back(temp->val);
    //         temp=temp->next;
    //     }
    //     sort(v.begin(),v.end());
    //     int i=0;
    //     temp=head;
    //     while(temp!=NULL)
    //     {
    //         temp->val=v[i++];
    //         temp=temp->next;
    //     }
    //     return head;
    // }

    ListNode* mergeTwoSortedLinkedLists(ListNode* list1, ListNode* list2) {
        ListNode* dummyNode = new ListNode(-1);
        ListNode* temp = dummyNode;
        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) {
                temp->next = list1;
                list1 = list1->next;
            } 
            else {
               temp->next = list2;
               list2 = list2->next;
            }
            temp = temp->next; 
        }
        if (list1 != nullptr) temp->next = list1;
        else temp->next = list2;
        return dummyNode->next;
    }
    ListNode* findMiddle(ListNode* head){
        if (head == nullptr || head->next == nullptr) return head;
        ListNode* slow = head;
        ListNode* fast = head->next;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    ListNode* sortList(ListNode* head){
        if (head == nullptr || head->next == nullptr) return head;
        ListNode* middle = findMiddle(head);
        ListNode* right = middle->next;
        middle->next = nullptr;
        ListNode* left = head;
        left = sortList(left);
        right = sortList(right);
        return mergeTwoSortedLinkedLists(left, right);
    }
};
Q2.
  sol:
class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        // ListNode temp=head;
        if(head.next==null)
        {
            head=null;
            return head;
        }
        // int size=0;
        // while(temp!=null)
        // {
        //     temp=temp.next;
        //     size++;
        // }
        // if(n==size)
        // {
        //     head=head.next;
        //     return head;
        // }
        // int count=size-n-1;
        // temp=head;
        // size=0;
        // while(size<count)
        // {
        //     temp=temp.next;
        //     size++;
        // }
        // temp.next=temp.next.next;
        // return head;
        ListNode slow=head;
        ListNode fast=head;
        for(int i=0;i<n;i++){
            fast=fast.next;
        }
        if(fast==null)
        {
            head=head.next;
            return head;
        }
        else{
            while(fast.next!=null)
            {
                slow=slow.next;
                fast=fast.next;
            }
            slow.next=slow.next.next;
        }
        return head;
    }
}
