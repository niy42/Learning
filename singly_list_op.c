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
void insertatbegin(int x);
void insertatend(int);
void insertafternode(node *root, int);
void deleteatbegin();
void deleteatend();
void deletenode(int);
void displayNode();
int searchlist(int);
int main(void)
{
    int res;
    insertatbegin(6);
    insertatbegin(3);
    insertatend(7);
    insertatend(14);
    insertatend(20);
    insertatbegin(2);
    insertatbegin(10);
    insertafternode(root->next->next->next->next->next->next, 8);
    insertafternode(root->next->next, 5);
    printf("Linked List: ");
    displayNode();
    
    deleteatbegin();
    deleteatbegin();
    deletenode(14);
    deletenode(20);
    printf("\nLinked List after deletion: ");
    displayNode();
    
    insertatbegin(2);
    insertafternode(root->next, 4);
    printf("\nUpdated Linked List: ");
    displayNode();
    
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
void displayNode()
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
void insertafternode(node *root, int x)
{
    node *tmp = root;
    node *new_node = malloc(sizeof(node));
    if (new_node == NULL){
        printf("unable to allocate memory\n");
        exit(1);
    }
    new_node->data = x;
    new_node->next = tmp->next;
    tmp->next = new_node;
}
void deleteatbegin()
{
    node *tmp = root;
    if (tmp)
    {
        root = tmp->next;
        free(tmp);
    }
}
void deleteatend()
{
    node *tmp = root;
    while (tmp->next->next)
    {
        tmp = tmp->next;
    }
    tmp->next = NULL;
    free(tmp);
}
void deletenode(int x)
{
    node *tmp = root;
    node *prev = NULL;
    if (tmp && tmp->data == x)
    {
        root = tmp->next;
    }
    else if (tmp == NULL)
    {
        printf("Node with the value %d not found", x);
        return;
    }
    while (tmp && tmp->data != x)
    {
        prev = tmp;
        tmp = tmp->next;
    }
    prev->next = tmp->next;
    free(tmp);
}
int searchlist(int x)
{
    node *tmp = root;
    while (tmp)
    {
        if (tmp->data == x){
            return (1);
        }
        tmp = tmp->next;
    }
    return (0);
}
