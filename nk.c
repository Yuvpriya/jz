#include<stdio.h>
int main()
{
int a[10],N,K,i,sum=0;
scanf("%d\n%d",&N,&K);
for(i=0;i<N;i++)
    {
        scanf("\t%d",&a[i]);
    }
    
    for(i=0;i<K;i++)
    {
        sum=sum+a[i];
    }
printf("%d",sum);
return 0;
}
