/* Array Of Structure */
/* WAP in which student student record having roll no. , name , and 5 subject marks 
to be entered by the user and dispaly the name of students who scored mroe than  80% marks */
#include<stdio.h>

int main()
{
    struct student{
        int roll;
        char name[30];
        int marks[5];
    };
    struct student s[3];
    int i,sum;
    printf("Enter the details of student :");
    for(i=0;i<3;i++)
    {
        printf("\n");
        scanf("%d%s",&s[i].roll,&s[i].name);
        scanf("%d%d%d%d%d",&s[i].marks[i],&s[i].marks[i+1],&s[i].marks[i+2],&s[i].marks[i+3],&s[i].marks[i+4]);
    }
    printf("Students with more than 80 % marks are\n");
    for(i=0;i<3;i++)
    {
        sum=(s[i].marks[i]+s[i].marks[i+1]+s[i].marks[i+2]+s[i].marks[i+3]+s[i].marks[i+4])/5;
        if(sum>=80)
        {
            printf("%d\n%s\n%d\n%d\n%d\n%d\n%d\n",s[i].roll,s[i].name,s[i].marks[i],s[i].marks[i+1],s[i].marks[i+2],s[i].marks[i+3],s[i].marks[i+4]);
        }
        printf("\n");
    }
    return 0;
}