/*
 * Author: Adeniyi Obanla
 * Theme: practising Linked List
 */
#include <stdio.h>
#include <stdlib.h>
/**
 * 
 * 
 */
 typedef struct node
 {
     int data;
     struct node *next;
 } node;
 void DelAnyNode(node **root, int);
 void addAfterNode(node **, int, unsigned);
 void revNode(node **, int);
 void displayNode4(node *);
 void addNode(node **root, int x)
 {
     node *tmp;
     tmp = malloc(sizeof(node));
     tmp->data = x;
     tmp->next = NULL;
     
     if (*root == NULL)
     {
         *root = tmp;
         return;
     }
     node *p;
     p = *root;
     while (p->next)
     {
         p = p->next;
     }
     p->next = tmp;
 }
 void displayNode(node *p, char m)
 {
     node *tmp = p;
     int i = 0;
     
     if (m == 97)
     {
         printf("Testing node count1: ");
     }
     else
     {
         printf("Testing node count2: ");
     }
     while (tmp)
     {
         printf("%d", tmp->data);
         if (i != 8)
         {
             printf(", ");
         }
         tmp = tmp->next;
         ++i;
     }
 }
 void displayNode2(node *p, int x)
 {
     node *tmp;
     tmp = p;
     int i = 0;
     if (x == 0)
     {
         printf("Testing node count2: ");
     }
     
     for (; tmp;)
     {
         printf("%d", tmp->data);
         if (i != 7)
         {
             putchar(',');
             putchar(' ');
         }
         ++i;
         tmp = tmp->next;
     }
 }
 void displayNode3(node *p, char x)
 {
     node *tmp = p;
     int i = 0;
     
     if (x == 98)
     {
         printf("Testing node count3: ");
     }
     while (tmp)
     {
         printf("%d", tmp->data);
         if (i != 8)
         {
             printf(", ");
         }
         tmp = tmp->next;
         ++i;
     }
 }
 int main(void)
 {
     node *root = NULL;
     int i = 0;
     
     while (i < 9)
     {
         addNode(&root, i);
         ++i;
     }
     displayNode(root, 'a');
     putchar(10);
     DelAnyNode(&root, 0);
     displayNode2(root, 0);
     printf("\n");
     addAfterNode(&root, 78, 3);
     displayNode3(root, 'b');
     putchar(10);
     revNode(&root, 3);
     displayNode4(root);
     return (0);
 }
 void DelAnyNode(node **root, int x)
 {
     node *prev = NULL;
     node *tmp;
     tmp = *root;
     while (tmp->data != x && tmp->next)
     {
         prev = tmp;
         tmp = tmp->next;
     }
     if (prev == NULL)
     {
         *root = tmp->next;
     }
     else
     {
         prev->next = tmp->next;
     }
 }
 void addAfterNode(node **root, int val, unsigned x)
 {
     node *tmp = *root;
     
     while (tmp->data != x && tmp->next)
     {
         tmp = tmp->next;
     }
     if (tmp)
     {
         node *list = malloc(sizeof(node));
         list->data = val;
         list->next = tmp->next;
         tmp->next = list;
     }
 }
 void revNode(node **root, int x)
 {
     node *tmp = *root;
     node *prev = NULL;
     node *next;
     if (x == 3)
     {
         printf("Testing node count4: ");
     }
     while (tmp)
     {
         next = tmp->next;
         tmp->next = prev;
         prev = tmp;
         tmp = next;
     }
     *root = prev;
 }
 void displayNode4(node *p)
 {
     node *tmp = p;
     int i = 1;
     while (tmp)
     {
         printf("%d", tmp->data);
         if (i != 9)
         {
             putchar(',');
             putchar(' ');
         }
         tmp = tmp->next;
         ++i;
     }
 }
