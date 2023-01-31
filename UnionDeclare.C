#include<stdio.h>
union bike
{
  char name[50];
  int price;
};

int main()
{
  union bike b1, b2, *b3;
  return 0;
}
