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
     struct node *prev;
 }node;
 void addNode(node **, int);
 void addAfterNode(node **, int, int);
 void addBeforeNode(node **, int, int);
 void displayNode(node *, char);
 int main(void)
 {
     int i;
     node *head_ref = NULL;
     
     i = 0;
     while (i < 9)
     {
         addNode(&head_ref, i);
         ++i;
     }
     displayNode(head_ref, 'a');
     putchar(10);
     addAfterNode(&head_ref, 2, 0);
     displayNode(head_ref, 97);
     putchar(10);
     addBeforeNode(&head_ref, 2, 0);
     displayNode(head_ref, 'a');
     return (0);
 }
 void addNode(node **root, int x)
 {
     node *tmp = malloc(sizeof(node));
     tmp->data = x;
     tmp->next = NULL;
     tmp->prev = NULL;
     
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
     tmp->prev = p;
 }
 void addAfterNode(node **root,int val, int x)
 {
     node *tmp = *root;
     node *new_node = malloc(sizeof(node));
     while (tmp != NULL && tmp->data != x)
     {
         tmp = tmp->next;
     }
     if (new_node == NULL)
     {
         printf("unable to allocate memory\n");
         exit(1);
     }
     if (tmp == NULL)
     {
         printf("Node with %d is not found\n");
         return;
     }
     new_node->data = val;
     if (tmp->next)
     {
         tmp->next->prev = new_node;
     }
     new_node->next = tmp->next;
     tmp->next = new_node;
     new_node->prev = tmp;
 }
 void addBeforeNode(node **root, int val, int x)
 {
     node *tmp = *root;
     node *new_node = malloc(sizeof(node));
     while (tmp != NULL && tmp->data != x)
     {
         tmp = tmp->next;
     }
     if (new_node == NULL)
     {
         printf("unable to allocate memory\n");
     }
     if (tmp == NULL)
     {
         printf("Node with %d is not found\n", x);
         return;
     }
     new_node->data = val;
     if (tmp->prev)
     {
         tmp->prev->next = new_node;
     }
     else
     {
         *root = new_node;
     }
     new_node->next = tmp;
     new_node->prev = tmp->prev;
     tmp->prev = new_node;
 }
 void displayNode(node *p, char x)
 {
     node *tmp = p; /*tmp is used for traversing the list*/
     switch (x)
     {
         case 'a':
                printf("testing node count: ");
                break;
         default:
     }
     for (; tmp;)
     {
         printf("%d", tmp->data);
         tmp = tmp->next;
     }
 }
