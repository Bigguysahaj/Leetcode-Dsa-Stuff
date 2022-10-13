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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *pointer1 = l1;
        ListNode *pointer2 = l2;
        ListNode *tempHead = new ListNode(-1);
        ListNode *cur = tempHead;
        int carried = 0;
        while (pointer1 || pointer2){
            // using terniary conditions to have a fake zero, for mismathing digits
            int l1_val = pointer1? pointer1->val :0;
            int l2_val = pointer2? pointer2->val :0;
            
            cur->next = new ListNode((l1_val + l2_val + carried)%10);
            carried = (l1_val + l2_val + carried)/10;
            cur = cur->next;
            
            pointer1 = (pointer1!=NULL)? pointer1->next: NULL;
            pointer2 = (pointer2!=NULL)? pointer2->next: NULL;  
        }
        cur->next = carried? new ListNode(1):NULL;
        ListNode* res = tempHead->next;
        delete tempHead;
        return res;
    }
};