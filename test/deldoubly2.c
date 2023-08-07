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
 void DlListcreation(int n);
 void displayNode(int);
 void DeleteLastNode();
 void DeleteFirstNode()
 {
     node *tmp;
     if (stnode == NULL)
     {
         printf("unable to delete no data in the list\n");
     }
     else
     {
         tmp = stnode;
         stnode = stnode->next;
         stnode->prev = NULL;
         free (tmp);
     }
 }
 int main(void)
 {
     stnode = NULL;
     ennode = NULL;
     
     int a, n;
     printf("Enter the number of nodes (3 or more): ");
     scanf("%d", &n);
     
     DlListcreation(n);
     a = 1;
     displayNode(a);
     DeleteFirstNode();
     a = 2;
     displayNode(a);
     a = 3;
     DeleteLastNode();
     displayNode(a);
     return (0);
 }
 void displayNode(int m)
 {
     int i;
     i = 1;
     node *tmp;
     if (stnode == NULL)
     {
         printf("Unable to delete an empty list\n");
     }
     else
     {
         tmp = stnode;
         if (m == 1)
         {
             printf("Data in the list are:\n");
         }
         else if (m == 2)
         {
             printf("Data after deletion of first node are:\n");
         }
         else
         {
             printf("What remains after deleting the last node:\n");
         }
         while (tmp)
         {
             printf("Node %d: %d\n", i, tmp->data);
             tmp = tmp->next;
             ++i;
         }
     }
 }
 void DeleteLastNode()
 {
     node *tmp;
     if (ennode == NULL)
     {
         printf("Unable to delete an empty list\n");
     }
     else
     {
         tmp = ennode;
         ennode = ennode->prev;
         ennode->next = NULL;
         free(tmp);
     }
 }
 void DlListcreation(int a)
 {
     int i, num;
     node *fnnode;
     if (a >= 1)
     {
         stnode = malloc(sizeof(node));
         if (stnode != NULL)
         {
             printf("Enter Node 1: ");
             scanf("%d", &num);
             stnode->data = num;
             stnode->next = NULL;
             stnode->prev = NULL;
             ennode = stnode;
             
             i = 2;
             for (;i <= a; ++i)
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
                    printf("Unable to allocate memory:...\n");
                }
             }
         }
         else
         {
             printf("Unable to allocate memory:...\n");
         }
     }
     else
     {
         printf("Invalid option selected...\n");
     }
 }
