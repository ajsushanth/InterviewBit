/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* head) {
    if(head == NULL || head->next == NULL) return head;
    ListNode* temp = head;
    ListNode* rev = reverseList(temp->next);
    head->next->next = head;
    head->next = NULL;
    return rev;
}
