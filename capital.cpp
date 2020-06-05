#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	gets(a);
	int y,i;
	
	for(y=0;y<strlen(a);y++)
	{
	y[a]=y[a]-32;
	printf("%c",y[a]);
}
	return 0;
}
