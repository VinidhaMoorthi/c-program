#include<stdio.h>
#include<conio.h>
void main()
{
int rad;
float area,peri;
clrscr();
printf("Enter radius");
scanf("%d",&rad);
area=3.14*rad*rad;
printf("Area of circle %f",area);
peri=2*3.14*rad;
printf("Perimeter of circle %f",peri);
getch();
}