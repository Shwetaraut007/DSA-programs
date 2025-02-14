#include<stdio.h>
int main()
{ 
	int n,i,index,pass,max;
	 struct person
	 {
	 	int pno,age;
	 }p1[100],t;
	 FILE *f1;
	  f1=fopen("person.txt","r");
	   if(f1==NULL)
	   {
	   	printf("file not found");
	   	exit(0);
	   }
	   i=0;
	   while(!feof(f1))
	    {
	    	fscanf(f1,"%d%d",&p1[i].rno,&p1[i].age);
	    	 i++;
		}
		n=i;

	 for(pass=0;pass<n;pass++)
	  {
	    max=p1[pass].age;
	   	index=pass;
	  	for(i=pass+1;i<n;i++)
	  	 {
	  	    if(s1[i].age>max)
			{
			  max=s1[i].age;
			  index=i;	
		    }
		 }
	        t=p1[index];
	       p1[index]=p1[pass];
	        p1[pass]=t;
      }
	 printf("\n display student info:");
     for(i=0;i<n;i++)
      {
      	 printf("\n %d\t%d",p1[i].pno,p1[i].age);
		   }
}
