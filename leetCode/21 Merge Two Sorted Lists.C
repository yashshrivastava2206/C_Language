/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode* ptr,*temp,*loc;
    if(list2==NULL)
            return list1;
    if(list1==NULL)
    return list2;
    while(list1!=NULL){
        temp=list1;
        list1=list1->next;
        loc=ptr=list2;
        if(temp->val<list2->val){
                temp->next=list2;
                list2=temp;
                continue;
            }
        while(ptr!=NULL){
            if(temp->val<ptr->val){
                loc->next=temp;
                temp->next=ptr;
            break;
            }
            loc=ptr;
            ptr=ptr->next;
        }
        if(ptr==NULL){
            loc->next=temp;
            temp->next=list1;
            break;
            }
    }
    return list2;
}
