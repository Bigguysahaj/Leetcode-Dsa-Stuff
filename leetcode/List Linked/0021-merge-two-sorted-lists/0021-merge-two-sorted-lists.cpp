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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode* dum = new ListNode(-1);
        
        dum->next = list1;
        list1 = dum;
        
        ListNode* temp = list1;
        ListNode* pemt = list2;
        ListNode* empt = list1;
        
        if (list2==NULL && list1 != NULL)
            return list1->next;
        
        while(temp && temp->next){
            if (temp->next->val >= pemt->val){
                empt = temp->next;
                temp->next = pemt;
                pemt= empt;
            }
            temp= temp->next;
        }
        
        // if (temp && temp->val > pemt->val){
        //     list2->next = temp;
        //     return list2->next;
        // }
        
        if(temp)
        temp->next = pemt;
        
        return list1->next;
    }
};