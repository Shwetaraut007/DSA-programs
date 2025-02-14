#include<stdio.h>
int main()
{ 
    char s1[20][20],max[30];
	int n,i,index,pass,t;
    printf("enter limit:");
    scanf("%d",&n);
    printf("enter string starting char must be vowel:");
	  for(i=0;i<n;i++)
	 {
	 	scanf("%s",&s1[i]);
	 }
	 for(pass=0;pass<n;pass++)
	  {
	     strcpy(max,s1[pass]);
	   	index=pass;
	
	  	for(i=pass+1;i<n;i++)
	  	 {
	  	    if(strcmp(s1[i],max)>0)
			{
			  strcpy(max,s1[i]);
			  index=i;	
		    }
		 }
	       
	       strcpy(s1[index],s1[pass]);
	        strcpy(s1[pass],max);
      }
	 printf("\n display element:");
     for(i=0;i<n;i++)
      {
      	 printf("\n %s",s1[i]);
		   }
}
