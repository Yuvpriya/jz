#include<stdio.h>
int main()
{
int a,z,i;
scanf("\t%d",&a);
scanf("\t%d",&z);
for(i=a+1;i<z;i++)
{
 if(i%2!=0)
 printf("\t%d",i);
}
 return 0;
 }
