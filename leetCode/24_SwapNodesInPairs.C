/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head){
    struct ListNode *loc;
    int temp;
    if(head==NULL)
    return NULL;
    else{
        loc=head->next;
        if(loc==NULL)
        return head;
        temp=head->val;
        head->val=loc->val;
        loc->val=temp;
        loc->next=swapPairs(loc->next);
    }
    return head;
}
