#include<stdio.h>
#include<stdlib.h>
struct node{
    int data ;
    struct node*next;
};
struct node*delete_end(struct node*head)
{
struct node*p=head;
struct node*q=head->next;
while(q->next!=NULL)
{
    p=p->next;
    q=q->next;
}
free(q);
p->next=NULL;
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
head=delete_end(head);
struct node *ptr=head;
while(ptr!=NULL)
{
    printf("%d\n",ptr->data);
    ptr=ptr->next;
}
return 0;
}