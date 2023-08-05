#include <stdio.h>
/**
 *
 *
 */
struct Node
{
	int data;
	struct Node *next;
};
void printLinked_list(struct Node *node)
{
	while (node != NULL)
	{
		printf("%d", node->data);
		node = node->next;
	}
}
int main(void)
{

