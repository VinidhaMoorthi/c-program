#include<stdio.h>
#include<conio.h>
void main()
{
char ename[20];
int eid;
long int sal,income,tax;
clrscr();
printf("Employee name:");
scanf("%s",ename);
printf("Employee id:");
scanf("%d",&eid);
printf("Employee salary:");
scanf("%ld",&sal);
printf("Ename: %s\n",ename);
printf("eid: %d\n",eid);
printf("Salary: %ld\n",sal);

tax=sal/8;
printf("Tax: %ld\n",tax);
income=tax*100;
printf("Income:%ld\n",income);
getch();
}
