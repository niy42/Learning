/*
 * Author: Obanla Adeniyi 
 *  Purpose: Playing with C language
 */
#include <stdio.h>
#include <stdlib.h>
/**
 * 
 *
 */
 int _sqr_recursive(int n, int low, signed high)
 {
     if (low > high)
     {
         return (-1);
     }
     else
     {
         int mid = low + (high - low) / 2;
         int sqr = (long long)mid * mid;
         
         if (sqr == n)
         {
             return mid;
         }
         else if (sqr < n)
         {
             return _sqr_recursive(n, mid + 1, high);
         }
         else
         {
             return _sqr_recursive(n, low, mid - 1);
         }
     }
 }
 int _sqr_recursion(int num)
 {
     if (num < 0)
     {
         return (-1);
     }
     else
     {
         return _sqr_recursive(num, 0, num);
     }
 }
 struct node
 {
     int data;
     struct node *next;
     struct node *prev;
 } *stnode, *ennode;
 typedef struct node node;
 void addNode(int);
 void delAnyNode(int);
 void displayNode(char);
 void delFirstNode();
 void delLastNode();
 void revNode(int);
 int main(void)
 {
     int num;
     int res;
     
     printf("Enter a value: ");
     scanf("%d", &num);
     res = _sqr_recursion(num);
     if (res == -1)
     {
         printf("%d does not have a natural square root\n", num);
         exit(1);
     }
     else
     {
        printf("The square root of %d is %d\n", num, res);
     }
     
     ennode = NULL;
     stnode = NULL;
     
     int a, n, insPlc;
     
     printf("Enter number of node(3 or more): ");
     scanf("%d", &n);
     
     if (n < 3)
     {
         printf("Invalid selection - try again");
         exit(1);
     }
     else
     {
         a = 'a';
         addNode(n);
         displayNode(a);
     }
     
     printf("Enter Node to delete: ");
     scanf("%d", &insPlc);
     
     if (1 > insPlc || n < insPlc)
     {
         printf("Invalid selection - try again");
         exit(1);
     }
     else if (insPlc >= 1 && insPlc <= n)
     {
         delAnyNode(insPlc);
         a = 0;
         displayNode(a);
     }
     printf("Reversing the nodes:........\n");
     revNode(n);
     printf("Adeniyi Obanla --> the greatest software engineer ever:...\n");
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
            stnode->prev = NULL;
            stnode->next = NULL;
            ennode = stnode;
            i = 2;
            for (; i <= n; ++i)
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
                    printf("cannot assign value to an invalid node\n");
                }
            }
         }
         else
         {
             printf("unable to assign value to an empty node\n");
         }
     }
     else
     {
         printf("unable to allocate memory\n");
     }
 }
 void delAnyNode(int pos)
 {
     int i = 1;
     node *tmp;
     tmp = stnode;
     while (i < pos && tmp)
     {
         tmp = tmp->next;
         ++i;
     }
     if (pos == 1)
     {
         delFirstNode();
     }
     else if (tmp == ennode)
     {
         delLastNode();
     }
     else if (tmp)
     {
         tmp->next->prev = tmp->prev;
         tmp->prev->next = tmp->next;
     }
 }
 void delFirstNode()
 {
     if (stnode == NULL)
     {
         printf("unable to delete an empty node...\n");
     }
     else
     {
         stnode = stnode->next;
         free(stnode->prev);
         stnode->prev = NULL;
     }
 }
 void delLastNode()
 {
     node *tmp;
     if (ennode == NULL)
     {
         printf("cannot delete an empty node:...\n");
     }
     else
     {
         tmp = ennode->prev;
         tmp->next = NULL;
         free(ennode);
     }
 }
 void revNode(int n)
 {
     int i = 1;
     node *tmp = stnode;
     
     for (; tmp->next;)
     {
         tmp = tmp->next;
     }
     while (tmp)
     {
         printf("node %d: %d\n", i, tmp->data);
         tmp = tmp->prev;
         ++i;
     }
 }
 void displayNode(char m)
 {
     node *tmp;
     int i = 1;
     
     if (stnode == NULL)
     {
         printf("cannot display an empty list...\n");
     }
     else
     {
         tmp = stnode;
         switch (m)
         {
             case 97:
                    printf("Data in the list are:\n");
                    break;
             case 98:
                    printf("LIst after deletion is:\n");
                    break;
         }
         for (; tmp; ++i)
         {
             printf("node %d: %d\n", i, tmp->data);
             tmp = tmp->next;
         }
     }
 }
