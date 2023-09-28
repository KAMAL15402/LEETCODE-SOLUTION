class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == nullptr || k == 1) {
            return head;
        }
        
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;
        
        int count = 0;
        while (head) {
            count++;
            if (count % k == 0) {
                prev = reverseSegment(prev, head->next);
                head = prev->next;
            } else {
                head = head->next;
            }
        }
        
        return dummy->next;
    }
    
private:
    ListNode* reverseSegment(ListNode* prev, ListNode* next) {
        ListNode* last = prev->next;
        ListNode* curr = last->next;
        
        while (curr != next) {
            last->next = curr->next;
            curr->next = prev->next;
            prev->next = curr;
            curr = last->next;
        }
        
        return last;
    }
};
