Q1.
  sol:
public class Solution {
    public boolean hasCycle(ListNode head) {
        ListNode sp = head;
        ListNode n = head;
        while(sp != null && sp.next != null){
            sp = sp.next.next;
            n = n.next;
            if(sp == n) return true;
        }
        return false;
    }
};
Q2.
  sol:
  class Solution {
    public ListNode middleNode(ListNode head) {
        ListNode slow=head;
        ListNode fast=head;
        if(head.next==null)
        {
            return head;
        }
        while(fast!=null && fast.next!=null)
        {
            slow=slow.next;
            fast=fast.next.next;
        }
        return slow; 
    }
}
