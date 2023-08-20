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
void add(node **root, int value)
{
	node *tmp;
	tmp = malloc(sizeof(node));
	tmp->data = value;
	tmp->next = NULL;

	if (*root == NULL)
	{
		*root = tmp;
		return;
	}
	node *list;
	list = *root;
	while (list->next)
	{
		list = list->next;
	}
	list->next = tmp;
}
void printNode(node *list)
{
	for (; list != NULL;)
	{
		printf("%d", list->data);
		list = list->next;
	}
}
int main(void)
{
	node *head;
	head = NULL;
	int i;

	i = 0;
	do {
		add(&head, i);
		++i;
	} while (i < 7);
	printNode(head);
	return (0);
}
