/*
OVERVIEW: Given a single linked list, reverse the linked list.
E.g.: 1->2->3->4->5, output is 5->4->3->2->1.

INPUTS: A linked list.

OUTPUT: Reverse the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * reverseLinkedList(struct node *head) {
	struct node *past, *present, *future;
	present = head;
	past = NULL;
	future = NULL;
	while (present != NULL){
		future = present->next;
		present->next = past;
		past = present;
		present=future;
	}
	head = past;
	return head;

}
