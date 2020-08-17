/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head)  {
        // Using unordered_set
        unordered_set <ListNode*> hash;
        while(head != NULL) {
            if(hash.find(head) != hash.end()) {
                return true;
            }
            else {
                hash.insert(head);
            }
            head = head->next;
        }
        return false;
    }
};

        // Using 2 pointers

        // ListNode* slow = head;
        // ListNode* fast = head;
        // while (fast != null && fast->next != null) {
        //     slow = slow->next;
        //     fast = fast->next.next;
        //     if (slow == fast) {
        //         return true;
        //     }
        // }
        // return false;