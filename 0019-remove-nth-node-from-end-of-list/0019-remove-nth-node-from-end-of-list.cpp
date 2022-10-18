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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = new ListNode(0);
        temp->next = head; 
        ListNode* left = temp;
        ListNode* right = head;
        
        while(n>0 && right){
            right = right->next;
            n--;
        }
        
        while(right){
            left = left->next;
            right = right->next;
        }
//         delete
        left->next = left->next->next;
        return temp->next;
    }
};


