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
 } *ennode, *stnode;
 typedef struct node node;
 void addNode(int);
 void DelAnyNode(int);
 void DelFirstNode();
 void DelLastNode();
 void displayNode(char);
 void revNode();
 int main(void)
 {
     stnode = NULL;
     ennode = NULL;
     
     int a, n, insPlc;
     printf("Enter number of node(3 or more): ");
     scanf("%d", &n);
     
     if(n < 3)
     {
         printf("Invalid selection, try again");
         exit(1);
     }
     else
     {
         addNode(n);
         a = 'a';
         displayNode(a);
     }
     printf("Enter node to delete: ");
     scanf("%d", &insPlc);
     if (1 > insPlc || n < insPlc)
     {
         printf("Invalid selection - try again");
     }
     else if (insPlc >= 1 && insPlc <= n)
     {
         DelAnyNode(insPlc);
         a = 'b';
         displayNode(a);
     }
     printf("The reverse of the node is....\n");
     revNode(n);
     return (0);
 }
 void addNode(int n)
 {
     int i, num;
     node *tmp;
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
                 tmp = malloc(sizeof(node));
                 if (tmp)
                 {
                     printf("Enter node %d: ", i);
                     scanf("%d", &num);
                     tmp->data = num;
                     tmp->prev = ennode;
                     tmp->next = NULL;
                     ennode->next = tmp;
                     ennode = tmp;
                 }
                 else
                 {
                     printf("node is empty cannot assign values\n");
                 }
                 ++i;
             }
         }
         else
         {
             printf("Invalid node cannot assign a value\n");
         }
     }
     else
     {
         printf("unable to allocate memory\n");
     }
 }
 void DelAnyNode(int pos)
 {
     int i;
     i = 1;
     node *tmp = stnode;
     for (; i < pos && tmp; ++i)
     {
         tmp = tmp->next;
     }
     if (pos == 1)
     {
         DelFirstNode();
     }
     else if (tmp == ennode)
     {
         DelLastNode();
     }
     else if (tmp)
     {
         tmp->next->prev = tmp->prev;
         tmp->prev->next = tmp->next;
     }
 }
 void DelFirstNode()
 {
     node *tmp;
     if (stnode == NULL)
     {
         printf("cannot delete an empty list\n");
     }
     else
     {
         tmp = stnode;
         stnode = stnode->next;
         stnode->prev = NULL;
         free(tmp);

	 /*tmp = stnode->next;
	 tmp->prev = NULL;
	 free(stnode);*/

	 /*stnode = stnode->next;
	 free(stnode->prev);
	 stnode->prev = NULL;*/
     }
 }
 void DelLastNode()
 {
     node *tmp;
     if (ennode == NULL)
     {
         printf("List is empty - unable to delete\n");
     }
     else
     {
         tmp = ennode->prev;
	 tmp->next = NULL;
	 free(ennode);

	 /*tmp = ennode;
	 ennode = ennode->prev;
	 ennode->next = NULL;
	 free(tmp);*/

	 /*ennode = ennode->prev;
	 free(ennode->next);
	 ennode->next = NULL;*/

     }
 }
 void revNode(int n)
 {
     node *tmp;
     int i = 1;
     tmp = stnode;
     
     while (tmp->next)
     {
         tmp = tmp->next;
     }
     for (; tmp; ++i)
     {
         printf("node %d: %d\n", i, tmp->data);
         tmp = tmp->prev;
     }
 }
 void displayNode(char m)
 {
     int i = 1;
     node *tmp;
     if (stnode == NULL)
     {
         printf("unable to display an empty list\n");
     }
     else
     {
         tmp = stnode;
         switch(m)
         {
             case 97:
                    printf("Data in the list are:\n");
                    break;
             case 98:
                    printf("Data after deletion is:\n");
                    break;
         }
         while (tmp)
         {
             printf("node %d: %d\n", i, tmp->data);
             tmp = tmp->next;
             ++i;
         }
     }
 }
