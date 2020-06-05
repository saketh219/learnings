#include<stdio.h>
int main()
{
	int a[100],b[100],i,j,n,k;
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the numbers:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("ascending order:\n");
	
	 //j=a[0];
	 for(k=0;k<n;k++)
	 {
	 
    for(i=k+1;i<n;i++)
    {	
    	if(a[k]>a[i])
    	{
    		j=a[i];
    		a[i]=a[k];
    		a[k]=j;
		}
		    	    
	}

	
}
    for(k=0;k<n;k++)
	{	
	printf("%d",a[k]);	
    }
}
		

