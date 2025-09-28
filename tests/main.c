#include "SinglyLinkedList.h"
#include <stdio.h>
#include <stdlib.h>

void sllist_print(t_sllist *list)
{
	if (!list)
	{
		printf("List is NULL\n");
		return;
	}
	
	t_slnode *current = list->head;
	printf("List contents: ");
	
	while (current)
	{
		printf("\"%s\"", (char *)current->data);
		if (current->next)
			printf(" -> ");
		current = current->next;
	}
	printf("\n");
}

int main(void)
{
	t_sllist *list = sllist_new();
	t_slnode *prev = sllist_append(list, "first");
	t_slnode *node = sllist_append(list, "second");

	sllist_print(list);
	sllist_pop(list, node, prev);
	sllist_print(list);

	exit(0);
}
