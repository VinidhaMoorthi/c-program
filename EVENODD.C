#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("Enter a number:\n");
scanf("%d",&n);
if(n%2==0)
printf("Given %d is an even",n);
else
printf("Given %d is odd",n);
getch();
}