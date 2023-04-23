
typedef struct nodeType{
    int data;
    struct nodeType *next;
}node;
void push(node** top, char ch){
    node* ptr=(node*)malloc(sizeof(node));
    ptr->data=ch;
    if(*top==NULL){
        ptr->next=NULL;
    }
    else{
        ptr->next=*top;
    }
    *top=ptr;
}
bool compareAndPop(node **top,char ch){
    node *temp;
        temp=*top;
        
        if(temp->data=='(' && ch==')'){
        *top=(*top)->next;
            free(temp);
        return true;
        }
        else if(temp->data=='{' && ch=='}'){
        *top=(*top)->next;
            free(temp);
        return true;
        }
        else if(temp->data=='[' && ch==']'){
        *top=(*top)->next;
            free(temp);
        return true;
        }
        if(temp->next==NULL)
        return false;
        return false;

}

bool isValid(char * s){
    node* tos=NULL;
    int i=0;
    bool result=true;
    if((*(s+i)==')' ||*(s+i)==']' || *(s+i)=='}') || *(s+1)=='\0')
    return false;
    while(*(s+i)!='\0' && result!=false){
        char ch=*(s+i);
        if(*(s+i)=='(' || *(s+i)=='{' ||*(s+i)=='[' || tos==NULL){
        push(&tos,ch);
        }
        else{
        if(tos!=NULL)
        result=compareAndPop(&tos,ch);
        else
        result=false;
        }
        i++;
    }
    if(tos==NULL)
    return true;
    else
    return false;
}
