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
    ListNode* reverse(ListNode* head) {
        ListNode* p1 = NULL;
        ListNode* p2 = head;
        ListNode* p3; 
        while(p2) {
            p3 = p2->next;
            p2->next = p1;
            p1 = p2;
            p2 = p3;
        }
        return p1;
    }
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL) return true;
            
       ListNode* fast = head;
       ListNode* slow = head;
        while(fast->next != NULL && fast->next->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;
        }
        ListNode* p = reverse(slow->next);
        ListNode* q = head;
        
        while(p != NULL && q != NULL) {
            if(p->val != q->val) return false;
            // cout << p->val << " " << q->val << endl;
            p = p->next;
            q = q->next;
        }
       return true; 
    }
};