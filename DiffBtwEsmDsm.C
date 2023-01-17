/* 2535. Difference Between Element Sum and Digit Sum of an Array */
/* Leet Code (Easy) */
#include<stdio.h>
#include<stdlib.h>
int differenceOfSum(int* nums, int numsSize){
    register int i,Esum=0,Dsum=0,rem;
    for(i=0;i<numsSize;i++)
    {
        Esum=Esum+*(nums+i);
        while(*(nums+i)>0)
        {
            rem=*(nums+i)%10;
            Dsum=Dsum+rem;
            *(nums+i)=*(nums+i)/10;
        }
    }
    return abs(Esum-Dsum);

}
int main()
{
    int nums[1000],n,i;
    printf("Enter No. Of Elements : ");
    scanf("%d",&n);
    printf("Enter %d elements : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&nums[i]);
    }
    printf("%d",differenceOfSum(nums,n));
    return 0;
}
