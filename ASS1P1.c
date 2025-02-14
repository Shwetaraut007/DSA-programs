#include<stdio.h>
int main()
{
	int a[20],n,i,ch,s=0;
	printf("enter limit:");
	scanf("%d",&n);
	printf("enter array element:");
	  for(i=0;i<n;i++)
	    {
		    scanf("%d",&a[i]);
	    }
	 do
	 {
	     printf("\n 1 sum of even element \n 2 sum of odd element");
		 scanf("%d",&ch);
		switch(ch)
		{
		   case 1:for(i=0;i<n;i++)
		          {
		             if(i%2==0)
					   s=s+a[i];	
				  }	
				  printf("sum of even element%d=",s);
		   case 2:for(i=0;i<n;i++)
		          {
		             if(i%2==1)
					   s=s+a[i];	
				  }
				   printf("sum of odd element%d=",s);	
		 } 	
	 }while(ch<3);   
}
