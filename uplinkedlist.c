#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void showList(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d -->", ptr->data);
        ptr = ptr->next;
    }
}


struct Node * insertAtFirst(struct Node *head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = head;
    return ptr; 
}

struct Node * insertAtIndex(struct Node *head, int data, int index){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    struct Node * p = head;
    int i = 0;

    while (i!=index-1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

struct Node * insertAtEnd(struct Node *head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node * p = head;

    while(p->next!=NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

//                                 Deletion operations ...............

struct Node * deleteatfirst(struct Node *head)
{
    struct Node * ptr=head;
    head = head -> next;
    free(ptr);
    return head;
}

struct Node * deleteatmiddle(struct Node *head,int index)
{
    struct Node * p=head;
    int i=0;
    while(i!=index-1)
    {
        p=p->next;
        i++;
    }
    struct Node * q=p-> next;
    p-> next =q->next;
    free(q);
    return head;
}
struct Node * deleteatend(struct Node *head)
{
   struct Node *p = head;
    struct Node *q = head->next;
    while(q->next !=NULL)
    {
        p = p->next;
        q = q->next;
    }
    
    p->next = NULL;
    free(q);
    return head;
}

int main(){
    int y;
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    
   
    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 41;
    third->next = fourth;

    fourth->data = 66;
    fourth->next = NULL;
    
   

    printf("\n Linked list before insertion and Deletion \n");
     showList(head);
     
     do
     {
     printf("\n 1 = enter Element at begining");
     printf("\n 2 = enter Element at Middle");
     printf("\n 3 = enter Element at End");
     printf("\n 4 = Delete Element at First ");
     printf("\n 5 = Delete Element at Middle");
     printf("\n 6 = Delete Element at End ");
     printf("\n 7 = Search Element in linked list \n ");
    int ch;
    scanf("%d",&ch);
    
    switch (ch)
   {
    case 1:
        printf("\n enter element\n ");
        int ele;
        scanf("%d",&ele);
        head = insertAtFirst(head,ele );
        printf("\nLinked list after insertion\n");
        showList(head);
    
        break;

    case 2:
        printf("\n enter element and position ");
        int ele1,pos;
        scanf("%d",&ele1);
        scanf("%d",&pos);
        head = insertAtIndex(head, ele1, pos);
        printf("\nLinked list after insertion\n");
        showList(head);
    
        break;
    
    case 3:
       printf("\n enter element ");
        int ele2;
        scanf("%d",&ele2);
        head = insertAtEnd(head,ele2);
        printf("\nLinked list after insertion\n");
        showList(head);
    
        break;
      
      case 4:
         head= deleteatfirst(head);
         printf("delete at first");
         printf("\nLinked list after Deletion \n");
         showList(head);
         break;
        
      case 5:
         printf("\n Enter Index \n ");
         int in;
         scanf("%d",&in);
         head=deleteatmiddle(head,in);
         printf("\nLinked list after Deletion of Index  \n");
         showList(head);
         break;
      case 6:
            printf("case 6");
            head=deleteatend(head);
            printf("\nLinked list after Deletion of last element  \n");
            showList(head);
            break;
       case 7:
          printf("....In progress...");
          break;
       
      default :
            printf("wrong choice");
   
      }
     
    
        printf("\n do you want to continue y / n ");
        scanf("%d",&y);
     }
    
     while(1==y);
     return 0;
}


