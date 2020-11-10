#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,min;
char a[100];
clrscr();
printf("enter a number");
scanf("%d",&n);
printf("enter array elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
min=a[0];
for(i=0;i<n;i++)
{
if(min>a[i])
min=a[i];
}
printf("\n%d",min);
getch();
return 0;
}