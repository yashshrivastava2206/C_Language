/* Function() returning a pointer */

#include<stdio.h>
int* add(int a , int b, int *p)
{
    int r;                                  // Function not returning the local variable
    p=&r;                                   // we use the pointer variable of calling function to returning the address.
    r=a+b;
    return (p);
}
void main()
{
    int *p;
    int a,b;
    
    scanf("%d%d",&a,&b);
    p=add(a,b,p);
    printf("Addition : %d",*p);

}