#include<stdio.h>
#include<conio.h>
void main()
{
int qu,rem,di,dv;
clrscr();
printf("Enter dividend:\n");
scanf("%d",&di);
printf("Enter divisor:\n");
scanf("%d",&dv);
qu=di/dv;
printf("Quotitent=%d\n",qu);
rem=di%dv;
printf("Remainder=%d",rem);
getch();
}



