#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
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
 void DlListcreateNode(int);
 void DeleteFirstNode();
 void DeleteLastNode();
 void DeleteAnyNode(int);
 void displayNode(int);
 void ReverseNode(int);
 int main(void)
 {
     stnode = NULL;
     ennode = NULL;
     
     int a, n, insPlc;
     
     printf("Enter number of nodes(3 or more): ");
     scanf("%d", &n);
     
     if (n >= 3)
     {
         DlListcreateNode(n);
         a = 1;
         displayNode(a);
     }
     else
     {
         printf("Invalid selection, try again");
         exit(1);
     }
     
     printf("Enter the node to delete: ");
     scanf("%d", &insPlc);
     
     if (insPlc < 1 || n < insPlc)
     {
         printf("Invalid selection, try again");
         exit(1);
     }
     else if (1 <= insPlc && n >= insPlc) 
     {
         DeleteAnyNode(insPlc);
         a = 0;
         displayNode(a);
     }
     ReverseNode(n);
     return (0);
 }
 void DlListcreateNode(int n)
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
                 if (fnnode)
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
                     printf("cannot assign value to an empty node\n");
                 }
                 ++i;
             }
         }
         else
         {
             printf("Node invalid unable to assign value\n");
         }
     }
     else
     {
         printf("unable to create memory\n");
     }
 }
 void DeleteAnyNode(int pos)
 {
     node *tmp;
     tmp = stnode;
     int i;
     
     i = 1;
     for (; i < pos && tmp;)
     {
         tmp = tmp->next;
         i++;
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
 void ReverseNode(int n)
 {
     int x;
     x = 1;
     node *tmp;
     if (stnode == NULL)
     {
         printf("unable to reverse an empty list\n");
     }
     else
     {
         tmp = stnode;
         while (tmp->next)
         {
             tmp = tmp->next;
         }
         printf("The reverse of the list is:\n");
         while (tmp)
         {
             printf("Node %d: %d\n", x, tmp->data);
             tmp = tmp->prev;
             ++x;
         }
     }
 }
 void displayNode(int m)
 {
     node *tmp;
     int i;
     i = 1;
     
     if (stnode == NULL)
     {
         printf("Cannot display an empty list\n");
     }
     else
     {
         tmp = stnode;
         if (m == 1)
         {
             printf("Data in the list are:\n");
         }
         else
         {
             printf("After deletion the list is:\n");
         }
         while (tmp)
         {
             printf("Node %d: %d\n", i, tmp->data);
             tmp = tmp->next;
             ++i;
         }
     }
 }
