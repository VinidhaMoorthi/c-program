#include<stdio.h>
#include<conio.h>
void main()
{
int m1,m2,m3,m4,sum;
float avg;
clrscr();
printf("Enter I number:\n");
scanf("%d",&m1);
printf("Enter II number:\n");
scanf("%d",&m2);
printf("Enter III number:\n");
scanf("%d",&m3);
printf("Enter IV number:\n");
scanf("%d",&m4);
sum=m1+m2+m3+m4;
printf("sum=%d\n",sum);
avg=sum/4;
printf("Average=%f",avg);
getch();
}
