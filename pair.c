#include <stdio.h>
#include<math.h>
int main()
{
char str1[100],str2[100],i,c=0,c1=0;
scanf("%[^\n]s",str1);
scanf("\n%[^\n]s",str2);
int hash1[26]={0};
int hash2[26]={0};
int l1=strlen(str1);
int l2=strlen(str2);
int count=0,min;
for(i=0;str1[i];i++)
{
hash1[str1[i]-97]++;
}
for(i=0;str2[i];i++)
{
hash2[str2[i]-97]++;
}
for(i=0;i<26;i++)
{
count+=abs(hash1[i]-hash2[i]);
}
if(l1!=l2)
{
if(count==abs(l1-l2))
{
c=+count*3;
}
}
else
{
c=((count/2)*3)+((count/2)*4);
c1+=(count/2*5);
}
min=(c<c1)?c:c1;
printf("%d",min);
return 0;
}

 

