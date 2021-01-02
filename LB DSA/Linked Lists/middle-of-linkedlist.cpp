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