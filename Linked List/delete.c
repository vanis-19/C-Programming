#include<stdio.h>
#include<stdlib.h>
void create(int);
void beginsert(int);
void begdelete();
void lastinsert(int);
void randominsert(int item);
void begdelete();
void printlist();
void end_delete();
void delete_specified();

struct node
{
    int data;
    struct node *next;
};
struct node *head;

void main ()
{
int choice,item, data;
    do
    {
        printf("\n1.Append List\n2.Delete node\n3.Exit\n4.begin\n5.insert List\n6.random insert\n7.Delete\n8.print\n9.delete specified\n10.Enter your choice?");
        //printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("\nEnter the item\n");
            scanf("%d",&item);
            create(item);
            break;
            case 2:
            end_delete();
            break;
            case 3:
            exit(0);
            break;
            case 4:
            printf("\nEnter the item which you want to insert?\n");
            scanf("%d",&data);
            beginsert(data);
            break;
            case 5:
            printf("\nEnter the item\n");
            scanf("%d",&item);
            lastinsert(item);
            break;
            case 6:
            printf("\nEnter the item\n");
            scanf("%d",&item);
            randominsert(item);
            break;
            case 7:
            begdelete();
            break;
            case 8:
            printlist();
            break;
            case 9:
            delete_specified();
            break;
            default:
            printf("\nPlease enter valid choice\n");
        }

    }while(choice != 9);
}
void create(int item)
    {
        struct node *ptr = (struct node *)malloc(sizeof(struct node *));
        struct node *p=NULL;
        ptr->data = item;
        ptr->next=NULL;
        if(head == NULL)
        {
            head=ptr;
        }
        else
        {
            p=head;
            while(p->next!=NULL)
            {
               p=p->next;
            }
            p->next=ptr;
            printf("\nNode inserted\n");
        }
}

void beginsert(int data)

    {
        struct node *temp = (struct node *)malloc(sizeof(struct node *));
        //struct node *ptr=NULL;
        if(temp == NULL)
        {
            printf("\nlist is empty\n");
        }
        else
        {
            temp->data = data;
            temp->next = head;
            head = temp;
            printf("\nNode inserted begining\n");
        }
     }

void lastinsert(int item)
{
struct node *temp = (struct node *)malloc(sizeof(struct node *));
     if(temp==NULL)
     {
         printf("overflow");
     }
     else
         temp->data=item;
         {
               if(head==NULL)
               {
//temp->data=item;
                      temp->next=NULL;
                      head=temp;
                      printf("node inserted");
                }
                else
                {
                struct node *p=head;
                while(p->next!=NULL)
                {
                    p=p->next;
                 }
                p->next=temp;
                temp->next=NULL;
                printf("node inserted last");
                }
            }
 }
 void randominsert(int item)
    {
        struct node *temp = (struct node *) malloc (sizeof(struct node));
        struct node *p;
        int i,loc;
        if(temp == NULL)
        {
            printf("\nOVERFLOW");
        }
        else
        {

            printf("Enter the location");
            scanf("%d",&loc);
            temp->data = item;
            p=head;
            for(i=0;i<loc;i++)
            {
                p = p->next;
                if(p == NULL)
                {
                    printf("\ncan't insert\n");
                    return;
                }

            }
            temp ->next = p ->next;
            p ->next = temp;
            printf("\nNode inserted random");
        }

    }

void begdelete()
{
if(head==NULL)
   {
       printf("list is empty");
    }
else
{
struct node *p=head;
p=p->next;
free(p);
printf("node deleted begging");
}
}


void printlist()
{
struct node *p=head;
   if(p==NULL)
        {
           printf("list is empty");
        }
   else
        {
             while(p!=NULL)
             {
                 printf("%d\n", p->data);
                 p=p->next;
             }
        }
}

void end_delete()
    {
        struct node *ptr,*ptr1;
        if(head == NULL)
        {
            printf("\nlist is empty");
        }
        else if(head -> next == NULL)
        {
            head = NULL;
            free(head);
            printf("\nOnly node of the list deleted ...");
        }

        else
        {
            ptr = head;
            while(ptr->next != NULL)
                {
                    ptr1 = ptr;
                    ptr = ptr ->next;
                }
                ptr1->next = NULL;
                free(ptr);
                printf("\n Deleted Node from the last ...");
            }
        }



void delete_specified()
    {
        struct node *ptr, *ptr1;
        int loc,i;
        scanf("%d",&loc);
        ptr=head;
        for(i=0;i<loc;i++)
        {
            ptr1 = ptr;
            ptr = ptr->next;

            if(ptr == NULL)
            {
                printf("\nThere are less than %d elements in the list..\n",loc);
                return;
            }
        }
        ptr1 ->next = ptr ->next;
        free(ptr);
        printf("\nDeleted %d node ",loc);
    }

