/* Structure --> Declaration and initialization */
/* Method - 2 */
#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    struct student{
    int roll;
    char name[30];
    char gender;
}/*student s={1,"Yash",'M'};
struct student s1={2,"Medha",'F'};
struct student s2={3,"Abhay",'M'}*/;
                                                //Both the initialization is true
struct student s={1,"Yash",'M'};
struct student s1={2,"Medha",'F'};
struct student s2={3,"Abhay",'M'};
printf("%d\n%s\n%c\n",s.roll,s.name,s.gender);
printf("%d\n%s\n%c\n",s1.roll,s1.name,s1.gender);

printf("%d\n%s\n%c\n",s2.roll,s2.name,s2.gender);
return 0;
}
