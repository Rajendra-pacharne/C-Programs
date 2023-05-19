#include<stdio.h>
int menu(void)
{  
    int n;

    printf("\n             **************************            ");
    printf("\n                    Main Menu");
    printf("\n             --------------------------");
    printf("\n             1. linear search");
    printf("\n             2. binary search");
    printf("\n             3. Sentinel search");
    printf("\n             5. exit");
    printf("\n             --------------------------");
    printf("\n Enter Your Choice: "); 
    scanf("%d",&n); 
    return n;
}
//get numbers from user .............
void getdata(){};
 

//show the result 
void showdata(){};

// logic of binary
void Binary(){

     int  first, last, middle,n1, search, array[100];
    printf("Enter number of elements\n");
  scanf("%d", &n1);
  printf("Enter %d integers\n", n1);
  for (int i = 0; i < n1; i++)
  {
  scanf("%d", &array[i]);
  }
  printf("Enter value to find\n");
  scanf("%d", &search);

  first = 0;
  last = n1 - 1;
  middle = (first+last)/2;

  while (first <= last) 
  {
    if (array[middle] < search)
      first = middle + 1;
    else if (array[middle] == search) 
    {
      printf("%d found at location %d.\n", search, middle+1);
      break;
    }
    else
      last = middle - 1;
      middle = (first + last)/2;
  }
  if (first > last)
    printf("Not found! %d isn't present in the list.\n", search);
    

};

//logic of Linear 
void Linear(){
    
int loop;int a[]={};int k;
printf("enter elements loop ");
scanf("%d",&loop);
for (int i=1;i<=loop;i++)
{
   printf("\n enter elements  ");
   scanf("%d",&a[i]);
}

printf("\n \n enter key");
scanf("%d",&k);

for (int i=1;i<=loop;i++)
{
      if (a[i]==k)
      {
         printf("\n \n element found %d",a[i]);
         break;
      }
      else
      {
         printf("\n \n not found");
        
      }
     
}

};


// logic of sentinel
void Sentinel(){};





// function call and switch case
int main(void)
{      int ch;
    do{ ch=menu();
    switch(ch)
    {
        case 1:   Binary();  break;
        case 2: Linear(); break;
        
    }
    
    
    
    }while (ch<5);
    return 0;
}
