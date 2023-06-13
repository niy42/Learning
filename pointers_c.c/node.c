#include <stdio.h>
#include <stdlib.h>
/**
 * 
 */
 typedef struct node
 {
    int data;
    struct node *next;
 }node;
 void add(node **root, int value)
 {
    node *tmp = malloc(sizeof(node));
    tmp->data = value;
    tmp->next = NULL;

    if (*root == NULL)
    {
        *root = tmp;
        return;
    }
    node *list = *root;
    while (list->next)
    {
        list = list->next;
    }
    list->next = tmp;
 }
 void printNode(node *list)
 {
    while (list != NULL)
    {
        printf("%d", list->data);
        list = list->next;
    }
 }
int main(void)
{
    int i;
    node *root = NULL;
    
    i = 0;
    do {
            add(&root, i);
            ++i;
    } while (i < 8);
    printNode(root);
    return (0);
}
