#include<stdio.h>
int main()
{

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

}