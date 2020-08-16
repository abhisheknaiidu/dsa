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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      int len = 1;
      ListNode* fast = head;
      ListNode* slow = head;
      while (fast->next) {
          len++;
          fast = fast->next;
          if(len > n+1) {
              slow = slow->next;
          }
      }
    if(len == n) {
        return head->next;
    }
    else {
        slow->next = slow->next->next;
    }
    return head;
    // ListNode* d = new ListNode(0);
    //   d->next = head;
    //   int count=0;
    //   ListNode *temp = head;
    //   while(temp != NULL) {
    //       count++;
    //       temp = temp->next;
    //   }
    //   // cout << count;
    //   if(count == 1) {
    //       // ListNode* td = head;
    //       head = NULL;
    //       return head;
    //   }
    //   cout << count << endl;
    //   count = count - n;
    //   // temp = d;
    //   ListNode* temp2 = d;
    //   while(count>0) {
    //       cout<< count;
    //       count--;
    //       temp2 = temp2->next;
    //   }
    //   ListNode* temp3 = temp2->next;
    //   temp2->next = temp3->next;
    //   temp3->next = NULL;
    //   return d->next;

    }
};