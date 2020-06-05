#include<stdio.h>
int main()
{
	int i,z,s,n[100];
	printf("enter the size of array ");
	scanf("%d",&s);
	
	for(i=0;i<s;i++)
	{
		scanf("%d",&n[i]);
	}
	printf("enter the number to search");
	scanf("%d",&z);
	 int search=abc(n,s,z);
	
}
int abc(int a[],int s,int z)
{
	int j;
	for(j=0;j<s;j++)
	{
	//	printf("Values %d",a[j]);
	//	printf("%d",z);
		if(a[j]==z)
		{
			printf( " present in the array");
		}
	}
}

