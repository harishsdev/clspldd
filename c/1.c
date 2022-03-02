#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *link;
};
int main()
{
	struct node *head=NULL;
	push(head,10);
	push(head,20);
	push(head,30);
	display(head);
	return 0;
}
void push(struct node *head_ref,int data)
{
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	temp->data=data;
	temp->link=head_ref
	head_ref=temp;
	
}
void display(struct node *t){
	printf("\n");
	while(t!=NULL){
		printf("/n%d->",t->data);
		t=t->link;
	}
	printf("\n");
}

