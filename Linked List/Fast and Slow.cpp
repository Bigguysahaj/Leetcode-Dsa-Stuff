class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while( fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        
//         when fast breaks (i.e hits NULL), the slow is expected to stop at middle of the linked 
//          list
        return slow;
        
    }
};
