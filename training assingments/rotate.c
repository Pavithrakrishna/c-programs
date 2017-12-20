#include <stdio.h>

int main(void)
{
	int a[10],i,j,n,k,temp;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
		for(i=0;i<k;i++)
		{
			temp=a[0];
			for(j=0;j<n;j++)
			{
				a[j]=a[j+1];
				
		}
		a[n-1]=temp;
		}
		for(i=0;i<n;i++)
		{
			printf("%d\n",a[i]);
		}
		return 0;
}
