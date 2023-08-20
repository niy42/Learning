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
	node *tmp = malloc(sizeof(node));
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
	while (list)
	{
		printf("%d", list->data);
		list = list->next;
	}
}
int main(void)
{
	node *head = NULL;
	int i;

	i = 0;
	do {
		add(&head, i);
		if (i != 4)
			printf(", ");
		++i;
	} while (i < 5);
	printNode(head);
	return (0);
}
