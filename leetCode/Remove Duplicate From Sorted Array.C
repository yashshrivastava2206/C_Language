//26. Remove Duplicates from Sorted Array

class Solution {
    public int removeDuplicates(int[] nums) {
        int count=-1,j;
        for(int i=0;i<nums.length;){
            
            for(j=i;j<nums.length;j++){
                if(nums[i]!=nums[j])
                break;
            }
            
            ++count;
            nums[count]=nums[i];
            i=j;
        }
        return count+1;
    }
}
