/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
/*   ITERATIVE METHOD  TC - O(N) SPACE = O(3N)
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* pre = NULL;
        ListNode* curr = head;
        ListNode* post = NULL;
        if(head == NULL){
            return NULL;
        }
        while(curr!=NULL &&  curr->next!=NULL ){
            post = curr->next; 
            curr->next = pre;
            pre = curr;
            curr = post; 
         }
         curr->next = pre;
         return curr;
    }
};
*/

class Solution {
public:
    ListNode* reverse(ListNode* head){
        if(head->next==NULL){
            return head;
        }
        ListNode* reverseHead = reverse(head->next);
        head->next->next = head;//draw and think
        head->next = NULL;
        return reverseHead;
    } 

    ListNode* reverseList(ListNode* head) {
      if(head==NULL){
          return NULL;
      }
      return reverse(head);  
    }
};