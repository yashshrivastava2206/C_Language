/* WAP to input 10 students records and display the same */
#include<stdio.h>
int main()
{
    struct student{
        int roll;
        char fname[15];
        char lname[15];
        int cls;
        int age;
    };
    struct student s[10];
    register int i;
    printf("Enter the data of of 10 students :\n ");
    for(i=0;i<10;i++)
    {
        printf("Roll No. : ");
        scanf("%d",&s[i].roll);
        printf("Name : ");
        scanf("%s%s",&s[i].fname,&s[i].lname);
        printf("Class : ");
        scanf("%d",&s[i].cls);
        printf("Age : ");
        scanf("%d",&s[i].age);
    }
    printf("Details of Student given by you is :\n");
    for(i=0;i<10;i++)
    {
        printf("Details of student %d \n",i+1);
        printf("Roll No. : %d\n",s[i].roll);
        
        printf("Name : %s %s\n",s[i].fname,s[i].lname);
        
        printf("Class : %d\n",s[i].cls);
        
        printf("Age : %d\n",s[i].age);
        
    }
    return 0;
    
}