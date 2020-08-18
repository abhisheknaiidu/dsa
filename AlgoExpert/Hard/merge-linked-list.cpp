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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        // if(l1 == NULL && l2 == NULL) return l1;
        if(l1 == NULL) return l2;
        if(l2 == NULL) return l1;
        ListNode* p1 = l1;
        ListNode* p2 = l2;
        ListNode* prev = NULL;
        while(p1!=NULL && p2!= NULL) {
            if(p1->val <= p2->val) {
                prev = p1;
                p1 = p1->next;
                // prev->next = p2;
            }
            else {
                if(prev != NULL){
                    prev->next = p2;
                }
                prev = p2;
                p2 = p2->next;
                prev->next = p1;
            }
            if(p1 == NULL) {
                prev->next = p2;
            }
        }
        int a = l1->val;
        int b = l2->val;
        if(a<=b) return l1;
        
        return l2 ;
    }
};

// Recursive 
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    recursive(p1, p2, NULL);
        int a = l1->val;
        int b = l2->val;
        if(a<=b) return l1;
        
        return l2 ; 
}

recursive(ListNode* p1, ListNode* p2, ListNode* prev) {
    if(p1 == NULL) 
       prev->next = p2;
       return;
       
    if(p2 == NULL) return;

if(p1.val < p2.val) {
    recursive(p1->next, p2, p1)
}

else {
    if(prev != NULL){
          prev->next = p2;
        }
    ListNode* newP2 = p2->next;
    p2->next = p1;
    recursive(p1, newP2, p2);
}


