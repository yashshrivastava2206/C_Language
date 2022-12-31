/* P-7 Q.1
 function to swap values(call by value) */
 #include<stdio.h>
 int swap(int x,int y)
 {
    int t;
    t=x;
    x=y;
    y=t;
    printf("a : %d \nb : %d",x,y);
}
int main()
{
    int a=10;int b=20;
    printf("values are =");
   // scanf("%d%d",&a,&b);
    swap(a,b);
    printf("\n");
printf("%d\n",a);
printf("%d\n",b);
    return 0;
}