#include <stdio.h>
#include <stdlib.h>
/**
 * 
 */
 struct node
 {
     int data;
     struct node *next;
     struct node *prev;
 } *stnode, *ennode;
 typedef struct node node;
 void DlListcreation(int);
 void displayNode(int);
 void DeleteFirstNode();
 void DeleteLastNode();
 int main(void)
 {
     int a, n;
     printf("Enter number of nodes (3 or more): ");
     scanf("%d", &a);
    
    DlListcreation(a);
    n = 1;
    displayNode(n);
    DeleteFirstNode();
    n = 2;
    displayNode(n);
    DeleteLastNode();
    n = 3;
    displayNode(n);
    
    return (0);
 }
 void DeleteFirstNode()
 {
     node *tmp;
     if (stnode == NULL)
     {
         printf("Unable to delete empty list...\n");
     }
     else
     {
         tmp = stnode;
         stnode = stnode->next;
         stnode->prev = NULL;
         free (tmp);
     }
 }
 void DeleteLastNode()
 {
     node *tmp;
     if (ennode == NULL)
     {
         printf("Unable to delete empty list...\n");
     }
     else
     {
         tmp = ennode;
         ennode = ennode->prev;
         ennode->next = NULL;
         free(tmp);
     }
 }
 void displayNode(int n)
 {
     int i;
     i = 1;
     node *tmp;
     if (stnode == NULL)
     {
         printf("cannot display empty list");
     }
     else
     {
         tmp = stnode;
         if (n == 1)
         {
             printf("Data in the list are:\n");
         }
         else if (n == 2)
         {
             printf("Data after deletion of the first node are:\n");
         }
         else if (n == 3)
         {
             printf("Remaining data after the deletion of the last node:\n");
         }
         while (tmp)
         {
             printf("Node %d: %d\n", i, tmp->data);
             tmp = tmp->next;
             ++i;
         }
     }
 }
 void DlListcreation(int m)
 {
     int i, num;
     node *fnnode;
     if (m >= 1)
     {
         stnode = malloc(sizeof(node));
         if (stnode)
         {
             printf("Enter Node 1: ");
             scanf("%d", &num);
             stnode->data = num;
             stnode->next = NULL;
             stnode->prev = NULL;
             ennode = stnode;
             i = 2;
             while (i <= m)
             {
                 fnnode = malloc(sizeof(node));
                 if (fnnode != NULL)
                 {
                     printf("Enter Node %d: ", i);
                     scanf("%d", &num);
                     fnnode->data = num;
                     fnnode->prev = ennode;
                     fnnode->next = NULL;
                     ennode->next = fnnode;
                     ennode = fnnode;
                 }
                 else
                 {
                     printf("Unable to allocate memory");
                 }
                 ++i;
             }
         }
         else
         {
             printf("Unbale to allocate memory");
         }
     }
     else
     {
         printf("Invalid selection - unable to create memory");
     }
 }
