/*
 * Author: Adeniyi Obanla
 * Purpose: DoublyLinkedList operations
 */
#include <stdio.h>
#include <stdlib.h>
/**
 * main - doublelinkedlist delete operations 
 * Return - Always zero
 */
 struct node
 {
     int data;
     struct node *next;
     struct node *prev;
 } *ennode, *stnode;
 typedef struct node node;
 void addNode(int);
 void deleteFirstNode();
 void deleteLastNode();
 void deleteAnyNode(int);
 void displayNode(char);
 int main(void)
 {
     ennode = NULL;
     stnode = NULL;
     
     char a;
     int n, insPlc;
     
     printf("Enter number of node(3 or more): ");
     scanf("%d", &n);
     
     if (n < 3)
     {
         printf("unable to allocate memory\n");
         exit(1);
     }
     else
     {
         a = 'a';
         addNode(n);
         displayNode(a);
     }
     printf("Enter node to delete: ");
     scanf("%d", &insPlc);
     
     if (insPlc < 1 || insPlc > n)
     {
         printf("out of bound\n");
         exit(1);
     }
     else if (1 <= insPlc && insPlc <= n)
     {
         a = '0';
         deleteAnyNode(insPlc);
         displayNode(a);
     }
     return (0);
 }
 void addNode(int x)
 {
     int num, i;
     node *tmp;
     
     if (x >= 3)
     {
         stnode = malloc(sizeof(node));
         if (stnode)
         {
             printf("Enter value for Node 1: ");
             scanf("%d", &num);
             stnode->data = num;
             stnode->next = NULL;
             stnode->prev = NULL;
             ennode = stnode;
             
             i = 2;
             while (i <= x)
             {
                 tmp = malloc(sizeof(node));
                 if (tmp)
                 {
                     printf("Enter value for Node %d: ", i);
                     scanf("%d", &num);
                     tmp->data = num;
                     tmp->next = NULL;
                     tmp->prev = ennode;
                     ennode->next = tmp;
                     ennode = tmp;
                 }
                 else
                 {
                     printf("unable to assign to an invalid node");
                 }
                 ++i;
             }
         }
         else
         {
             printf("unable to assign to an invalid node");
         }
     }
     else
     {
         printf("Unable to allocate memory\n");
     }
 }
 void deleteFirstNode()
 {
     if (stnode == NULL)
     {
         printf("node invalid unable to delete");
     }
     else
     {
         stnode = stnode->next;
         free(stnode->prev);
         stnode->prev = NULL;
     }
 }
 void deleteLastNode()
 {
     node *tmp;
     if (ennode == NULL)
     {
         printf("invalid node unable to delete");
     }
     else
     {
         tmp = ennode->prev;
         tmp->next = NULL;
         free(ennode);
     }
 }
 void deleteAnyNode(int pos)
 {
     int i = 1;
     node *tmp = stnode;
     for (; i < pos && tmp; ++i)
     {
         tmp = tmp->next;
     }
     if (pos == 1)
     {
         deleteFirstNode();
     }
     else if (tmp == ennode)
     {
         deleteLastNode();
     }
     else if (tmp)
     {
         tmp->prev->next = tmp->next;
         tmp->next->prev = tmp->prev;
         free(tmp);
     }
 }
 void displayNode(char x)
 {
     int i = 1;
     node *tmp;
     if (stnode == NULL)
     {
         printf("invalid node - unable to display");
     }
     else
     {
         tmp = stnode;
         switch (x)
         {
             case 'a':
                    printf("Node in the list are:\n");
                    break;
             case '0':
                    printf("List after deleteion:\n");
                    break;
             default:
                    printf("invalid");
         }
         for (; tmp; ++i)
         {
            printf("Node %d: %d\n", i, tmp->data);
            tmp = tmp->next;
         }
     }
 }
