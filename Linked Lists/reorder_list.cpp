/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* middle(ListNode* head){
    ListNode* fast = head;
    ListNode* slow = head;
    ListNode* prev;
    while(fast!=NULL && fast->next!=NULL){
        fast = fast->next->next;
        prev = slow;
        slow = slow->next;
    }
    prev->next = NULL;
    return slow;
}

ListNode* reversell(ListNode* head){
    if(head==NULL || head->next==NULL) return head;
    ListNode* temp = head;
    ListNode* rev = reversell(temp->next);
    head->next->next = head;
    head->next = NULL;
    return rev;
}
 
ListNode* Solution::reorderList(ListNode* head) {
    if(head==NULL || head->next == NULL) return head;
    ListNode* mid = middle(head);
    ListNode* l1 = head;
    ListNode* l2 = reversell(mid);
    ListNode* ans = l1;
    ListNode* tail = ans;
    l1 = l1->next;
    while(l1!=NULL && l2!=NULL){
        tail->next = l2;
        l2 = l2->next;
        tail = tail->next;
        tail->next = l1;
        l1 = l1->next;
        tail = tail->next;
    }
    while(l1 != NULL){
        tail->next = l1;
        l1 = l1->next;
        tail = tail->next;
    }
    while(l2 != NULL){
        tail->next = l2;
        l2 = l2->next;
        tail = tail->next;
    }
    return ans;
}
