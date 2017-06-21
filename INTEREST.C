#include<stdio.h>
#include<conio.h>
void main()
{
int inter;
float p,r,n;
clrscr();
printf("Enter principle amount:\n");
scanf("%f",&p);
printf("Enter no.of years:\n");
scanf("%f",&n);
printf("Enter rate of interest:\n");
scanf("%f",&r);
inter=(p*n*r)/100;
printf("Simple Interest=%d",inter);
getch();
}



