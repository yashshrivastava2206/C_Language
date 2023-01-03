/* Program to input Your Address which includes your name, city name , area and 
house number all the values to be entered through keyboard */
#include<stdio.h>
#include<string.h>
void main()
{
    char name[20],city[15],area[25],Hno[7],Address[68];
    printf("Enter Your Full Name : ");
    gets(name);
    printf("\nEnter Your City Name : ");
    gets(city);
    printf("\nEnter Your Area Name : ");
    gets(area);
    printf("\nEnter Your House Number : ");
    gets(Hno);
    puts(name);
    //printf(" ");
    puts(Hno);
    //printf(" ");
    puts(area);
    //printf(" ");
    puts(city);
    //printf(" ");
    strcat(city," ");
    strcat(name," ");
    strcat(Hno," ");
    strcat(area," ");
    strcat(strcat(strcat(strcat(Address,name),Hno),area),city);
    printf("\nThe Given Address is %s %s %s %s \n",name,Hno,area,city);
   puts(Address);
    //printf("\n");
}