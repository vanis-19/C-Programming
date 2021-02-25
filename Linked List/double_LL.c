#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    struct node *next;
    int data;
};
struct node *head;
void insertion_beginning();
void insertion_last();
//void insertion_specified();
void deletion_beginning();
//void deletion_last();
//void deletion_specified();
//void display();
//void search();
int choice =0;
    while(choice != 9)
    {
        printf("\n*********Main Menu*********\n");
        printf("\nChoose one option from the following list ...\n");
        printf("\n===============================================\n");
        printf("\n1.Insert in begining\n2.Insert at last\n3.Delete from Beginning\n4.Exit\n");
        printf("\nEnter your choice?\n");
        scanf("\n%d",&choice);