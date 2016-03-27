/*
OVERVIEW: Given a single sorted linked list find the median element of the single linked list.
Median is the middle element.
E.g.: 1->2->3->4->5, output is 3.

INPUTS: A sorted linked list.

OUTPUT: Return median of the linked list elements.

ERROR CASES: Return -1 for error cases.

NOTES: If length is even, return average of middle pair of numbers.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

int linkedListMedian(struct node *head) {
	if (head==NULL)
		return -1;
	int count=0, median = 0,i=0;
	struct node* temp;
	temp = head;
	while (temp != NULL){
		count++;
		temp = temp->next;
	}
	temp = head;
	if (count % 2 != 0){
		while (i != (int)((count / 2)+1)){
			median = temp->num;
			temp = temp->next;
			i++;
		}
	}
	else{
		while (i != (int)((count / 2))){
			median = temp->num;
			temp = temp->next;
			i++;
		}
		median += temp->num;
		median = (int)(median / 2);
	}
	return median;
}
