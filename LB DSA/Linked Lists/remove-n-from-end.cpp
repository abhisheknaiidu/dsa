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
	// Two Pass
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      ListNode *dummy = new ListNode();
      dummy->next = head;
      int len = 0;
      ListNode *temp = head;
      while(temp != NULL) {
        len++;
        temp = temp->next;
      }
      temp = dummy;
      int del = len - n + 1;
      for(int i=1; i<del; i++) {
        temp = temp->next;
      }
      temp->next = temp->next->next;
      head = dummy->next;
      return head;
    }
};

// Single Pass
ListNode* removeNthFromEnd(ListNode* head, int n) {
      ListNode *dummy = new ListNode();
      dummy->next = head;
      ListNode *first = dummy;
      ListNode *second = dummy;
      // Advances first pointer so that the gap between first and second is n nodes apart
      for(int i=0; i<n+1; i++) {
        first = first->next;
      }
      while(first != NULL) {
        first = first->next;
        second = second->next;
      }
      second->next = second->next->next;
      head = dummy->next;
      return head;
    }