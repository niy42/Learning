#include <stdio.h>
#include <stdlib.h>
/**
 *
 */
typedef struct Node
{
	int data;
	struct Node *next;
} node;
void add(node **head, int value)
{ 
	node *tmp = malloc(sizeof(node));
	tmp->data = value;
	tmp->next = NULL;

	if (*head == NULL)
	{
		*head = tmp;
		return;
	}
	node *list;
	list = *head;
	while (list->next != NULL)
	{
		list = list->next;
	}
	list->next = tmp;
} 
void printNode(node *p)
{
	while (p)
	{
		printf("%d", p->data);
		p = p->next;
	}
}
int main(void)
{
	node *root;
	root = NULL;
	int i;

	i = 0;
	while (i < 8)
	{
		add(&head, i);
		++i;
	}
	printNode(root);
	return (0);
}
