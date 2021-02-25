#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
};

struct Node *Start=NULL;

void createList()
{
  struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
  struct Node *t=NULL;
  temp->data=data;
  temp->next=NULL;
  if(Start == NULL)
  {
    Start=temp;
  }
  else
  {
    temp->data=data;
    t=Start;
    while(t->next!=NULL)
    {
      t=t->next;
    }
    t->next=temp;
  }
}


 void printList()
 {
   struct Node *t=Start;
   if(t==NULL)
   {
     printf("List is empty\n");
   }
   else{
     while(t!=NULL)
     {
       printf("%d,",t->data);
       t=t->next;
     }
   }
 }

void  push(int data)
{
struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
if(temp==NULL)
{
printf("over flow");

}
else{
if(start==NULL)
{
temp->data=data;
temp->next=NULL;
start=temp;

}
else{
temp->data=data;
temp->next=start;
start=temp;

}

}
}

void pop()
{
int item;
struct Node *p;
if(start==NULL)
{
printf("under flow");

}
else
{
item=start->data;
p=star;
start=start->next;
free(p);
}


}
void menu()
{
  printf("--------Menu---------\n");
  printf("1. create list(insert at end)\n");
  printf("2. Delete from beginning\n");
  printf("3. Print List\n");
  printf("4. Insert in beginning\n");
  printf("0. Exit\n");
  printf("Enter your choice:");
}

void performOperation(int ch)
{
  int data, check;
  switch(ch)
  {
    case 1:
      printf("enter number to insert: ");
      scanf("%d",&data);
       createList(data);
      break;
    case 2:
        data=deleteFrombegining();
        if(data!=-1)
        printf("%d is removed from the list\n",data);
    break;
    case 3:
      printList();
     break;

    case 4:
      printf("enter number to insert: ");
      scanf("%d",&data);
       InsertinBegining(data);
      break;
    case 0:
      printf("Exiting....");
      break;
  }
}

int main(void) {
  int ch;
  do{
    menu();
    scanf("%d",&ch);
    performOperation(ch);
  }while(ch!=0);
  return 0;
}