/*
 * Author: Adeniyi Obanla
 * Purpose: Doubly linked
 *
 */
#include <stdio.h>
#include <stdlib.h>
/**
 * Perform stuffs on doubly linked list
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
 int main(void)
 {
     stnode = NULL;
     ennode = NULL;
       
     int a, n, insPlc;
     
     printf("Enter number of nodes (3 or more): ");
     scanf("%d", &n);
     
     if (n >= 3)
     {
         DlListcreateNode(n);
         a = 1;
         displayNode(a);
     }
     else
     {
         printf("Invalid option selected");
         exit(1);
     }
     
     printf("Enter node to delete: ");
     scanf("%d", &insPlc);
     
     if (insPlc < 1 || n < insPlc)
     {
         printf("Invalid option selected");
     }
     else if (insPlc >= 1 && insPlc <= n)
     {
         DeleteAnyNode(insPlc);
         a = 0;
         displayNode(a);
     }
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
             do {
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
                        printf("Unable to allocate memory\n");
                    }
                    ++i;
             } while (i <= n);
         }
         else
         {
            printf("Unable to allocate memory\n");
         }
     }
     else
     {
         printf("unable to allocate memory\n");
     }
 }
 void DeleteFirstNode()
 {
     node *tmp;
     if (stnode == NULL)
     {
         printf("Cannot delete an empty list");
     }
     else
     {
         tmp = stnode;
         stnode = stnode->next;
         stnode->prev = NULL;
         free(tmp);
     }
 }
 void DeleteLastNode()
 {
     node *tmp;
     if (ennode == NULL)
     {
         printf("The list is empty cannot delete");
     }
     else
     {
         tmp = ennode;
         ennode = ennode->prev;
         ennode->next = NULL;
         free(tmp);
     }
 }
 void DeleteAnyNode(int pos)
 {
     node *tmp;
     tmp = stnode;
     int i;
     
     i = 1;
     for (; i < pos && tmp; ++i)
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
         tmp->next->prev = tmp->prev;
         tmp->prev->next = tmp->next;
     }
 }
 void displayNode(int m)
 {
     int i;
     i = 1;
     node *tmp;
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
             printf("List after deletion are:\n");
         }
         while (tmp != NULL)
         {
             printf("Node %d: %d\n", i, tmp->data);
             tmp = tmp->next;
             ++i;
         }
     }
 }
