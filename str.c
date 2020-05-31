#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,count=1;
  
	
/*	for(i=0;i<6;i++)
	{
		printf("%c \n",str[i]);
	}
	i=strlen(str);
/*printf("%d\n",i);
	printf("%d",sizeof(str));
	printf("%s",strupr(str));
	
	printf("%s",str2);
	strcat(str,str1);
	printf("%s",str);
*/
/*for(j=0;j<strlen(str1);i++,j++)
{
   str[i+1]=str1[j];
   
}
for(i=0;i<12;i++)
{

	printf("%c",str[i]);
}
*/
char str[100]="this is a book";
for(i=0;i<strlen(str);i++)
{
	
	if(str[i]==' ')
	
		
		count++;
	
}
printf("number of words: %d",count);


		return 0;
}
