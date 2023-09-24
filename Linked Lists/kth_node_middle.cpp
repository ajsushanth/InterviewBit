/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::solve(ListNode* h, int k) {
    ListNode* fast = h;
    ListNode* slow = h;
    int count=0;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        count++;
    }
    count = count-k;
    if(count < 0) return -1;
    else{
        while(h!=NULL && count!=0){
            h = h->next;
            count--;
        }
        if(count == 0) return h->val;
    }
    return -1;
}
