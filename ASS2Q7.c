#include<stdio.h>
#include<stdlib.h>
int main()
{struct student
	{
	char ename[20];
	int eno;
}a[100],t;
     int n,i,pass;
     FILE *f1;
	  f1=fopen("emp.txt","r");
	  if(f1==NULL)
	  {
	  	printf("file not found.....");
	  	exit (0);
	  }
	  i=0;
	  while(!feof(f1))
	  {
	  	fscanf(f1,"%d%s",&a[i].eno,&a[i].ename);
	  	i++;
	  }
	  n=i;
	
	for(pass=1;pass<n;pass++)
	{
		for(i=0;i<n-pass;i++)
		{
			if(strcmp(a[i].ename,a[i+1].ename)>0)
			 {
			    t=a[i];
			   a[i]=a[i+1];
			  a[i+1]=t;
		}
	}
	}
	printf("display=");
	for(i=0;i<n;i++)
	 printf("\n%d\t%s",a[i].eno,a[i].ename);
}

