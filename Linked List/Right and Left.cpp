// Used in question https://leetcode.com/problems/remove-nth-node-from-end-of-list/submissions/ (Remove the nth node from the end)


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
