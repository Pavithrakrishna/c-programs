#include <stdio.h>
#include<string.h>
int main(void)
{
	char roman[10];
	int a[10],i,k,b;
	scanf("%s",roman);
	b=strlen(roman);
	for(i=0;i<b;i++)
	{
		switch(roman[i])
		{
			case 'I':a[i]=1;
			break;
			case 'V':a[i]=5;
			break;
			case'X':a[i]=10;
			break;
		    case'L':a[i]=50;
			break;
			case'C':a[i]=100;
			break;
			case'D':a[i]=500;
			break;
			case'M':a[i]=1000;
			break;
			default:
			printf("end statement");
			break;
		}
	}
	k=a[b-1];
	for(i=b-1;i>0;i--)
	{
		if(a[i]>a[i-1])
		{
			if(a[i]>a[i-1])
			{
				k=k-a[i-1];
			}
			else
			{
				k=k+a[i-1];
				
			}
		}
	}
	printf("%d",k);		
	return 0;
}
