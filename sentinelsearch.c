#include <stdio.h> 
void senti(int arr[], int n, int x) 
{ 
    int last = arr[n - 1]; 
    arr[n - 1] = x; 
    int i = 0; 
  
    while (arr[i] != x)
    {
         
        i++; 
    }
    arr[n - 1] = last; 
  

    if ((i < n - 1) || (x == arr[n - 1])) 
        printf("present  " ); 
    else
        printf("Not found") ; 
} 
int main() 
{  
    int loop;int arr[]={},x;
    printf("enter elements loop ");
    scanf("%d",&loop);
    for (int i=1;i<=loop;i++)
    {
    printf("\n enter elements  ");
    scanf("%d",&arr[i]);
    }
    
    int n = sizeof(arr) / sizeof(arr[0]); 
    printf("enter key element");
    scanf("%d",&x);
    senti(arr, n, x); 
    return 0; 
} 