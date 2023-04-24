int removeElement(int* nums, int numsSize, int val){
    int num[100],j=0;

    for(int i=0;i<numsSize;i++){
        if(*(nums+i)!=val){
            *(nums+j)=*(nums+i);
            j++;
        }
    }
    nums=&num;
    return j;
}
