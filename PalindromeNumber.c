/* To know the given no. is palindrone or not*/
#include<stdio.h>
int isPalindrome(int x){
    long signed int rem,rev=0;
    long signed int original=x;
    while(x>0)
    {
        rem=x%10;
        rev=rev*10+rem;
        x=x/10;
    }
    if(original==rev)
    return 1;
    else
    return 0;
}
void main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    // isPalindrome(num);
    if(isPalindrome(num)==1)
    printf("No. is Palindrome");
    else
    printf("No. is not palindrome");

}