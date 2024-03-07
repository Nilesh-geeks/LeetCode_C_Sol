Question :: 876. Middle of the Linked List

Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the second middle node.

 
Solution::

Complexity::

Time complexity : O(N)

Space complexity : O(1)

Code::
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
        struct ListNode * slow  = head;
        struct ListNode * fast  = head;
        while(fast && fast->next){
            fast = fast->next->next;
            slow= slow->next;
        }
        return slow;
}