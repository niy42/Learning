#include <stdlib.h>
#include <stdio.h>
/**
 *
 */
typedef struct node
{
	int data;
	struct node *next;
} node;
void add(node **head, int value)
{
	node *tmp;
	tmp = malloc(sizeof(node));
	tmp->data = value;
	tmp->next = NULL;

	if (*head == NULL)
	{
		*head = tmp;
		return;
	}
	node *list;
	list = *head;
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
		if (list != )
			printf(", ");
		list = list->next;
	}
}
int main(void)
{
	int i;
	node *root;
	root = NULL;

	i = 0;
	do {
		add(&root, i);
		++i;
	} while (i < 5);
	printNode(root);
	return (0);
}
