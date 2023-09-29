/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* head, int k) {
    if(head==NULL || head->next==NULL || k==0) return head;
    ListNode* ptr = head;
    int count=0;
    while(ptr!=NULL){
        ptr = ptr->next;
        count++;
    }
    if(k%count == 0) return head;
    k = k%count;
    ptr = head;
    count = count - k;
    while(count != 1){
        ptr = ptr->next;
        count--;
    }
    ListNode* h = ptr->next;
    ptr->next = NULL;
    ptr = h;
    while(ptr->next != NULL) ptr = ptr->next;
    ptr->next = head;
    return h;
}
