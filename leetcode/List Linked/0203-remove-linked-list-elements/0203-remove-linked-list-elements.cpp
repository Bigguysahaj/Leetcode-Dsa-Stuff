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
    ListNode* removeElements(ListNode* head, int val) {
    
    ListNode* pemt = new ListNode(-1);
        
        if (head == NULL){
            return head;
        }

        if(head->val == val){
            pemt->next = head;
            head = pemt;
        }
        ListNode* temp = head;
        
        while(temp && temp->next){
            

        if(temp->next->val == val){
                temp->next = temp->next->next;
                continue;
            }
            
            temp= temp->next;
        }
        
        if (head->val <0){
            head = head->next;
        }
        
        return head;
    }
};