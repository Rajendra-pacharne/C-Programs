#include <stdio.h>
#include <stdlib.h>
void display(int a[], int n);
void bubble_sort(int a[], int n);
void insertion_sort(int a[], int n);
void quicksort(int arr[], int low, int high, int n);
int main()
{
    int n, choice, i;
    char ch[20];
    printf("Enter array size : ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter %d Element : ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf(" select any option for Sorting : \n");
    int low = 0, high = n - 1;
    while (1)
    {

        printf("\n1. Bubble Sort\n2. Insertion Sort\n3. Quick sort \n4. Display Array.\n5. Exit the Program.\n");
        printf("\nEnter your Choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            bubble_sort(arr, n);
            break;
        case 2:
            insertion_sort(arr, n);
            break;
        case 3:
            quicksort(arr, low, high, n);
            break;
        case 4:
            display(arr, n);
            break;

        case 5:
            return 0;
        default:
            printf("\n wrong  \n");
        }
    }
    return 0;
}
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++) //show function
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
}
void bubble_sort(int arr[], int n)
{
    int i, j, temp,count=0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        { //buble sort logic
            if (arr[j] > arr[j + 1])
            {
                display(arr, n);
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }count++;
        }
    }
    printf("After Bubble sort : ");
    display(arr, n);
    printf("count==%d",count);
}
void insertion_sort(int arr[], int n)
{
    int i, j, min,count=0;
    for (i = 1; i < n; i++)
    {
        min = arr[i];
        j = i - 1;
        while (min < arr[j] && j >= 0)              //inseertion sort logic
        {
            display(arr, n);
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = min;
        count++;
    }
    printf("After Insertion sort: ");
    display(arr, n);
    printf("count==%d",count);
}
void quicksort(int arr[], int low, int high, int n)
{
    int pivot, t, i, j;
    if (low < high)
    {
        pivot = arr[low];
        i = low + 1;
        j = high;
        while (1)
        {

            while (pivot > arr[i] && i <= high)
                i++;                                            //quick sort logic
            while (pivot < arr[j] && j >= low)
                j--;
            if (i < j)
            {
                display(arr, n);
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
            else
                break;
        
        }
        arr[low] = arr[j];
        arr[j] = pivot;
        quicksort(arr, low, j - 1, n);
        quicksort(arr, j + 1, high, n);
        
    }
    display(arr, n);
    
}