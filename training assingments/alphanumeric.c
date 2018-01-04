#include <stdio.h>
#include<string.h>
int main(void) {
	char a[10];
	int alpha=0,num=0,i,b;
	scanf("%s",a);
	b=strlen(a);
	for(i=0;i<b;i++)
	{
		if((a[i]>=60&&a[i]<=96)||(a[i]>=97&&a[i]<=122))
		{
			alpha++;
		}
		else
		{
			num++;
		}
	}
	printf("Alphabets=%d\n Number=%d\n",alpha,num);
	return 0;
}
