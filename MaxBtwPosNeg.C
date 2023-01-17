/* maximum-count-of-positive-integer-and-negative-integer */
#include<stdio.h>
int maximumCount(int* nums, int numsSize){
    register int i;
    int pos=0,neg=0;
    for(i=0;i<numsSize;i++)
    {
        if(*(nums+i)>0)
            pos++;
        else if(*(nums+i)<0)
            neg++;
    }
    if(pos>neg)
        return pos;
    else
        return neg;

}
int main()
{
    int nums[10],i;
    printf("Enter !0 Numbers : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&nums[i]);
    }
    printf("%d",maximumCount(nums,10));
    return 0;
}