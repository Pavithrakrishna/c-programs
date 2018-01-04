#include <stdio.h>
int main(void) {
	int a[10],temp,n,int i;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		int i=0;
		while(i<n)
		{
			temp=a[i];
	i+=temp;
		}
		if(temp==a[n-1])
		printf("True");
		else 
		printf("False");
	}
	return 0;
}
