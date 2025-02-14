#include<stdio.h>
#include<stdlib.h>
int main()
{

	char a[100][30],max[20];
	int index,pass,i,n;
	printf("enter limit");
	scanf("%d",&n);
	printf("enter %d n vowels=",n);
	for(i=0;i<n;i++)
	  scanf("%s",&a[i]);
	  
	  for(pass=0;pass<n;pass++)
	  {
	  	strcpy(max,a[pass]);
	  	strcpy(index,i);
	  	for(i=pass+1;i<n;i++)
	  	{
	  		if(strcmp(a[i],max)>0)
	  		  {
	  		  	strcpy(max,a[i]);
	  		  	index=i;
				}
		  }
		  strcpy(a[index],a[pass]);
	   strcpy(a[pass],max);
	  }
	 printf("sorted  numbers=");
	for(i=0;i<n;i++)
	  printf("%s\t",a[i]);  
	   
}
