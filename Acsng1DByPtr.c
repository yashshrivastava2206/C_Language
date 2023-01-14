/* Accessing the one dimentional Array with the  */
#include<stdio.h>
void ary(int *p)
{
    int i;
    printf("I\nn the Function after passing address :\n");
    for(i=0;i<5;i++)
    {
        printf("%d",*p+i);
    }
}
void main()
{
    int x[5],i,*p,*p1;
    printf("Enter 5 Elements :");
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }
    *p1=*(x+1);                     // value at the 2 index of array x
    printf("%d\n",*x);
    printf("%d\n",*p1);
    p=x;
    ary(x);                         // Both work same
    ary(p);                         // Both rork same
}