#include <stdio.h>  
#include <conio.h> 
#include <limits.h> 
int main()  
{  
    
    int n;
    scanf("%d",&n);
    int arr[n];
    
     for(int i=0;i<n;i++){
         scanf("%d",&arr[i]);
     }
    int a;
    a=n;
    int j;
    int copy[a];
    for (int i = n - 1, j = 0; i >= 0; i--,j++)
      copy[j] = arr[i];
  
   for (int i = 0; i < n; i++)
      arr[i] = copy[i];

   for (int i = 0; i< n; i++)
      printf("%d ", arr[i]);


    return 0;
}  
