#include<stdio.h>
#include<conio.h>
int main()
{
	int a[]={56,23,11,67,12,89,2};
	 int i,t;
	 for(i=0;i<7;i++)
	 {
	 	printf("%d\t",a[i]);
	 }
	 for(i=0;i<7;i++)
	 {
	 	if(a[i+1]>a[i])
	 	  t=a[i];
	 	  a[i]=a[i+1];
	 	  a[i+1]=t;
	 }
	 printf("\nsorted array=");
	 for(i=0;i<7;i++)
	 {
	 printf("%d\t",a[i]);
     }

}
