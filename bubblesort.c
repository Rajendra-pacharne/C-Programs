//.......bubblesort 27-2-21


#include <stdio.h>
void bubbleSort(int array[], int size) 
{
  for (int j = 0; j < size - 1; ++j)
  {
    for (int i = 0; i < size - j - 1; ++i) 
    {
        if (array[i] > array[i + 1])
        {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}
void showdata(int array[], int size)
{
  for (int i = 0; i < size; ++i)
  {
    printf("%d  ", array[i]);
  }
  printf("\n");
}
int main() 
{
  
  int data[] = {500,400,300,200,100};
  int size = sizeof(data) / sizeof(data[0]);
  bubbleSort(data, size);
  printf("Sorted Array\n");
  showdata(data, size);
}