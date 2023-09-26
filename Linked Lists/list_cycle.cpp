/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* head) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    ListNode* fast = head, *slow = head;
    while(fast!=NULL && fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
        if(fast == slow) break;
    }
    if(fast==NULL || fast->next==NULL) return NULL;
    ListNode* out_loop = head; //pointer starting at outside the loop
    ListNode* in_loop = slow; //pointer starting where the loop is detected (inside the loop)
    
    while(out_loop != in_loop){ //will definitely meet at the starting point of loop
        out_loop = out_loop->next; //mathematically proved!
        in_loop = in_loop->next;
    }
    return in_loop;
}
