#include<stdio.h>
int main()
{
int n,flag=0;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
{
scanf("%d ",&a[i]);
}
for(int i=0;i<n;i++)
{
if(a[i]==i+1)
{
flag=1;
printf("%d ",a[i]);
}
}
if(flag==0)
{
printf("-1");
}
}
