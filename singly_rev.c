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
 void addNode(node **, int);
 void displayNode(node *, char);
 void revNode(node **);
 int main(void)
 {
     node *root;
     root = NULL;
     int a, i;
     
     i = 0;
     while (i < 9)
     {
         addNode(&root, i);
         ++i;
     }
     a = 'a';
     displayNode(root, a);
     revNode(&root);
     a = 1;
     displayNode(root, a);
     return (0);
 }
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
     node *p = *root;
     while (p->next)
     {
         p = p->next;
     }
     p->next = tmp;
 }
 void displayNode(node *p, char m)
 {
     int i = 0;
     node *tmp = p;
     if (m == 97)
     {
         printf("Data in the list are: ");
     }
     else
     {
         printf("Data in reversed list are: ");
     }
     while (tmp && i < 9)
     {
         printf("%d", tmp->data);
         if (i == 8)
            break;
         printf(", ");
         tmp = tmp->next;
         ++i;
     }
     putchar(10);
 }
 void revNode(node** root)
 {
     node *tmp;
     tmp = *root;
     node *next = NULL;
     node *prev = NULL;
     
     while (tmp)
     {
         next = tmp->next;
         tmp->next = prev;
         prev = tmp;
         tmp = next;
     }
     *root = prev;
 }
