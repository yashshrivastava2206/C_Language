/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
*/
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 #include<stdio.h>
 #include<stdlib.h>



int* targetsum(int *num,int size,int target,int res[]){
    int i;
    for(i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
        if(*(num+i)+*(num+j)==target){
            res[0]=i ;
            res[1]=j ;
            break;
        }
        }
    }
    return res;
}

int main(){
    int n,target,res[2];
    int *nums;
    scanf("%d",&n);
    
    nums= (int*)malloc(n* sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",nums+i);
    }
    scanf("%d",&target);
    int *result=targetsum(nums,n,target,res);
    printf("%d,%d",*(result+0),*(result+1));
    return 0;
}
/*
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int*    r;

    r = (int*)malloc(sizeof(int) * 2);

    if (!r)
        return 0;
    
    
    r[0] = 0;
    r[1] = 0;

    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                *returnSize = 2;
                r[0] = i;
                r[1] = j;
                return r;
            }
        }
    }
    *returnSize = 0;
    return 0;
}
*/
