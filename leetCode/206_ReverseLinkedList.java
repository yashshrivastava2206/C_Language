/*
Given the head of a singly linked list, reverse the list, and return the reversed list.
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head){
    struct ListNode* newHead=NULL,*temp,*loc,*tempN;
    if(head ==NULL)
    return NULL;
    else if(head->next==NULL)
    return head;
    while(head->next!=NULL){
        temp=head;
        while(temp->next!=NULL){
            loc=temp;
            temp=temp->next;
        }
        loc->next=NULL;
        if(newHead==NULL)
        newHead=temp;
        else{
            tempN=newHead;
            while(tempN->next!=NULL)
            tempN=tempN->next;
            tempN->next=temp;
        }
    }
    tempN=newHead;
            while(tempN->next!=NULL)
            tempN=tempN->next;
            tempN->next=head;
    
    return newHead;
}
