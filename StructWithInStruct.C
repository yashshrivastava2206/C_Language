/* Structure with in structure */
/* WAP in which user input 'n' employees records like-->
1.Enployee ID
2.Employee Name
3.Salary-->
    (i)Basic Pay
    (ii)HRA
    (iii)DA
    (iv)CA
 */
 #include<stdio.h>
 int main()
 {
    struct emp{
        int empid;
        char fname[15];
        char lname[15];
        struct salary{
            int bpay;
            int hra;
            int da;
            int ca;
        }allowance;
    }emp[3];
    int i;
    printf("Enter Reecords of 3 enployees :");
    for(i=0;i<3;i++)
    {
        scanf("%d%s%s%d%d%d%d",&emp[i].empid,&emp[i].fname,&emp[i].lname,&emp[i].allowance.bpay,&emp[i].allowance.hra,&emp[i].allowance.da,&emp[i].allowance.ca);
    }
    printf("\n\n");
    printf("Employees Records are :\n");
    for(i=0;i<3;i++)
    {
        printf("Record od %d Employee:\n");
        printf("%d\n%s %s\n%d\n%d\n%d\n%d\n",emp[i].empid,emp[i].fname,emp[i].lname,emp[i].allowance.bpay,emp[i].allowance.hra,emp[i].allowance.da,emp[i].allowance.ca);
    }
    return 0;
 }