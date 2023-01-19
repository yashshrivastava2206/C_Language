/* Compatibility and casting */ /* Typecasting of variable in pointers */
#include<stdio.h>
int main()
{
    void *ptr;
    int x=10;
    printf("%d\n",*&x);
    ptr=&x;
    // ptr=(int*)ptr;   // not Work
    // ptr=(int*)(&x);   Not Working
    printf("%d\n",*((int*)ptr));
    return 0;
}