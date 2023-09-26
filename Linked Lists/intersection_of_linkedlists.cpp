/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::getIntersectionNode(ListNode* l1, ListNode* l2) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    ListNode* ptr1 = l1, *ptr2 = l2;
    int count1=0, count2=0;
    while(ptr1 != NULL){
        ptr1 = ptr1->next;
        count1++;
    }
    while(ptr2 != NULL){
        ptr2 = ptr2->next;
        count2++;
    }
    int diff = abs(count1 - count2);
    ptr1 = l1, ptr2 = l2;
    while(diff != 0){
        if(count1 > count2) ptr1 = ptr1->next;
        else ptr2 = ptr2->next;
        diff--;
    }
    while(ptr1 != ptr2){
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return ptr1;
}
