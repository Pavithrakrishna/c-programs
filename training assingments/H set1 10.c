#include<stdio.h>
int main()
{
int a,b,a1[10],b1[10],i,sum=0;
scanf("%d%d",&a,&b);
for(i=0;i<a;i++)
{scanf("%d",&a1[i]);
}
for(i=0;i<b;i++)
{
scanf("%d",&b1[i]);
}
for(i=0;i<a;i++)
{
if(a1[i]==b1[i])
{
sum++;
break;
}
if(sum>0)
printf("yes");
else
printf("no");
return 0;
}
