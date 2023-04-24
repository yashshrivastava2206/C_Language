/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode* temp,*loc;
    temp=head;
    int count=0;
        while(temp!=NULL){
            ++count;
            temp=temp->next;
        }
        int i=1;
        loc=temp=head;
        int m = count-(n-1);
        if(m==1){
            head=head->next;
            return head;
        }
        while(i!=m){
            loc=temp;
            temp=temp->next;
            i++;
        }
       
        loc->next=temp->next;
        // free(temp);
        return head;
}
