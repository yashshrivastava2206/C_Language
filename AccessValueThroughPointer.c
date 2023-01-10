/* Accessing the value of variable  with the help of pointer */
#include<stdio.h>
void main()
{
    int a;
    int *p=NULL; 
    a=7;
    //we intitianlize *p=NULL so the *p contain NULL value if we didn't initialize pointer 
    //variable with NULL or 0 then it automatically take garbage value and that type of 
    //pointer is known as "Wild Pointer".
    
    p=&a;                    //We give the address of Var.'a' to the pointer var. 
    //Working of pointers
    printf("%u\n",&a);       //Print the address of Variable 'a' of type integer
    printf("%d\n",p);        //Print the address of variable that pointer p holds i.e., 'a'
    printf("%u\n",&p);       //print the address of pointer variable p
    printf("%d\n",*p);       //print the value of the address that hold by the pointer p

}