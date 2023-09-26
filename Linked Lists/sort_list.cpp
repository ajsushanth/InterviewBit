/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* middle(ListNode* head){
    ListNode *fast = head, *slow = head, *prev;
    while(fast!=NULL && fast->next!=NULL){
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    prev->next = NULL;
    return slow;
}

ListNode* merge(ListNode* h1, ListNode* h2){
    ListNode* head;
    if(h1->val < h2->val){
        head = h1;
        h1 = h1->next;
    }
    else{
        head = h2;
        h2 = h2->next;
    }
    ListNode* tail = head;
    while(h1!=NULL && h2!=NULL){
        if(h1->val < h2->val){
            tail->next = h1;
            h1 = h1->next;
        }
        else{
            tail->next = h2;
            h2 = h2->next;
        }
        tail = tail->next;
    }
    while(h1!=NULL){
        tail->next = h1;
        h1 = h1->next;
        tail = tail->next;
    }
    while(h2!=NULL){
        tail->next = h2;
        h2 = h2->next;
        tail = tail->next;
    }
    tail->next = NULL;
    return head;
}
 
ListNode* mergeSort(ListNode* head){
    if(head==NULL || head->next==NULL) return head;
    ListNode* mid = middle(head);
    ListNode* l1 = mergeSort(head);
    ListNode* l2 = mergeSort(mid);
    return merge(l1, l2);
}
 
ListNode* Solution::sortList(ListNode* head) {
    ListNode* sorted_list = mergeSort(head);
    return sorted_list;
}
