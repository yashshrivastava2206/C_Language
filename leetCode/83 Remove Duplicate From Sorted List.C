/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head){
    
    
    if(head==NULL)
    return head;
    struct ListNode* temp=head;
    struct ListNode* loc=head->next;
    while(temp!=NULL){
        while(loc!=NULL){
            if(temp->val!=loc->val)
            break;
        loc=loc->next;
        }
        temp->next=loc;
        temp=temp->next;
    }
    return head;
}
