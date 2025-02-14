 #include<stdio.h>
int main()
{
	int a[20],n,i,s=0,max,max1;
	printf("enter limit:");
	scanf("%d",&n);
	printf("enter array element:");
	  for(i=0;i<n;i++)
	    {
		    scanf("%d",&a[i]);
	    }
       max=a[0];
       max1=max;
	   	for(i=0;i<n;i++) 
	   	{
	   		if(a[i]>max)
	   		  max=a[i];
		   }
		   s=max+max1;
		printf("sum of largst paire=%d",s);   
}
