#include <stdio.h>

int main(void)
{
	char str[20],j;
	int b,i;
	scanf("%s",&str);
	b=strlen(str);
	if(b%2==0)
	for(i=0;i<b;i=i+2)
{
	j=str[i];
	str[i]=str[i+1];
            str[i+1]=j;
}
else
for(i=0;i<b-1;i+=2)
{
		j=str[i];
	str[i]=str[i+1];
            str[i+1]=j;
	
}for(i=0;i<b;i++)
{
printf("%c",str[i] );
}
	return 0;
}
