#include <conio.h>
#include <stdio.h>
#include <math.h>

int main(){

     int i,num,flag=0,count=0;

     for(num=2;count<=100;num++){
     flag=0;

	for(i=2;i<sqrt(num);i++){
	if(num%i==0){
	   flag=1;
	    break;
	}
     }
     }
     if (flag==1){
     }
     else{
	printf("%d",num);
	count++;
	getch();
	return 0;
     }

     getch();
     return 0;
}
