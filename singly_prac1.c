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
 }node;
 node *root = NULL;
 void insertatbegin(int);
 void insertatend(int);
 void insertafternode(node *, int);
 void printList();
 void deleteatend();
 void deleteatbegin();
 void deletenode(int);
 int searchlist(int);
 int main(void)
 {
     int res;
     insertatbegin(12);
     insertatbegin(7);
     insertatbegin(5);
     insertatend(2);
     insertatend(3);
     insertatend(8);
     insertafternode(root->next->next->next->next, 4);
     insertafternode(root->next->next->next, 6);
     printf("Linked List: ");
     printList();
     
     deleteatbegin();
     deleteatbegin();
     deleteatend();
     deletenode(7);
     printf("\nLinked List after deletion: ");
     printList();
     
     insertatbegin(8);
     insertatbegin(4);
     insertafternode(root->next->next, 10);
     printf("\nUpdated Linked List: ");
     printList();
     
     res = searchlist(2);
     if (res == 1)
     {
         printf("\nElement found");
     }
     else
     {
         printf("\nElement not found");
     }
     return (0);
 }
 void insertatbegin(int x)
 {
     node *new_node = malloc(sizeof(node));
     new_node->data = x;
     if (root)
     {
         new_node->next = root;
     }
     root = new_node;
 }
 void insertatend(int x)
 {
     node *tmp = root;
     node *new_node = malloc(sizeof(node));
     new_node->data = x;
     while (tmp->next)
     {
         tmp = tmp->next;
     }
     tmp->next = new_node;
 }
 void insertafternode(node *root, int x)
 {
     node *tmp = root;
     node *new_node = malloc(sizeof(node));
     new_node->data = x;
     if (new_node == NULL){
         printf("unable to allocate memory\n");
         exit(1);
     }
     if (tmp)
     {
         new_node->next = tmp->next;
         tmp->next = new_node;
     }
 }
 void printList()
 {
     node *tmp = root;
     printf("\n[");
     while (tmp)
     {
         printf(" %d ", tmp->data);
         tmp = tmp->next;
     }
     printf("]");
 }
 void deleteatbegin()
 {
     node *tmp = root;
     if (tmp)
     {
         root = tmp->next;
	 free(tmp);
	 return;
     }
 }
 void deleteatend()
 {
     node *tmp = root;
     for (; tmp->next->next;)
     {
         tmp = tmp->next;
     }
     free(tmp->next);
     tmp->next = NULL;
 }
 void deletenode(int x)
 {
     node *tmp = root;
     node *prev = NULL;
     if (tmp && tmp->data == x)
     {
         root = tmp->next;
         return;
     }
     while (tmp && tmp->data != x)
     {
         prev = tmp;
         tmp = tmp->next;
     }
     if (tmp == NULL)
     {
         printf("\nNode with value %d not found", x);
         return;
     }
     prev->next = tmp->next;
     free(tmp);
 }
 int searchlist(int x)
 {
     node *tmp = root;
     while (tmp)
     {
         if (tmp->data == x)
         {
             return (1);
         }
         tmp = tmp->next;
     }
     return (0);
 }
