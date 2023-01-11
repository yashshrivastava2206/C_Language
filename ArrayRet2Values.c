/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 #include<stdio.h>
 void targetsum(int n[1000],int size,int m,int *p1,int *p2)
 {
     int i,j,l,f;
     for(i=0;i<size;i++)
     {
         for(j=(i+1);j<size;j++)
         {
             if(n[i]+n[j]==m)
             {
                 f=i;
                 l=j;
                 break;
             }
         }
     }
     *p1=f;
     *p2=l;
 }

int main(void)
{
    int nums[10000],target,i,f,l,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&nums[i]);
    }
    scanf("%d",&target);
    targetsum(nums,n,target,&f,&l);
    printf("[%d,%d]",f,l);
   return 0;
}
