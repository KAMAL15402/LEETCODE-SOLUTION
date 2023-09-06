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
class Solution {
public:
     int findlength(ListNode* head){
         int count = 0;
         while(head!= NULL ){
             count++;
             head = head->next;
         }
         return count;
     }
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> ans;
        ListNode* temp = head;
        int length = findlength(temp);
       // cout<<length;
       temp = head;
       for(int i=0;i<k;i++){
           if(!temp){
               ans.push_back(NULL);
               continue;
           }
           ans.push_back(temp);
           if(i<length%k){
               for(int j=0;j<length/k;j++){
                   temp = temp->next;
               }
               ListNode* temp2 = temp->next;
               temp->next = NULL;
               temp = temp2;
           }else{
               for(int j=0;j<length/k -1 ;j++){
                   temp = temp->next;
               }
               ListNode * temp2 = temp->next;
               temp->next = NULL;
               temp = temp2;
           }
       }
        
        return ans;

    }
};