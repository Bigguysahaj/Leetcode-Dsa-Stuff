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
    ListNode* partition(ListNode* head, int x) {
        ListNode* part1 = new ListNode(201);
        ListNode* temp = new ListNode(201);
        temp->next = head;
        head = temp;
        ListNode* temp1 = part1;
        while(temp && temp->next){
            if(temp->next->val < x){
                ListNode* wait = new ListNode(temp->next->val);
                part1->next = wait;
                part1 = part1->next;
                temp ->next = temp->next->next;
            }else{
            temp = temp->next;
            }

            // if(temp->next) break;

        }

        part1 -> next = head->next;

        return temp1->next;
    }
};