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
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;
        ListNode* empt = NULL;
        ListNode* pemt = head;

        return recur(pemt,temp,head,empt);
        
    }
    
    ListNode* recur(ListNode* pemt, ListNode* temp, ListNode* head, ListNode* empt){
        if (pemt==NULL){
            return empt;
        }
        
        pemt = temp->next;
        temp->next = empt;
        empt = temp;
        temp = pemt;
        
        
        return recur(pemt,temp,head,empt);
    }
    
    
};