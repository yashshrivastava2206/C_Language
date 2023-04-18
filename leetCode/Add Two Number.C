//Add Two Number-> In Linked List

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *head=NULL;
    int carry=0,num;
    while(l1!=NULL || l2!=NULL || carry==1){
        num=0;
        if(l1!=NULL){
            num+=l1->val;
            l1=l1->next;
        }
        if(l2!=NULL){
            num+=l2->val;
            l2=l2->next;
        }
        num+=carry;
        carry=num/10;
        struct ListNode *newNode;
        newNode=(struct ListNode*)malloc(sizeof(struct ListNode));
        newNode->val=num%10;
        if(head==NULL){
            head=newNode;
        }
        else{
            struct ListNode *temp=head;
            while(temp->next!=NULL)
            temp=temp->next;
            temp->next=newNode;
        }
        newNode->next=NULL;
    }
    return head;
}
