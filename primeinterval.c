#include<stdio.h>
int main()
{
int a,b,n,i,count;
scanf("\t%d",&a);
scanf("\t%d",&b);
for(i=a;i<b;i++)
{
count=0;
for(n=2;n<i;n++)
{
if(i%n==0)
count++;
}
if(count==0)
printf("%d\n",i);
}
}
