#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100],n,i,pass,t;
	printf("enter limit");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
		 
	}
	printf("original numbers=");
	for(i=0;i<n;i++)
	{
	 printf("%d\t",a[i]);
    }
	for(pass=1;pass<n;pass++)
	{
		for(i=0;i<n-pass;i++)
		{
			if(a[i]>a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
			
		} 
	}
	printf("sorted element=");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
}
