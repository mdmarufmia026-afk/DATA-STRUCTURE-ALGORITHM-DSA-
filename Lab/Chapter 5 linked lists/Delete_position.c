#include<stdio.h>
#include<stdlib.h>
struct node{
    int data ;
    struct node*next;
};
struct node*delete_position(struct node*head, int index)
{
struct node*p=head;
struct node*q=head->next;
int i=0;
while(i<index-1)
{
    p=p->next;
    q=q->next; 
    i++;
}

p->next=q->next;
free(q);
return head;
}
int main()
{
     struct node*head;
struct node*n1;
struct node*n2;
struct node*n3;

head=(struct node*)malloc(sizeof(struct node));
n1=(struct node*)malloc(sizeof(struct node));
n2=(struct node*)malloc(sizeof(struct node));
n3=(struct node*)malloc(sizeof(struct node));

head->data=11;
head->next=n1;

n1->data=14;
n1->next=n2;

n2->data=13;
n2->next=n3;

n3->data=34;
n3->next=NULL;
head=delete_position(head,2);
struct node *ptr=head;
while(ptr!=NULL)
{
    printf("%d\n",ptr->data);
    ptr=ptr->next;
}
return 0;
}