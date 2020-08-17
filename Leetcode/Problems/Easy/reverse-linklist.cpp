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
// Iterative Method

//         ListNode* p1 = NULL;
//         ListNode* p2 = head;
//         ListNode* p3;
        
//         while(p2) {
//             p3 = p2->next;
//             p2->next = p1;
//             p1 = p2;
//             p2 = p3;
//         }
// Recursion Method
        
        if(head == NULL || head->next == NULL) {
            return head;
        }
        
        ListNode* p1 = reverseList(head->next);
        ListNode* p2 = head->next;
        p2->next = head;
        head->next = NULL;
        // cout << head
        return p1;
    }
};