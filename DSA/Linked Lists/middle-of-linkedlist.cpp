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
// T.C = O(n + n/2)
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
      ListNode *temp = head;
      int n = 0;
      while(temp != NULL) {
        n++;
        temp = temp->next;
      }
      int len = n/2;
      // cout << n << " " << len << endl;
      for(int i=1; i<=len; i++) {
        head = head->next;
      }
      return head;
    }
};

// fast and slow pointer
// T.C = O(n/2)
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};