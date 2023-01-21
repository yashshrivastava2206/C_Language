/* We want to store same ____________________________(iii)Display______name. */
#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    struct player 
    {
        char name[30];
        char country[30];
        float Avg;
    };
    struct player rec[30];
    char Name[30],CouName[30];
    int n,i;
    printf("How many players data you want to enter :  ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s%s%f",&rec[i].name,&rec[i].country,&rec[i].Avg);
    }
    printf("Enter the name of player you want to know about :");
    // gets(Name);
    scanf("%s",&Name);
    printf("\n");
    for(i=0;i<n;i++)
    {
        if(strcmp(rec[i].name, Name)==0)
        {
            printf("%s\n",rec[i].name);
            printf("%s\n",rec[i].country);
            printf("%f\n",rec[i].Avg);
            break;
        }
    }
    printf("Player Which has batting average> 40 is : \n  ");
    printf("\n");
     for(i=0;i<n;i++)
    {
        if((rec[i].Avg)>40)
        {
            printf("\t%s\n",rec[i].name);
            printf("\t%s\n",rec[i].country);
            printf("\t%f\n",rec[i].Avg);
            
        }
    }
    printf("Enter Country name :");
     scanf("%s",&CouName);
     for(i=0;i<n;i++)
    {
        if(strcmpi(rec[i].country,CouName)==0)
        {
            printf("%s\n",rec[i].name);
            printf("%s\n",rec[i].country);
            printf("%f\n",rec[i].Avg);
            
        }
    }


    return 0;

}