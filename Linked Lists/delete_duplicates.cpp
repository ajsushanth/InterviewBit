/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* head) {
    ListNode* ans = head;
    ListNode* prev = ans;
    ListNode* curr = ans;
    head = head->next;
    while(head != NULL){
        curr = head;
        while(curr!=NULL && prev->val==curr->val) curr = curr->next;
        prev->next = curr;
        prev = prev->next;
        head = curr;
    }
    return ans;
}
