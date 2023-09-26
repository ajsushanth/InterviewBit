/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* reverse(ListNode* head){
    if(head==NULL || head->next==NULL) return head;
    ListNode* temp = head;
    ListNode* rev = reverse(temp->next);
    head->next->next = head;
    head->next = NULL;
    return rev;
} 
 
int Solution::lPalin(ListNode* head) {
    ListNode* fast = head, *slow = head;
    while(fast!=NULL && fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    ListNode* l2 = reverse(slow);
    ListNode* l1 = head;
    while(l1!=NULL && l2!=NULL){
        if(l1->val != l2->val) return 0;
        l1 = l1->next;
        l2 = l2->next;
    }
    return 1;
}
