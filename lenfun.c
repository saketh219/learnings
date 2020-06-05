#include<stdio.h>
#include<string.h>
main()
{
	char str[100]="i am here";
	int i;
	printf("the length of string is:");
	int strlength=abc(str);
	printf("%d",strlength);
}
int abc(char str1[])
{
   int	j=0;
	 int count=1;
	 for(j=0;j<=100;j++)
	 {
	 
	if(str1[j]!='\0')
	{
		count++;
	}
}
	return(count);
}
