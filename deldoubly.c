#include <stdio.h>
#include <stdlib.h>
/**
 *
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
 void DeleteFirstNode();
 void DeleteLastNode();
 void displayNode(int);
 void DeleteAnyNode(int);
 int main(void)
 {
     stnode = NULL;
     ennode = NULL;
     int a, n, insPlc;
     
     printf("Enter number of nodes (3 or more): ");
     scanf("%d", &n);
     
     DlListcreation(n);
     a = 1;
     displayNode(a);
     
     printf("Enter node to delete: ");
     scanf("%d", &insPlc);
     
     if (insPlc < 1 || insPlc > n)
     {
         printf("Invalid number selected\n");
     }
     else if (insPlc >= 1 && n >= insPlc)
     {
        DeleteAnyNode(insPlc);
        a = 2;
        displayNode(a);
     }
     
     return (0);
 }
 void DlListcreation(int n)
 {
     int i, num;
     node *fnnode;
     
     if (n >= 3)
     {
         stnode = malloc(sizeof(node));
         if (stnode)
         {
             printf("Enter node 1: ");
             scanf("%d", &num);
             stnode->data = num;
             stnode->next = NULL;
             stnode->prev = NULL;
             ennode = stnode;
             
             i = 2;
             while (i <= n)
             {
                 fnnode = malloc(sizeof(node));
                 if (fnnode != NULL)
                 {
                     printf("Enter node %d: ", i);
                     scanf("%d", &num);
                     fnnode->data = num;
                     fnnode->prev = ennode;
                     fnnode->next = NULL;
                     ennode->next = fnnode;
                     ennode = fnnode;
                 }
                 else
                 {
                     printf("Unable to allocate memory\n");
                 }
                 ++i;
             }
         }
         else
         {
             printf("Unable to create memory\n");
         }
     }
     else
     {
         printf("Invalid selection - unable to allocate memory\n");
     }
 }
 void DeleteFirstNode()
 {
     node *tmp;
     if (stnode == NULL)
     {
         printf("Cannot delete an empty list\n");
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
         printf("Cannot delete an empty list\n");
     }
     else
     {
         tmp = ennode;
         ennode = ennode->prev;
         ennode->next = NULL;
         free (tmp);
     }
 }
 void DeleteAnyNode(int pos)
 {
     int i;
     node *tmp;
     tmp = stnode;
     i = 1;
     for (; i < pos && tmp->next; ++i)
     {
         tmp = tmp->next;
     }
     if (pos == 1)
     {
         DeleteFirstNode();
     }
     else if (tmp == ennode)
     {
         DeleteLastNode();
     }
     else if (tmp)
     {
         tmp->prev->next = tmp->next;
         tmp->next->prev = tmp->prev;
     }
 }
 void displayNode(int x)
 {
     int i, num;
     i = 1;
     node *tmp;
     if (stnode == NULL)
     {
         printf("Cannot display an empty list\n");
     }
     else
     {
         tmp = stnode;
         if (x == 1)
         {
             printf("Data entered into the list are:\n");
         }
         else
         {
             printf("Data after deletion, the new list are:\n");
         }
         while (tmp)
         {
             printf("Node %d: %d\n", i, tmp->data);
             tmp = tmp->next;
             ++i;
         }
     }
 }
