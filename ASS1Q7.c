#include <stdio.h>
int main()
{
  int arr1[]={2, 6, 7, 8};
  int n = sizeof(arr1)/sizeof(arr1[0]);
  int arr2[]={10, 12, 17, 18, 90, 91};
  int m = sizeof(arr2)/sizeof(arr2[0]);
  int arr3[n+m+];
  for( i=0; i<n; i++)
  arr3[i]=arr1[i];
  int j=n;
  for( i=0; i<m; i++)
  arr3[j++]=arr2[i];
  //sort arr3
  for(int i=0; i<(n+m); i++){
      for(int j=i+1; j<(n+m); j++){ if(arr3[i]>arr3[j]){
                int temp = arr3[i];
                arr3[i] = arr3[j];
                arr3[j] = temp;
          }       
      }
  }
  int median;
  if((n+m)%2==0)
  median = (arr3[(n+m)/2] + arr3[(n+m)/2-1])/2;
  else 
  median = arr3[(n+m)/2];
  printf("%d ", median);
}
