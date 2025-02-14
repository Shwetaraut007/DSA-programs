#include<stdio.h>
#include<conio.h>
int main()
{
	int a[]={56,23,11,67,12,89,2};
	 int i,t,pass;
	 for(i=0;i<7;i++)
	 {
	 	printf("%d\t",a[i]);
	 }
	for(pass=1;pass<7;pass++)
	{
	 for(i=0;i<7-pass;i++)
	 {
	 	if(a[i]>a[i+1])
	 	{
	 	  t=a[i];
	 	  a[i]=a[i+1];
	 	  a[i+1]=t;
	 }
}
}
	 printf("\nsorted array=");
	 for(i=0;i<7;i++)
	 {
	 printf("%d\t",a[i]);
     }
	 
}

