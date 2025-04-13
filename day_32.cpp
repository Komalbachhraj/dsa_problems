Q1.
  sol:
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr||head->next==nullptr)return head;
        ListNode* temp = head;
        ListNode* dummy = new ListNode(-1);
        ListNode* prev = dummy ;
        prev->next = head;
        while(temp!=nullptr&&temp->next!=nullptr){
            if(temp->next->val==temp->val){
                int v = temp->val;
                while(temp!=nullptr){
                    if(temp->val==v)temp = temp->next;
                    else break ;
                }
                prev->next = temp;
            }
            else{
                prev = temp ;
                temp = temp->next;
            }
        }
        return dummy->next;
        // ListNode* temp=head;
        // ListNode* temp1=NULL;
        // if(head==NULL || head->next==NULL) return head;
        // while(temp!=NULL)
        // {
        //     if(temp->next==NULL)
        //     {
        //         if(temp1->val!=temp->val) return head;
        //         else {
        //             temp1->next=NULL;
        //             return head;
        //         }
        //     }
        //     if(temp->next!=NULL && temp->val!=temp->next->val){
        //         temp1=temp;
        //         temp=temp->next;
        //     }// temp=temp->next;
        //     else{
        //         ListNode* curr=temp;
        //         while(temp!=NULL && temp->val==curr->val) temp=temp->next;
        //         if(temp1==NULL){ head=temp;
        //            temp1=temp;
        //         }
        //         else{
        //             temp1->next=temp;
        //         }
        //     }
        // }
        // return head;
    }
};
Q2.
  sol:
class Solution {
public:
   ListNode* reverseLinkedList(ListNode* head)
   {
    if(head==NULL || head->next==NULL) return head;
    ListNode* newHead=reverseLinkedList(head->next);
    ListNode* front= head->next;
    front->next=head;
    head->next=NULL;
    return newHead;
   }
    ListNode* getKthNode(ListNode* head,int k)
    {
        k-=1;
        while(head!=NULL && k>0) {
            head=head->next;
            k--;
        }
        return head;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* prevLast=NULL;
        while(temp!=NULL)
        {
            ListNode* KThNode=getKthNode(temp,k);
            if(KThNode==NULL)
            {
                if(prevLast) prevLast->next=temp;
                break;
            }
            ListNode* nextNode=KThNode->next;
            KThNode->next=NULL;
            reverseLinkedList(temp);
            if(temp==head) head=KThNode;
            else prevLast->next=KThNode;
            prevLast=temp;
            temp=nextNode;
        }
        return head;
    }
};
