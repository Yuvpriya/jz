#include<stdio.h>
#include<conio.h>
void main()
{
char c[100];
int i,j,len,temp=0,k=3;
clrscr();
printf("Enter the number");
scanf("%s",c);
len=strlen(c);
for(i=0;i<len;i++)
for(j=0;j<=len;j++)
if(c[j]>c[j+1])
{
temp=c[j];
c[j]=c[j+1];
c[j+1]=temp;
}
printf("least number:");
for(i=0;i<len-k;i++)
printf("%c",c[i]);
getch();
}
